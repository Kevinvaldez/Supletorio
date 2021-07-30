#include <iostream>
#include <string.h>
#include <stdio.h>
#include <conio.h>
using namespace std;

int main ()
{
    int duc=10;
	string articulos[10];
	float precio[10];
	float total,subto=0,iva,dto;

cout<<"**************VIVERES DON CHAVEZ**************\n\n";	
	for(int b=0;b<duc;b++)
	{	
	    cout<<"DIGITE EL NOMBRE Y EL PRECIO DEL PRODUCTO #"<<(b+1)<<":\n\n";
        cout<<"Digite el producto que desea comprar: "; getline(cin,articulos[b]);
		cout<<"Digite su precio: "; cin>>precio[b];
		cin.ignore();
		cout<<endl;
    }
    
    cout<<"***********SU RESIVO***********\n\n";
    for(int b=0;b<duc;b++)
    {
    	subto=subto+precio[b];
    	iva=subto*0.12;	
	    dto=subto*0.10;
    	total=subto+iva-dto;
	}
	for(int b=0;b<duc;b++)
	{
		cout<<b+1<<".-     "<<articulos[b]<<"\t\t"<<precio[b]<<endl;
	}
	cout<<"\t SUBTOTAL \t"<<subto<<endl;
	cout<<"\t IVA 12% + \t"<<iva<<endl;
	cout<<"\t DESCUENTO 10% \t"<<dto<<endl;
	cout<<"\t TOTAL \t\t\n"<<total<<endl;
cout<<"****************GRACIAS POR COMPRAR EN VIVERES DON CHAVEZ****************";
getch ();
return 0;
}