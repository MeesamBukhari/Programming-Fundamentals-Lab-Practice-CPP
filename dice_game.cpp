#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	//Planting a seed of current time for random values
	srand(time(0));
	
	//Initializing scores and count for alternating players turn
	int score1 = 0 , score2 = 0 , cnt=0;
	
	//Loop runs till both scores are less than 100
	while( score1<96 && score2<96 )
	{
		//Turn of player 1
		if( cnt%2==0 )
		{
			int dice1 = rand()%6 +1;
			cout << "PLayer 1 dice roll is: " << dice1 << endl;
			score1 += dice1;
		}
		//Turn of player 2
		else
		{
			int dice2 = rand()%6 +1;
			cout << "PLayer 2 dice roll is: " << dice2 << endl;
			score2 += dice2; 
		}				
		//This will change players turn upon every iteration
		cnt++;
	}
	
	//If score 1 is greater than player 1 wins
	if( score1 > score2 )
	{
		cout << "\nPlayer 1 wins!\n";
		cout << "Score of player 1: " << score1 << endl;
		cout << "Score of player 2: " << score2 << endl;		
	}
	//Else player 2 will win
	else{
		cout << "\nPlayer 2 wins!\n";
		cout << "Score of player 2: " << score2 << endl;		
		cout << "Score of player 1: " << score1 << endl;	
	}
	
	return 0;
}