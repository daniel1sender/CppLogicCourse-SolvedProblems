		#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
         double A;
    cin>>fixed>>setprecision(2)>>A;
    if((A>=0) && (A<=400)){
        cout<<fixed<<setprecision(2)<<"Novo salario: "<<(A+(0.15*A))<<endl;
        cout<<fixed<<setprecision(2)<<"Reajuste ganho: "<<(0.15*A)<<endl;
        cout<<fixed<<setprecision(2)<<"Em percentual: 15 %"<<endl;
        
    }
    if((A>400) && (A<=800)){
        cout<<fixed<<setprecision(2)<<"Novo salario: "<<(A+(0.12*A))<<endl;
        cout<<fixed<<setprecision(2)<<"Reajuste ganho: "<<(0.12*A)<<endl;
        cout<<fixed<<setprecision(2)<<"Em percentual: 12 %"<<endl;
        
    }
    if((A>800) && (A<=1200)){
        cout<<fixed<<setprecision(2)<<"Novo salario: "<<(A+(0.10*A))<<endl;
        cout<<fixed<<setprecision(2)<<"Reajuste ganho: "<<(0.10*A)<<endl;
        cout<<fixed<<setprecision(2)<<"Em percentual: 10 %"<<endl;
        
    }
    if((A>1200) && (A<=2000)){
        cout<<fixed<<setprecision(2)<<"Novo salario: "<<(A+(0.07*A))<<endl;
        cout<<fixed<<setprecision(2)<<"Reajuste ganho: "<<(0.07*A)<<endl;
        cout<<fixed<<setprecision(2)<<"Em percentual: 7 %"<<endl;
        
    }
    if(A>2000){
        cout<<fixed<<setprecision(2)<<"Novo salario: "<<(A+(0.04*A))<<endl;
        cout<<fixed<<setprecision(2)<<"Reajuste ganho: "<<(0.04*400)<<endl;
        cout<<fixed<<setprecision(2)<<"Em percentual: 4 %"<<endl;
        
    }
}
