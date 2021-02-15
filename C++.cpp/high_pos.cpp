#include <iostream>
using namespace std;

int main(){

	int N, i, aux=0, max, pos;
	
	for (i=1; i<101;i++){
	cin>>N;
	if (N>aux){aux=N;
	max=N;
	pos=i;}
	}
cout<<max<<endl<<pos<<endl;
}
