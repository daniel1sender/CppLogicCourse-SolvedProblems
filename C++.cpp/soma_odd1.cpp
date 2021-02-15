#include <iostream>
using namespace std;

int main(){
	int X, Y, i, S=0, max, min;
	cin>>X>>Y;
	if (X<0){X=X*(-1);}
	if (Y<0){Y=Y*(-1);}	
	if (X>Y){min=Y;max=X;}
	else {min=X;max=Y;}
	if (min%2==0){min+=1;}
	if (max%2==0){max-=1;}	
	for (i=min;i<=max;i+=2){
		S+=i;}
cout<<S<<endl;
}
