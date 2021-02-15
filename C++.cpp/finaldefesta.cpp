#include <iostream>
 
using namespace std;
 
int main() {
    int A1, B1, C1;
    int A2, B2, C2;
    int D=0, E=0, F=0;
    
    cin>>A1>>B1>>C1;
    cin>>A2>>B2>>C2;
    if ((A2<=A1) && (B2<=B1) && (C2<=C1)){
        cout<<"0"<<endl;
    }
    else {
    if (A2>A1) D=A2-A1;
	//else if D=0;
    if (B2>B1) E=B2-B1;
	//else if E=0;
    if (C2>C1) F=C2-C1;
	cout<<""<<(D+E+F)<<endl;
   	} 	 
   
}
