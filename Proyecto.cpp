#include<iostream>

using namespace std;

main()
{
	int opcion;
	
	do{
		cout<<"hola introduzca que opcion desea para continuar la hitoria"<<endl;
	cin>>opcion;
	switch(opcion)
		{
			case 1:
				cout<<"hola opcion 1"<<endl;
					int opcion;
					do
					{
					cout<<"hola segundo dentro opcion 1"<<endl;
					cin>>opcion;
						switch(opcion)
						{
							case 1:
								cout<<"hola 1 dentro opcion 1";
							break;
							case 2:
								cout<<"hola 2 dentro opcion 1";
								break;
							case 3:
								cout<<"hola 3 dentro opcion 1";
							break;
						}
					}while(opcion != 1 && opcion != 2 && opcion != 3);
					
			break;
			case 2:
					cout<<"hola opcion 2"<<endl;
					int opcion2;
					do
					{
					cout<<"hola segundo dentro opcion 2"<<endl;
					cin>>opcion2;
						switch(opcion2)
						{
							case 1:
								cout<<"hola 1 dentro opcion 2";
							break;
							case 2:
								cout<<"hola 2 dentro opcion 2";
								break;
							case 3:
								cout<<"hola 3 dentro opcion 2";
							break;
						}
					}while(opcion2 != 1 && opcion2 != 2 && opcion2 != 3);
					
			break;
			case 3:
					cout<<"hola opcion 3"<<endl;
					int opcion3;
					do
					{
					cout<<"hola segundo dentro opcion 3"<<endl;
					cin>>opcion3;
						switch(opcion3)
						{
							case 1:
								cout<<"hola 1 dentro opcion 3";
							break;
							case 2:
								cout<<"hola 2 dentro opcion 3";
								break;
							case 3:
								cout<<"hola 3 dentro opcion 3";
							break;
						}
					}while(opcion3 != 1 && opcion3 != 2 && opcion3 != 3);
					
			break;
			case 4:
					cout<<"hola opcion 4"<<endl;
					int opcion4;
					do
					{
						cout<<"hola segundo dentro opcion 4"<<endl;
						cin>>opcion4;
							switch(opcion4)
							{
								case 1:
									cout<<"hola 1 dentro opcion 4";
								break;
								case 2:
									cout<<"hola 2 dentro opcion 4";
									break;
								case 3:
									cout<<"hola 3 dentro opcion 4";
								break;
							}
					}while(opcion4 != 1 && opcion4 != 2 && opcion4 != 3);
			break;
		}	
		
			cout<<"hola introduce una opcion adecuada"<<endl;
			
	}while(opcion != 1 && opcion != 2 && opcion != 3 && opcion !=4);
	
}	
	
