#include <iostream>
using namespace std;
int main(){
	int num, n1 = 0, n2 = 1, next;
	cout<<"Enter the number of elements: ";
	cin>>num;
	cout<<n1<<"\t"<<n2;
//	0,1,1,2,3,5,8,13,21,34
	for(int i = 0; i < num; i++){
		next = n1 + n2;
		cout<<"\t"<<next<<"\t";
		n1 = n2;
		n2 = next;
	}
}

