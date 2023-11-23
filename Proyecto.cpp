#include<iostream>

using namespace std;

main()
{
	int opcion=-1;
	int monedas=150;

do{
	cout<<"hola introduzca que opcion desea para continuar la hitoria"<<endl;
	cout<<"1)."<<endl;
	cout<<"2)."<<endl;
	cout<<"3)."<<endl;
	cout<<"4)."<<endl;
	cout<<"5)."<<endl;
	cout<<"Tienes un total de "<< monedas <<" monedas"<<endl;
	cout<<"Que deseas hacer?: ";
	cin>>opcion;
	
	switch(opcion)
		{
			case 1:
				cout<<"hola opcion 1"<<endl;
					int opcion;
					do
					{
					cout<<"hola segundo dentro opcion 1"<<endl;
					cout<<"1)."<<endl;
					cout<<"2)."<<endl;
					cout<<"3)."<<endl;
					cout<<"4)."<<endl;
					cout<<"Tienes un total de "<< monedas <<" monedas"<<endl;
					cout<<"Que deseas hacer?:";
					cin>>opcion;
						switch(opcion)
						{
							case 1:
								cout<<"hola 1 dentro opcion 1";
								cout<<"Ahora tienes un total de "<< monedas <<" monedas"<<endl;
							break;
							case 2:
								cout<<"hola 2 dentro opcion 1";
								cout<<"Ahora tienes un total de "<< monedas <<" monedas"<<endl;
							break;
							case 3:
								cout<<"hola 3 dentro opcion 1";
								cout<<"Ahora tienes un total de "<< monedas <<" monedas"<<endl;
							break;
							case 4:
								cout<<"Gracias por leer la historia vuela pronto"<<endl;
								return 0;
							break;
							default:
								cout<<"La opcion que eligio es erronea elija de nuevo porfavor"<<endl;
							break;
						}
					}while(opcion != 1 && opcion != 2 && opcion != 3 && opcion !=4);
					
			break;
			case 2:
					cout<<"hola opcion 2"<<endl;
					int opcion2;
					do
					{
					cout<<"hola segundo dentro opcion 2"<<endl;
					cout<<"1)."<<endl;
					cout<<"2)."<<endl;
					cout<<"3)."<<endl;
					cout<<"4)."<<endl;
					cout<<"Tienes un total de "<< monedas <<" monedas"<<endl;
					cout<<"Que deseas hacer?: ";
					cin>>opcion2;
						switch(opcion2)
						{
							case 1:
								cout<<"hola 1 dentro opcion 2";
								cout<<"Ahora tienes un total de "<< monedas <<" monedas"<<endl;
							break;
							case 2:
								cout<<"hola 2 dentro opcion 2";
								cout<<"Ahora tienes un total de "<< monedas <<" monedas"<<endl;
								break;
							case 3:
								cout<<"hola 3 dentro opcion 2";
								cout<<"Ahora tienes un total de "<< monedas <<" monedas"<<endl;
							break;
							case 4:
								cout<<"Gracias por leer la historia vuela pronto"<<endl;
								return 0;
							break;
							default:
								cout<<"La opcion que eligio es erronea elija de nuevo porfavor"<<endl;
							break;
						}
					}while(opcion2 != 1 && opcion2 != 2 && opcion2 != 3 && opcion2 !=4);
					
			break;
			case 3:
					cout<<"hola opcion 3"<<endl;
					int opcion3;
					do
					{
					cout<<"hola segundo dentro opcion 3"<<endl;
					cout<<"1)."<<endl;
					cout<<"2)."<<endl;
					cout<<"3)."<<endl;
					cout<<"4)."<<endl;
					cout<<"Tienes un total de "<< monedas <<" monedas"<<endl;
					cout<<"Que deseas hacer?: ";
					cin>>opcion3;
						switch(opcion3)
						{
							case 1:
								cout<<"hola 1 dentro opcion 3";
								cout<<"Ahora tienes un total de "<< monedas <<" monedas"<<endl;
							break;
							case 2:
								cout<<"hola 2 dentro opcion 3";
								cout<<"Ahora tienes un total de "<< monedas <<" monedas"<<endl;
								break;
							case 3:
								cout<<"hola 3 dentro opcion 3";
								cout<<"Ahora tienes un total de "<< monedas <<" monedas"<<endl;
							break;
							case 4:
								cout<<"Gracias por leer la historia vuela pronto"<<endl;
								return 0;
							break;
							default:
								cout<<"La opcion que eligio es erronea elija de nuevo porfavor"<<endl;
							break;
						}
					}while(opcion3 != 1 && opcion3 != 2 && opcion3 != 3 && opcion3 !=4);
					
			break;
			case 4:
					cout<<"hola opcion 4"<<endl;
					int opcion4;
					do
					{
					cout<<"hola segundo dentro opcion 4"<<endl;
					cout<<"1)."<<endl;
					cout<<"2)."<<endl;
					cout<<"3)."<<endl;
					cout<<"4)."<<endl;
					cout<<"Tienes un total de "<< monedas <<" monedas"<<endl;
					cout<<"Que deseas hacer?: ";
					cin>>opcion4;
						switch(opcion4)
						{
							case 1:
								cout<<"hola 1 dentro opcion 4";
								cout<<"Ahora tienes un total de "<< monedas <<" monedas"<<endl;
							break;
							case 2:
								cout<<"hola 2 dentro opcion 4";
								cout<<"Ahora tienes un total de "<< monedas <<" monedas"<<endl;
								break;
							case 3:
								cout<<"hola 3 dentro opcion 4";
								cout<<"Ahora tienes un total de "<< monedas <<" monedas"<<endl;
							break;
							case 4:
								cout<<"Gracias por leer la historia vuela pronto"<<endl;
								return 0;
							break;
							default:
								cout<<"La opcion que eligio es erronea elija de nuevo porfavor"<<endl;
							break;
						}
					}while(opcion4 != 1 && opcion4 != 2 && opcion4 != 3 && opcion4 != 4);
			break;
			case 5:
				cout<<"Gracias por leer la historia vuela pronto"<<endl;
				return 0;
			break;
			default:
				cout<<"La opcion que eligio es erronea elija de nuevo porfavor"<<endl;
			break;
		}	
		
	}while(opcion != 1 && opcion != 2 && opcion != 3 && opcion !=4);
	
	return 0;
	
}	
	
