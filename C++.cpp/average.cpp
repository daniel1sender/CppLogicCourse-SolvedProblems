#include <iostream> 
#include <iomanip>
using namespace std; 

int main() {

int N, i;
float A, B, C, M;	
cin>>N;

for (i=0; i<N; ++i){
	cin>>A>>B>>C;	
	M= (A*2+B*3+C*5)/10;
	cout<< fixed << setprecision(1) << M <<endl;
}
}
