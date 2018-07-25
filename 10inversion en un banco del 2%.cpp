/*10) Una persona desea invertir su dinero en un banco, el cual le otorga un 2% de interés.
 Cual será la cantidad de dinero que esta persona tendrá al cabo de un año si la ganancia de cada mes es reinvertida?.*/
 
 #include<iostream>
 #include<stdlib.h>
 
 using namespace std;
 
 int main(){
 	float inv,gan,total;
 	
 	cout<<"ingrese su capital a invertir por favor "<<endl;
 	cin>>inv;
 	gan=inv*0.02;
 	
 	cout<<"su ganancia mensual es "<<gan<<endl;
 	total=inv+gan*12;
 	cout<<"su ganancia total al año es "<<total<<endl;
 	
 	system("pause");
 	return 0;
 }
