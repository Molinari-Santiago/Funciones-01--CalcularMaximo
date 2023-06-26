#include <iostream>

using namespace std;
int CalcularMaximo(int a, int b);
int main(){
	
	int n1, n2;
	cout<<"ingrese un numero"<<endl;
	cin>>n1;
	cout<<"ingrese otro numero"<<endl;
	cin>>n2;
	cout<<" el maximo es: "<<CalcularMaximo(n1,n2);
	return 0;
}

    int CalcularMaximo(int a,int b){
    int M;
    if(a>b){
    	M=a;
		}
		else if(a<b){
		M=b;
		}
		return M;
	}














