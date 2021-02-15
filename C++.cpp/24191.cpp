#include <iostream>

using namespace std;

int main(){

	int M, N, C=0, i, j;
	cin>>M>>N;
	char G[M][N];

	for (i=0;i<M;i++){
		for (j=0;j<N;j++){
			cin>>G[M][N];
		}
	}
	
	for (i=0;i<M;i++){
		for (j=0;j<N;j++){
			if (G[M][N]=='#'){C++;
				if (G[M][N]==G[M][N-1]) C++;
				if (G[M][N]==G[M][N+1]) C++;
				if (G[M][N]==G[M+1][N]) C++;
				if (G[M][N]==G[M-1][N]) C++;
			}
		cout<<C<<endl;
		}
	}

}
