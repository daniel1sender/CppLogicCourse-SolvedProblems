#include <iostream>
using namespace std;

int main()
{

	int i, X, soma;
	while(true){
		soma=0;
		cin>>X;
		if (X==0)break;
		if (X%2!=0)X++;
		for(i=0;i<5;i++){
			soma+=X;
			X+=2;
		}
	cout<<soma<<endl;
	}
	return 0;
}
