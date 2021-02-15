#include <iostream>

using namespace std;

int main(){

	int T, N, i=0, j;
	cin>>T; 

	while (i<T){
		cin>>N;
		long long fib[N];
		if(N==0){
			fib[N]=0;
			cout<<"Fib("<<N<<") = "<<fib[N]<<endl;
		}
		else if(N==1){
			fib[N]=1;
			cout<<"Fib("<<N<<") = "<<fib[N]<<endl;
		}	
		else{fib[0]=0;fib[1]=1;
			for(j=2;j<=N;j+=1){
				fib[j]=fib[j-1]+fib[j-2];
				if(j==N){cout<<"Fib("<<j<<") = "<<fib[j]<<endl;
				}		
			}
		}
	i+=1;
	}
}


