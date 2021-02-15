#include <iostream>
using namespace std;

int main(){

	int T, N[1000], i, x=0;

	cin>>T;
	
	for(i=0;i<1000;i+=1){
	cout<<"N["<<i<<"] = "<<x<<endl;
	x+=1;
	if (x==T){x=0;}
	}
}	
	
