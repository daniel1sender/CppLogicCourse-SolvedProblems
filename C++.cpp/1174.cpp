#include <iostream>
#include <iomanip>
using namespace std;

int main(){

	int A[100], i;
	double X;

	for (i=0; i<100; i+=1){
		cin>>X;
		A[i]=X;
		if(X<=10){cout<<"A["<<i<<"] = "<<fixed<<setprecision(1)<<X<<endl;
		}
	}
}
