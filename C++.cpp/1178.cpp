#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int i, j=0;
	double X, Y;
	double N[100];
	
	cin>>X;
	N[0]=X;
	for(i=1;i<100;i+=1){
		X=X/2;
		N[i]=X;
	}
	while(j<100){
		Y=N[j];
		cout<<"N["<<j<<"] = "<<fixed<<setprecision(4)<<Y<<endl;
		j+=1;
	}	
}
