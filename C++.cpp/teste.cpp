#include <iostream>

using namespace std;

int main(){

	int a, b, c, d, e;
	int pos=0, neg=0, par=0, imp=0;
	cin>>a>>b>>c>>d>>e;

//positivo ou negativo
	if (a >=1) pos++;
	else if (a<0) neg++;
	if (b >=1) pos++;
	else if (b<0) neg++;
	if (c >=1) pos++;
	else if (c<0) neg++;
	if (d >=1) pos++;
	else if (d<0) neg++;
	if (e >=1) pos++;
	else if (e<0) neg++;
//par ou impar
	if (a%2 == 0) par++;
	else if(a%2 !=0) imp++;
	if (b%2 == 0) par++;
	else if(b%2 !=0) imp++;
	if (c%2 == 0) par++;
	else if(c%2 !=0) imp++;
	if (d%2 == 0) par++;
	else if(d%2 !=0) imp++;
	if (e%2 == 0) par++;
	else if(e%2 !=0) imp++;
//couts
	cout<<par<<" valor(es) par(es)"<<endl;
	cout<<imp<<" valor(es) impar(es)"<<endl;
	cout<<pos<<" valor(es) postivo(s)"<<endl;
	cout<<neg<<" valor(es) negativo(s)"<<endl;
}
