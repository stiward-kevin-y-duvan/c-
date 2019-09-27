#include <iostream>
using namespace std; 

int main (){
	
	   int n1,n2,suma,resta,mult;
	   double res;
	   cout<<"ingrese dos numeros: \n ";
	   cin>>n1;
	   cin>>n2;
	   
	   cout<<"\n ingrese una de las siguentes opciones: ";
	   cout<<"\n 1 para sumar \n 2 para restar \n 3 para multiplicar \n 4 poara dividir \n ";
	   int op;
	   cout<<"\n ingrese la opcion: ";
	   cin>>op;
	   
	   switch (op) {
	   	
	case 1: {
		suma=n1+n2;
		cout<<"el resultado de la suma es "<<suma; 
		break;}   	
	case 2: {
		resta=n1-n2;
		cout<<"el resultado de la resta es "<<resta;
		break;
	}   
	case 3: {
		mult=n1*n2;
		cout<<"el resultado de la multiplicacion es "<<mult;
		break;
	}
    case 4: {
    	res=n1/n2;
    	cout<<"el resultado de la divicion es "<<res; 
		break;
	}	  
	   	  
	   }
	
}
