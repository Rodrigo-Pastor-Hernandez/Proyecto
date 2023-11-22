#include<iostream>

using namespace std;

main(){
	
	int opcion;
	
	cout<<"hola"<<endl;
	cin>>opcion;
	
	switch(opcion)
	{
		case 1:
			cout<<"hola opcion 1"<<endl;
				int opcion;
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
			break;
		case 2:
				cout<<"hola opcion 2"<<endl;
				int opcion2;
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
			break;
		case 3:
				cout<<"hola opcion 3"<<endl;
				int opcion3;
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
			break;
	}
}
