/*5)Una persona se encuentra con un problema de comprar un autom�vil o un terreno,
los cuales cuestan exactamente lo mismo. Sabe que mientras el autom�vil se deval�a,
con el terreno sucede lo contrario. Esta persona comprara el autom�vil si al cabo 
de tres a�os la devaluaci�n de este no es mayor que la mitad del incremento del valor
del terreno. Ay�dale a esta persona a determinar si debe o no comprar el autom�vil*/
 #include<iostream>
 #include<stdlib.h>
 
 using namespace std;
 
 int main(){
 	float costo,devaluacion,valorizacion,valorauto,valorterreno;
 	
 	cout<<"escriba el costo del automovil y del terreno que valen lo mismo por favor "<<endl;
 	cin>>costo;
 	
 	cout<<"escriba el incremento del terreno en 3  a�os "<<endl;
	cin>>valorizacion;
	
	cout<<"escriba el incremento del auto en 3  a�os "<<endl;
	cin>>devaluacion;
	
	devaluacion=costo*10/100;
	valorizacion=costo*30/100;
	valorauto=costo-devaluacion;
	valorterreno=costo+valorizacion;
	
	if (devaluacion*3<valorizacion/2){
		cout<<"es mejor que compre el auto "<<devaluacion<<endl;
	}
	else
	{
	    	cout<<"es mejor que compre el terreno "<<valorizacion<<endl;
	
	}
	 
 	system("pause");
 	return 0;
 }


