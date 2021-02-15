#include <iostream>
#include <string.h>

using namespace std;

int main(){

	int QT, n1, n2, j=0;
	string J1, J2, E1, E2;
	cin>>QT;
	while(j<QT){
		cin>>J1>>E1>>J2>>E2;
		cin>>n1>>n2;
		if ((n1+n2)%2==0){
			if(E1[0]=='P') cout<<J1<<endl;
			else cout<<J2<<endl;
		}
		else {if(E1[0]=='P')cout<<J2<<endl;
				else cout<<J1<<endl;}
	
	j++;
	}
}
