#include <iostream>

using namespace std;

int main(){

	int N, i, M, T[8][8], X=4, Y=3;
	cin>>N;
	
	for (i=1;i<=N;i++){
		cin>>M;
		if (M==1){X+=1;Y+=2;}
		if (M==2){X+=2;Y+=1;}
		if (M==3){X+=2;Y-=1;}
		if (M==4){X+=1;Y-=2;}
		if (M==5){X-=1;Y-=2;}
		if (M==6){X-=2;Y-=1;}
		if (M==7){X-=2;Y+=1;}
		if (M==8){X-=1;Y+=2;}
		
		if (X==1 && Y==3){
			cout<<i<<endl;
			break;
		}
		if (X==2 && Y==3){
			cout<<i<<endl;
			break;
		}
		if (X==2 && Y==5){
			cout<<i<<endl;
			break;
		}
		if (X==5 && Y==4){
			cout<<i<<endl;
			break;
		}
		
		if (i==N) cout<<N<<endl;
	}

}
