#include <iostream>
 
using namespace std;
 
int main() {
 
int A,N,i,soma=0;

cin>>A>>N;

while(N<=0){cin>>N;}

for (i=0;i<N;i++){
soma=soma+A+i;
}
cout<<soma<<endl;
}
