/*8) Calcular e imprimir la tabla de multiplicar de un numero cualquiera.
 Imprimir el multiplicando, el multiplicador y el producto.*/
 
 #include<iostream>
 #include<stdlib.h>
 
 using namespace std;
 int main(){
 	
 	int numero=0,ciclo,resul;
 	
 	cout<<"Ingrese un numero para multiplicar : ";
	 cin>>numero;
	 
	 cout<<"El resultado de la tabla del "<<numero<<" es: "<<endl;
	 
	 for(int ciclo=1;ciclo<=10;ciclo++){
	 	resul=numero*ciclo;
	 	cout<<numero<<" x "<<ciclo<<" = "<<resul<<endl;
	 }
 	
 	system("pause");
 	return 0;
 }
