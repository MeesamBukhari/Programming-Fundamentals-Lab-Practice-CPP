#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
	srand(time(0)) ;
	
	int rand1 ;
	
	int x=19, y=12 ;
	int gx=9, gy=7 ;
	int g1=9, g2=17 ;
	int i, j ;
	int b=0 ;
	bool l = 1 ;
	char ch ;
	char a[25][25];
	a[x][y] = '>' ;
	a[gx][gy] = '8' ;
	a[g1][g2] = '8' ;
	
	
	for(int i=0 ; i<25 ; i++)
	{
		for(int j=0 ; j<25 ; j++)
		{
			if(i==0||j==0||i==24||j==24)
			{
				a[i][j] = '#' ;
			}
			else if(((i==3||i==4)&&j>=3&&j<=8)||((i==3||i==4)&&j>=16&&j<=21))
			{
				a[i][j] = '#' ;
			}
			else if((i>=8&&i<=16&&(j==4||j==20))||(i==8&&j>=8&&j<=16))
			{
				a[i][j] = '#' ;
			}
			else if((i>=9&&i<=13&&j==12)||(i==12&&j>=5&&j<=9)||(i==12&&j>=15&&j<=19))
			{
				a[i][j] = '#' ;
			}
			else if((i==16&&j>=8&&j<=10)||(i==16&&j>=14&&j<=16))
			{
				a[i][j] = '#' ;
			}
			else if(i>=17&&i<=21&&(j==8||j==16))
			{
				a[i][j] = '#' ;
			}
			else if(i==21&&j>=8&&j<=16)
			{
				a[i][j] = '#' ;
			}
			else if((i==20||i==21)&&(j>=3&&j<=6)&&(j>=18&&j<=21))
			{
				a[i][j] = '#' ;
			}
			else if(i==x&&j==y)
			{
				a[i][j] ;
			}
			else if(i==9&&(j==17||j==7))
			{
				a[i][j] ;
			}
			else
				a[i][j]='.' ;	
		}
			
	}	
	do	
	{
		for(int i=0 ; i<25 ; i++)
		{
			for(int j=0 ; j<25 ; j++)
			{
				cout << a[i][j] << " " ;
			}
			cout << endl ;	
		}	
		rand1 = 1+(rand()%4);
		
		switch(rand1)
		{
			case 1:
				if(a[gx+1][gy]!='#'&&a[g1+1][g2]!='#')
				{
					a[gx][gy]='.' ;
					a[g1][g2]='.' ;
					gx++;
					g1++;
					a[gx][gy]='8' ;
					a[g1][g2]='8' ;
					break;
				}	
			case 2:
				if(a[gx-1][gy]!='#'&&a[g1-1][g2]!='#')
				{
					a[gx][gy]='.' ;
					a[g1][g2]='.' ;
					gx--;
					g1--;
					a[gx][gy]='8' ;
					a[g1][g2]='8' ;
					break;
				}
			case 3:
				if(a[gx][gy+1]!='#'&&a[g1][g2+1]!='#')
				{
					a[gx][gy]='.' ;
					a[g1][g2]='.' ;
					gy++;
					g2++;
					a[gx][gy]='8' ;
					a[g1][g2]='8' ;
					break;
				}	
			case 4:
				if(a[gx][gy-1]!='#'&&a[g1][g2-1]!='#')
				{
					a[gx][gy]='.' ;
					a[g1][g2]='.' ;
					gy--;
					g2--;
					a[gx][gy]='8' ;
					a[g1][g2]='8' ;
					break;
				}
								
		}
		// cin >> ch ;
		cin.get(ch);
		if(ch=='w'&&x>1&&a[x-1][y]!='#')			
		{	
			a[x][y]=' ' ;
			x--;
			a[x][y]='^';		
		}
		else if(ch=='s'&&x<23&&a[x+1][y]!='#')
		{
			a[x][y]=' ' ;
			x++;
			a[x][y]='V';
		}
		else if(ch=='a'&&y>1&&a[x][y-1]!='#')
		{
			a[x][y]=' ' ;
			y--;
			a[x][y]='<';
		}
		else if(ch=='d'&&y<23&&a[x][y+1]!='#')
		{
			a[x][y]=' ' ;
			y++;
			a[x][y]='>';
		}
		if(a[x][y]==a[gx][gy]||a[x][y]==a[g1][g2])
		{
			cout << "GAME ENDS" ;
			return 0 ;
		}
		
		if((a[x][y]=='^'||a[x][y]=='V')&&a[x-1][y]=='8'&&a[x+1][y])
		{
			cout << "GAME ENDS" ;
			return 0 ;
		}
		else if((a[x][y]=='<'||a[x][y]=='>')&&a[x][y-1]=='8'&&a[x][y+1])
		{
			cout << "GAME ENDS" ;
			return 0 ;
		}
		b++ ;
		system("clear");
	}while(b<25*25);
	
	
	return 0 ;
	 
}