#include <iostream>
using namespace std;

int main(){

	int N, M, i, j=0, P, D;
	
	cin>>N>>M;

	int T[N];

	while(j<M){
		cin>>P>>D;	
	if(P>D){		
		for(i=P-(D+1);i<N;i+=D){
		T[i]=1;
		}
	}
	else{
		for(i=P-1;i<N;i+=D){
		T[i]=1;
		}
	}
	j++;
	}
	for(i=0;i<N;i++){
		if (T[i]!=1){T[i]=0;}
		cout<<T[i]<<endl;
	}
}
