#include <iostream>

using namespace std; 

int main (){
	    
	double horas,horasx,totalhoras,totalhorasx;
	char horario;
	   cout<<"ingrese e horario en el cual trabajo; ";
	   cout<<"\n D para horario diurno \n N para hrario nocturno \n M para horario de fin de semana \n ";
	   cout<<"opcion:"; 		
		cin>>horario;
		int phd=20000;      //pago por horario diurno
		int phn=23000;      //pago por horario nocturno
		int phf=22000;      //pago por horario de fin
		int dhx=30000;      //pago horas extra en el dia
		int nhx=40000;      //pago hras extra en la noche
		int fhx=35000;      //pago horas extra los fines
		
		switch (horario){
			
			case 'd':
		    case 'D': {
		    	
		    	cout<<"usted escogio horario diurno \n ";
		    	cout<<"ingrese las horas trabajadas: ";
		    	cin>>horas;
		    	cout<<"\n ingrese el numero de horas extra: ";
		    	cin>>horasx;
		    	totalhoras=horas*phd;
		    	totalhorasx=horasx*dhx;
				break;}
			case 'n':
			case 'N': {
				cout<<"usted escogio horario nocturno \n";
				cout<<"ingrese las horas trabajadas: ";
		    	cin>>horas;
		    	cout<<"\n ingrese el numero de horas extra: ";
		    	cin>>horasx;
		    	totalhoras=horas*phn;
		    	totalhorasx=horasx*nhx;
		    	
				break;}
			case 'M':
			case 'm':{
				cout<<"usted escogio horario de fin de semana \n";
				cout<<"ingrese las horas trabajadas: ";
		    	cin>>horas;
		    	cout<<"\n ingrese el numero de horas extra: ";
		    	cin>>horasx;
		    	totalhoras=horas*phf;
		    	totalhorasx=horasx*fhx;
				break;}	
			default:{ 
			    cout<<"opcion invalida";
				break;}							
		}
		 
		 int totalfinal=totalhoras+totalhorasx;
		 cout<<"\n el total por horas de oficina es:"<<totalhoras;
		 cout<<"\n  el total por horas extra es: "<<totalhorasx;
		 cout<<"\n el total que se le pagara es de: "<<totalfinal;
		 int i=totalhorasx;
		 int o=totalhoras;
		 if (i>o) {
		 	cout<<"\n obtuvo mas ganancias por horas extra"; 
		 }else 
		 if(i<o) {
		 	cout<<"\n obtuvo mas ganancias por horas de oficina";
		 }else 
		    cout<<"\n obtuvo la misma cantidad de ganancias  por horas exra y por oficina";
		
		
		
		
		
}

