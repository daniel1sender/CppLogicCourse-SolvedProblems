#include <iostream>

using namespace std;

int main(){

float s;
cin>>s;   

if (s<2000) {
	cout << "isento"<< endl;}
	
if ((s>2000) && (s<3000)) {
	 s-2000*(0.08)}

if ((s>3000) && (s<4500)) {
	s-3000*(0.18) + 1000*(0.08)}

if (s>4500) {
	s-4500*(0.28) + 1500*(0.18)}

cout<<s<<endl;
}
