#include <iostream>

using namespace std;

int main(){

	int N, i, M, T[8][8];
	cin>>N:

	for (i=0;i<N;i++){
		cin>>M;
		cin>>X>>Y;
		if (M==1)T[X+1][Y+2];
		if (M==2)T[X+2][Y+1];
		if (M==3)T[X+2][Y-1];
		if (M==4)T[X+1][Y-2];
		if (M==5)T[X-1][Y-2];
		if (M==6)T[X-2][Y-1];
		if (M==7)T[X-2][Y+1];
		if (M==8)T[X-1][Y+2];
		
		if (T[1][3]){
			break;
			cout<<i<<endl;
		}
		if (T[2][3]){
			break;
			cout<<i<<endl;
		}
		if (T[2][5]){
			break;
			cout<<i<<endl;
		}
		if (T[5][4]){
			break;
			cout<<i<<endl;
		}
		
		if (i==N) cout<<i<<endl;
	}

}
