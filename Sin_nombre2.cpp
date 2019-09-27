#include <iostream>
using namespace std; 

int main (){
	
 char nombre[30];
 double esco,reco,aroma,total,descuento,pesc,paro,prec,totalf;
   int tipo;
   cout<<"ingrese el nombre del cliente; ";
    cin.getline(nombre,30); 
   cout<<"\n ingrese la categoria de cliente: " ;
   cin>>tipo;
   cout<<"\n ingrese la cantidad de objetos comprados: ";
   cout<<"\n escobas: ";
   cin>>esco;
   cout<<"\n recogedores: ";
   cin>>reco;
   cout<<"\n aromatizantes: ";
   cin>>aroma;
   pesc=esco*2000;
   paro=aroma*5000;
   prec=reco*1500;
   
   total=pesc+paro+prec;
   
   switch (tipo)
   {
   	case 1: {
   			   descuento=(total/100)*5;
   			    totalf=total-descuento;
		break;
	        }
    case 2: {
    			descuento=(total/100)*8;
   			    totalf=total-descuento;
    	
		break;
         	}
	case 3: {
				descuento=(total/100)*12;
   			    totalf=total-descuento;
		break;
	        }
	case 4:	{
		   		descuento=(total/100)*15;
   			    totalf=total-descuento;
		break;
	        }
	default: {  cout<<"el tipo de cliente es invalido";
		break; 
	         }			 			     
	   }   
	
	cout<<"el nombre del clientes es: "<<nombre; 
	cout<<"\n el subtotal a pagar es: " <<total;
	cout<<"\n el descuento que se le hizo es de: "<<descuento; 
	cout<<"\n el total a pagar es de: "<<totalf;    
    
}
