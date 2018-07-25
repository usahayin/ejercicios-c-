/* Una persona enferma, que pesa 70 kg, se encuentra en reposo y desea saber cuantas calorías consume su cuerpo durante
 todo el tiempo que realice una misma actividad. Las actividades que tiene permitido realizar son únicamente dormir o
 estar sentado en reposo. Los datos que tiene son que estando dormido consume 1.08 calorías por minuto y
 estando sentado en reposo consume 1.66 calorías por minuto.*/
 
 #include<iostream>
 #include<stdlib.h>
 
 using namespace std;
 
 int main(){
 	
 	int actividad,minutos,caloriasd,caloriass;
 	
 	cout<<"ingrese tipo de actividad : 1dormido,2sentado "<<endl;
 	cin>>actividad;
 	
 	cout<<"ingrese actividad en  minutos ";
 	cin>>minutos;
 	
 	if(actividad==1){
 		caloriasd=1.08*minutos/1;
 		cout<<"la persona de 70 kg consume "<<caloriasd<<" calorias cuando esta dormido en "<<minutos<<" minutos "<<endl;
		 
}
 	else {
 	     caloriass=1.66*minutos/1;
		  cout<<"la persona de 70 kg consume "<<caloriass<<" calorias cuando esta sentado en "<<minutos<<" minutos "<<endl;	
 	}

 	system("PAUSE");
 	return 0;
 }
 
