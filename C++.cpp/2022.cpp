#include <iostream>
using namespace std;

int main(){

	
	int i, n, a, soma=0, b=0;
	
	cin>>n;
	int T[n];
	
	for (i=0;i<n;i+=1){
		cin>>a;
		T[i]=a;
		soma+=a;
		b+=1;
		if (b==soma/2){
			cout<<i<<endl;
		}
	}

}
