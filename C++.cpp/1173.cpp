#include <iostream>
using namespace std;

int main(){
	int N[10],V, i, X;
	cin>>V;
	N[0]=V;
	for(i=0;i<10;i+=1){	
	if(i==0){cout<<"N["<<i<<"] = "<<N[0]<<endl;}
	else{	//
	N[i]=N[i-1]*2;
	X=N[i];	
	cout<<"N["<<i<<"] = "<<X<<endl;}
	}
}


//N[0]=1, N[1]=2, N[2]=4, N[3]=8
//N[0]=3, N[1]=N[0]*2=6, N[2]=N[0]*4=12, N[3]=N[0]*8=24
