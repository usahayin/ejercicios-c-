/* Un obrero necesita calcular su salario semanal, el cual se obtiene de la sig. manera: 
Si trabaja 40 horas o menos se le paga $16 por hora
Si trabaja mas de 40 horas se le paga $16 por cada una de las primeras 40 horas y $20 por cada hora extra.*/

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	
	int horast=0,extrast=0,salario=0;
		cout<<"ingrese horas trabajadas en una semana "<<endl;
	cin>>horast;
     
	if(horast>=40){
	
		extrast=horast-40;
		salario=(16*40)+(extrast*20);
	}
	else(salario=16*horast);
	cout<<"el salario del trabajador es "<<endl<<"$"<<salario<<" mil pesos"<<endl;
	system("PAUSE");
	return 0;
}

