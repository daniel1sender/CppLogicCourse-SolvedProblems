#include <iostream>
#include <iomanip>
using namespace std; 

int main (){
	int N, amount=0, i=0;
	float Nc=0, Nr=0, Ns=0, T=0;	
	char type;	
	cin>>N;
	while(i<N){i++;
	amount=0;
	cin>>amount;
	cin>>type;
	T+=amount;
	if (type=='C') Nc+=amount;
	else if (type=='R') Nr+=amount;
	else Ns+=amount;
	}
	cout<<"Total: "<< T <<" cobaias"<<endl;
	cout<<"Total de coelhos: "<< Nc <<endl;
	cout<<"Total de ratos: "<< Nr <<endl;
	cout<<"Total de sapos: "<< Ns <<endl;
	cout<<"Percentual de coelhos: "<<fixed<<setprecision(2)<<(Nc/T)*100<<" %"<<endl;
	cout<<"Percentual de ratos: "<<fixed<<setprecision(2)<<(Nr/T)*100<<" %"<<endl;
	cout<<"Percentual de sapos: "<<fixed<<setprecision(2)<<(Ns/T)*100<<" %"<<endl;	
}
