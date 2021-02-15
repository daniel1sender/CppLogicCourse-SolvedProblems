#include <iostream>
using namespace std;

int main(){
	int X, Y, N=1, Gi=0, Gg=0, J=0, E=0, Vi=0, Vg=0;

	while(N==1){
	cin>>X>>Y;
	J+=1;
	if (N==2)break;
	if (X>Y) Vi+=1;
	else if (X==Y) E+=1;	
	else Vg+=1;
	cout<<"Novo grenal (1-sim 2-nao)"<<endl;
	cin>>N; 
	}
cout<<J<<" grenais"<<endl;
cout<<"Inter:"<<Vi<<endl;
cout<<"Gremio:"<<Vg<<endl;
cout<<"Empates:"<<E<<endl;
if (Vi>Vg) cout<<"Inter venceu mais"<<endl;
else if (Vg>Vi) cout<<"Gremio venceu mais"<<endl;
else cout<<"Não houve vencedor"<<endl;
}
