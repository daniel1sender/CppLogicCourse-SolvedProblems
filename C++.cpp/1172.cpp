#include <iostream>
using namespace std;

int main(){

	int X[10], i, x;
	
	for (i=0;i<10;i+=1){
	cin>>X[i];
	if (X[i]<=0){X[i]=1;}
	x=X[i];
	cout<<"X["<<i<<"] = "<<x<<endl;
	}
}

