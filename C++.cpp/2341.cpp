#include <iostream>
using namespace std;

int main(){
	
	int N, K, j=0, i, x, min=100000;
	cin>>N>>K;
	int B[N]={0}, T[K]={0}, t[K]={0};
	
	for(x=0;x<K;x++){
		T[x]=x+1;
	}
	while(j<N){		
		cin>>B[j];		
		for(x=0;x<K;x++){
			if (B[j]==T[x]){
				t[x]++;
			}			
		}		
	j++;
	}	
	for(i=0;i<K;i++){
		if (t[i]<=min){
			min=t[i];
		}
	}
cout<<min<<endl;
}
