#include <iostream>
#include <math.h>

using namespace std;


int rafael(int x,int y){
	int r;
	r=((pow(3*x,2)) + (pow(y, 2)));
	return r;
}

int carlos(int x, int y){
	int c;
	c = (-100 * x + (pow(y, 3)));
	return c;
}

int beto(int x, int y){
	int b;
	b = (2 * (pow(x, 2)) + (pow(5*y, 2)));
	return b;
}

int main(){

	int x, y, r1, r2, r3, maior, i=0, n;
	cin>>n;
	while(i<n){
		
	cin>>x>>y;	
	
	r1=rafael(x,y);
	r2=carlos(x,y);
	r3=beto(x,y);

	if (r1>r2 && r1>r3) maior=r1;
	if (r2>r3 && r2>r1) maior=r2;
	if (r3>r1 && r3>r2) maior=r3;

	if (maior==r1) cout<<"Rafael ganhou"<<endl;
	if (maior==r2) cout<<"Carlos ganhou"<<endl;
	if (maior==r3) cout<<"Beto ganhou"<<endl;
i++;
	}
}


