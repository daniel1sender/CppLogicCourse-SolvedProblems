#include <iostream>
using namespace std;

int main(){

	int N[20], i, Y;
	
	for(i=0;i<20;i+=1){
	cin>>N[19-i];
	}
	for(i=0;i<20;i+=1){
	cout<<"N["<<i<<"] = "<<N[i]<<endl;
	}
}
