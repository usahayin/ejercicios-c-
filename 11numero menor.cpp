/*11) Encontrar el menor valor de un conjunto de n números dados.*/


#include<iostream>
#include<stdlib.h>

using namespace std;
int main(){

int m,n,l;
cout<<"ingrese el numero limite "<<endl;
cin>>l;



for(int i=0;i<l;i++){
	cout<<"ingrese un numero "<<endl;
    cin>>m;
	if(m<n){
		n=m;
	}

}
	cout<<"el numero nenor es "<<n<<endl;
system("pause");
return 0;
}
