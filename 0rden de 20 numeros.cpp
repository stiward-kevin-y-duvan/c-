#include <iostream>
using namespace std;

int main (){
	
	int vector [20];
	int i,j,k,x;
	
	cout<<"ordenar 20 numeros";
	for (i=1;i<=20;i++)
	{    
	cout<<"\n ingrese el numero: ";
		cin>>vector[i];  
	}
	
	for (j=1;j<=20;j++){
		for (k=1;k<=20;k++){
			if (vector[k]>vector[k+1]){
				x=vector[k];
				vector[k]=vector[k+1];
				vector[k+1]=x;
			}
		}
	}
	for (i=1;i<=20;i++){
		cout<<vector[i];
		cout<<endl;
	}
	
	
}
