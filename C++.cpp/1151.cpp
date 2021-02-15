#include <iostream>
using namespace std;

int main(){

	int N, i;
	cin>>N;	
	long long F[45];
	F[0]=0;F[1]=1;
	
	for (i=2;i<N;i++){
		F[i]=F[i-1]+F[i-2];		
	}
	
	for (i=0;i<N;i++){
		if (i==N-1){
			cout<<F[i]<<endl;			
			break;
		}
		cout<<F[i]<<" ";	
	}	

}
