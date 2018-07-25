/*6) Que lea tres números diferentes y determine el numero medio del conjunto de los tres números
 (el numero medio es aquel numero que no es ni mayor, ni menor).*/
 
 #include<iostream>
 #include<stdlib.h>
 
 using namespace std;
 int main(){
 	
 	int n1,n2,n3;
 	cout<<"por favor ingrese un numero "<<endl;
 	cin>>n1;
 	
 	cout<<"por favor ingrese un numero "<<endl;
 	cin>>n2;
 	
 	cout<<"por favor ingrese un numero "<<endl;
 	cin>>n3;
 	
 	if ((n1>n2 && n1<n3)||(n1<n2 && n1>n3))
    cout<<"El numero del medio es "<<endl<<n1<<endl;
    if ((n2>n1 && n2<n3)||(n2<n1 && n2>n3))
    cout<<"El numero del medio es "<<endl<<n2<<endl;
    if ((n3>n1 && n3<n2)||(n3<n1 && n3>n2))
    cout<<"El numero del medio es "<<endl<<n3<<endl;
    
 	system("pause");
 	return 0;
 }
