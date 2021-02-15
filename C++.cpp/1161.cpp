#include <iostream>

using namespace std;

int main(){

	long long i, M, N;
	long long fat1, fat2;

	while(cin>>M>>N){
		fat1=1;fat2=1;	

		int F1[M], F2[N];

		for (i=0;i<M;i++){
			F1[i]=i+1;
			fat1=fat1*F1[i];
		}
		for (i=0;i<N;i++){
			F2[i]=i+1;
			fat2=fat2*F2[i];
		}

		cout<<fat1+fat2<<endl;
	}
}

