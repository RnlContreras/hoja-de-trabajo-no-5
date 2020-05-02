//VENTA DE INMUEBLES
//En este programa tratare de hacer el calculo de la cotizacion de la venta de inmuebles

#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>

using namespace std;
//funcion principal
void calculoInmueble();
//funciones de calculos
void costoTerreno(float metros, float precioTerreno);
void costoCasa(float metros, float precioCasa);
void costoApto(float metros, float precioApto);

main(){
	calculoInmueble();
}

//funcion encargada de calcular los costos que tendria vender un terreno
void calculoInmueble(){
	int costoXmetro2;
	int seleccion;//esta variable permite que el usuario navegue en le menu
	int seleccion1;
	int seleccion2;
	float metros;
	string continuar;
	
	
	//definimos la interfaz del usuario
	do{
	system("cls");
	cout<<"CALCULO DE COMPRA Y VENTA DE TERRENOS, CASAS Y APARTAMENTOS"<<endl;
	cout<<"--------------------"<<endl;
	cout<<"---MENU PRINCIPAL---"<<endl;
	cout<<"--------------------"<<endl;
	cout<<"1.COMERCIAL"<<endl;
	cout<<"2.RECIDENCIAL"<<endl;
	cout<<"3.SALIR";
	cin>>seleccion;
	
	//switch principal que permite elegir la categoria a comprar
	switch(seleccion){
		case 1:{//-------------------------------CASE COMERCIAL--------------------------------
			system("cls");
			cout<<"---ELIJA LA ZONA---"<<endl;
			cout<<"1.A"<<endl;
			cout<<"2.B"<<endl;
			cin>>seleccion1;
			switch(seleccion1){//switch que elige la zona
				case 1:{//-------------------------TIPO DE ZONA A----------------------------------------
						system("cls");
						cout<<"---ELIJA EL TIPO---"<<endl;
						cout<<"1.TERRENO"<<endl;
						cout<<"2.CASA"<<endl;
						cout<<"3.APARTAMENTO"<<endl;
						cin>>seleccion2;
						switch(seleccion2){//CALCULO DE PRECIO POR METRO 
							case 1:{
								system("cls");
								costoTerreno(metros, 2200);
								break;
							}
							case 2:{
								system("cls");
								costoCasa(metros, 2500);
								break;
							}
							case 3:{
								system("cls");
								costoApto(metros, 2100);
								break;
							}
						}
					}
					break;
				case 2:{//--------------------------------TIPO DE ZONA B--------------------------------
					system("cls");
						cout<<"---ELIJA EL TIPO---"<<endl;
						cout<<"1.TERRENO"<<endl;
						cout<<"2.CASA"<<endl;
						cout<<"3.APARTAMENTO"<<endl;
						cin>>seleccion2;
						switch(seleccion2){//CALCULO DE PRECIO POR METRO 
							case 1:{
								system("cls");
								costoTerreno(metros, 1300);
								break;
							}
							case 2:{
								system("cls");
								costoCasa(metros, 1500);
								break;
							}
							case 3:{
								system("cls");
								costoApto(metros, 1200);
								break;
							}
						}
					break;
				}
				}
			}
			break;
		case 2:{//-----------------------CASE RECIDENCIAL-------------------------
			system("cls");
			cout<<"---ELIJA LA ZONA---"<<endl;
			cout<<"1.A"<<endl;
			cout<<"2.B"<<endl;
			cout<<"3.C"<<endl;
			cin>>seleccion1;
			switch(seleccion1){//switch que elige la zona
				case 1:{//TIPO DE ZONA A
						system("cls");
						cout<<"---ELIJA EL TIPO---"<<endl;
						cout<<"1.TERRENO"<<endl;
						cout<<"2.CASA"<<endl;
						cout<<"3.APARTAMENTO"<<endl;
						cin>>seleccion2;
						switch(seleccion2){//CALCULO DE PRECIO POR METRO 
							case 1:{
								system("cls");
								costoTerreno(metros, 2100);
								break;
							}
							case 2:{
								system("cls");
								costoCasa(metros, 2500);
								break;
							}
							case 3:{
								system("cls");
								costoApto(metros, 2100);
								break;
							}
						}
					}
					break;
				case 2:{//TIPO DE ZONA B
					system("cls");
						cout<<"---ELIJA EL TIPO---"<<endl;
						cout<<"1.TERRENO"<<endl;
						cout<<"2.CASA"<<endl;
						cout<<"3.APARTAMENTO"<<endl;
						cin>>seleccion2;
						switch(seleccion2){//CALCULO DE PRECIO POR METRO 
							case 1:{
								system("cls");
								costoTerreno(metros, 1500);
								break;
							}
							case 2:{
								system("cls");
								costoCasa(metros, 1600);
								break;
							}
							case 3:{
								system("cls");
								costoApto(metros, 1300);
								break;
							}
						}
					break;
				}
				case 3:{//TIPO DE ZONA C
					system("cls");
						cout<<"---ELIJA EL TIPO---"<<endl;
						cout<<"1.TERRENO"<<endl;
						cout<<"2.CASA"<<endl;
						cout<<"3.APARTAMENTO"<<endl;
						cin>>seleccion2;
						switch(seleccion2){//CALCULO DE PRECIO POR METRO 
							case 1:{
								system("cls");
								costoTerreno(metros, 1100);
								break;
							}
							case 2:{
								system("cls");
								costoCasa(metros, 1300);
								break;
							}
							case 3:{
								system("cls");
								costoApto(metros, 1000);
								break;
							}
						}
					break;
				}	
			break;
		}
		}
	}
cout<<"\nDESEA SEGUIR EN EL PROGRAMA YES/NO: ";
cin>>continuar;
}while(continuar=="YES");
}
//funciones que ayudan a calcular el valor a pagar x metros comprados
void costoTerreno(float metros, float precioTerreno){
	ofstream grabandoTerreno;
	
	grabandoTerreno.open("1RTERRENOS.txt", ios::out|ios::app);
	
	cout<<"INGRESE EL TOTAL EN mts^2 QUE DESEA COMPRAR: ";
	cin>>metros;
	float costoTotal = metros * precioTerreno;
	cout<<"TOTAL A PAGAR: Q"<<costoTotal;
	
	grabandoTerreno<<"METROS A COMPRAR "<<metros<<"\t|"<<"TIPO "<<"\t"<<"_TERRENOS"<<"\t|"<<"TOTAL A PAGAR "<<costoTotal<<"\n";
	grabandoTerreno.close();	
		
}

void costoCasa(float metros, float precioCasa){
	ofstream grabandoTerreno;
	grabandoTerreno.open("1RCASAS.txt", ios::out|ios::app);
	
	cout<<"INGRESE EL TOTAL EN mts^2 QUE DESEA COMPRAR: ";
	cin>>metros;
	float costoTotal = metros * precioCasa;
	cout<<"TOTAL A PAGAR: Q"<<costoTotal;
	
	grabandoTerreno<<"METROS A COMPRAR "<<metros<<"\t|"<<"TIPO "<<"\t"<<"_CASAS"<<"\t|"<<"TOTAL A PAGAR "<<costoTotal<<"\n";
	grabandoTerreno.close();
}
void costoApto(float metros, float precioApto){
	ofstream grabandoTerreno;
	grabandoTerreno.open("1APTOS.txt", ios::out|ios::app);
	
	cout<<"INGRESE EL TOTAL EN mts^2 QUE DESEA COMPRAR: ";
	cin>>metros;
	float costoTotal = metros * precioApto;
	cout<<"TOTAL A PAGAR: Q"<<costoTotal;
	
	grabandoTerreno<<"METROS A COMPRAR "<<metros<<"\t|"<<"TIPO "<<"\t"<<"_APARTAMENTOS"<<"\t|"<<"TOTAL A PAGAR "<<costoTotal<<"\n";
	grabandoTerreno.close();
}
