#include <iostream>
#include <iomanip>

using namespace std;

int main(){

int N, type, i;
float S=0, R=0, C=0, q=0;
cin>>N;
for (i=1; i<N; i++){ 
	cin>>type;
	cin>>q;		
	if (type=='S') {S+=q;}
	else if (type=='R') {R+=q;}
	else if (type=='C') {C+=q;}
}
cout<<q<<S<<R<<C<<endl;
cout<<(S/q)*100<<(R/q)*100<<(C/q)*100<<endl;
}
	
