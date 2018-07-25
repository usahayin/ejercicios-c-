/*3)Tres personas deciden invertir su dinero para fundar una empresa.
Cada una de ellas invierte una cantidad distinta.
Obtener el porcentaje que cada quien invierte con respecto a la cantidad total invertida.*/

#include<iostream>
#include<stdlib.h>

using namespace std;
int main(){
	int inver1,inver2,inver3,it;
	
	cout<<"ingrese cantidad de inversion 1"<<endl;
	cin>>inver1;
	cout<<"ingrese cantidad de inversion 2"<<endl;
	cin>>inver2;
	cout<<"ingrese cantidad de inversion 3"<<endl;
	cin>>inver3;
	it=inver1+inver2+inver3;
	inver1=inver1*100/it;
	inver2=inver2*100/it;
	inver3=inver3*100/it;
	
	cout<<"El porcentaje de la inversion 1 es: "<<inver1<<" %"<<endl;
	cout<<"El porcentaje de la inversion 2 es: "<<inver2<<" %"<<endl;
	cout<<"El porcentaje de la inversion 3 es: "<<inver3<<" %"<<endl;
	
	system("pause");
	return 0;
}
