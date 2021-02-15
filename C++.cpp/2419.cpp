#include <iostream>

using namespace std;

int main(){

	int M, N, F=0, i, j, aux1=0, aux2=0, aux3=0, aux4=0;
	cin>>M>>N;
	char G[M][N];

	for (i=0;i<M;i++){
		for (j=0;j<N;j++){
			cin>>G[i][j];
		}
	}
	
	for (i=0;i<M;i++){
		for (j=0;j<N;j++){
			if (G[i][j]=='#'){
				F++;
				if (G[i+1][j]=='#'){aux1++;
					if (G[i-1][j]=='#'){aux2++;
						if (G[i][j]=='#'){aux3++;
							if (G[i][j-1]=='#'){F--;aux4++; 
							}
						}
					}
				}
			}
		}
	}
cout<<F<<endl;
cout<<aux1<<endl;
cout<<aux2<<endl;
cout<<aux3<<endl;
cout<<aux4<<endl;
}
