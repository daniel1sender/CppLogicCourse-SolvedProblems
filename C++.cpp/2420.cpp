#include <iostream>
using namespace std;

int main(){

	
	int i, n, soma=0, a=0;
	
	cin>>n;
	int T[n];
	
	for (i=0;i<n;i+=1){
		cin>>T[i];
		soma+=T[i];
	}

	for (i=0;i<n;i++){
		a+=T[i];
		if(a==soma/2){
			cout<<i+1<<endl;
		}		
	}
}

		






