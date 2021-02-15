#include <iostream>
using namespace std;

int main(){

	int X, impar[5], par[5], i, j=0, k=0, a, b;
		
	for(i=0;i<15;i+=1){
		cin>>X;
		
		if (X%2==0){
			par[j]=X;
			j+=1;
		}
		else {
			impar[k]=X;
			k+=1;
		}		
		
		if (j==5){
			for(a=0;a<5;a+=1){
			cout<<"par["<<a<<"] = "<<par[a]<<endl;
			}
			j=0;
		}
		if (k==5){
			for(a=0;a<5;a+=1){
			cout<<"impar["<<a<<"] = "<<impar[a]<<endl;
			}
			k=0;		
		}
		if (i==14){
			b=0;
			while(b<k){cout<<"impar["<<b<<"] = "<<impar[b]<<endl;
			b+=1;
			}
			b=0;
			while(b<j){cout<<"par["<<b<<"] = "<<par[b]<<endl;
			b+=1;
			}
		}
	}
}
