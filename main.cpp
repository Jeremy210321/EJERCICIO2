#include <iostream>
#include <cstdlib>
using namespace std;
int suma(int nro){
	if (nro==0) return 0;
	if (nro==1) return 1;
	else return nro+suma(nro-1);
	
}
int main (void){
	int nro;
	cout<<"Ingrese el numero para sumar sus dijitos: ";
	cin >> nro;
	
	cout<<endl<<endl;
	for (int i=1;i<nro+1;i++){
		cout<<i;
		if(i<nro) cout<<"+";
	}
	cout<<"\n\nSuma: "<<suma(nro)<<endl<<endl;
	return 0;
}
