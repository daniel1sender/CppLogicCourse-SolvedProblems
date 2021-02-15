#include <iostream>
using namespace std;

int main(){
	int N, X, Y, i=0, j, soma;
	cin>>N;
	while(i<N){i++;
		soma=0;
		cin>>X>>Y;	
		if (X%2==0)X++;
		for(j=0;j<Y;j++){
			soma+=X;			
			X+=2;
		}
	cout<<soma<<endl;	
	}	

}
