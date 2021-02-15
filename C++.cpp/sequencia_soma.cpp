#include <iostream>
using namespace std;

int main(){
	
	int M, N, soma;
	
	while(true){
		soma=0;
		cin>>M>>N;
		if ((M<=0) || (N<=0)){break;}
	    if (M>N){
			while(N<=M){
			cout<<N<<" ";//" " espaço entre os n
			soma+=N;
			N++;}
 		cout<<"Sum="<<soma;
		cout<<endl;	//endl para n e soma na mesma linha
		}
		else if(N>M){
			while(N>=M){
			cout<<N<<" ";
			soma+=N;
			N++;}
		cout<<"Sum="<<soma;
		cout<<endl;
		}
	}
}
