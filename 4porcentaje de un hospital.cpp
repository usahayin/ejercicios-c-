/*4)En un hospital existen tres �reas: Ginecolog�a, Pediatr�a, Traumatologia.
El presupuesto anual del hospital se reparte conforme a la sig. tabla:
Ginecolog�a=40%, Traumatologia=30%, Pediatr�a=30%.  			
Obtener la cantidad de dinero que recibir� cada �rea,
para cualquier monto presupuestal.*/

#include<iostream>
#include<stdlib.h>

using namespace std;
int main(){

float ginecologia,traumatologia,pediatria,preA;
cout<<"ingrese el prespuesto anual por favor "<<endl;
cin>>preA;
ginecologia=preA*0.40;
traumatologia=preA*0.30;
pediatria=preA*0.30;
cout<<"el presuspuesto anual de ginecologia es de: "<<ginecologia<<endl;	
cout<<"el presuspuesto anual de traumatologia es de: "<<traumatologia<<endl;
cout<<"el presuspuesto anual de pediatria es de: "<<pediatria<<endl;	
	system("pause");
	return 0;
}
