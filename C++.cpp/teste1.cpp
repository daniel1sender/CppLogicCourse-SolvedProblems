#include <iostream>
using namespace std;

int main(){

	int meio, inicio, fim, i, N, key, j=0;
	cin>>N;
	int T[N];
	
	for (i=0;i<N;i++){
		cin>>T[i];
	}
	cin>>key;
	inicio=T[0];
	fim=T[N-1];

	while (inicio<=fim){
		j++;
		meio=(inicio+fim)/2;
		if (meio==key){
			cout<<meio<<endl;
			break;
		}
		else if (T[meio]>key) fim=meio;
		else inicio=meio;
	}
cout<<j<<endl;
}
