#include <iostream>
using namespace std;

int main(){

	int N, i;

	cin>>N;
	int V[N];

	for(i=1;i<=N;i++){
	cin>>V[i];
	}

	V[0]=V[N+1]=0;
		
	for(i=1;i<=N;i++){
	cout<<V[i-1] + V[i] + V[i+1]<<endl;	
	}
}
