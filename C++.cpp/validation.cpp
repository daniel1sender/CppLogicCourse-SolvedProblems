#include <iostream>
#include <iomanip>
using namespace std;

int main(){

	double H, N, M;
	int X=1;	
	
	while(X==1){
	cin>>H;
		while((H<0) || (X>10)){cout<<"nota invalida"<<endl;cin>>H;}  
	cin>>N;
		while((N<0) || (N>10)){cout<<"nota invalida"<<endl;cin>>N;}
	
	M=(H+N)/2;
	cout<<fixed<<setprecision(2)<<"media = "<<M<<endl;
	
	cin>>X;
	cout<<"novo calculo (1-sim 2-nao)"<<endl;
	
	while((X>2)||(X<1)){
	cout<<"novo calculo (1-sim 2-nao)"<<endl;	
	cin>>X;}
	if (X==2)break;
	}
}
