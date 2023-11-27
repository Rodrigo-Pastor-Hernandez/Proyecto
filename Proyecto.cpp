#include<iostream>

using namespace std;

main()
{
	int opcion=-1;
	int experiencia=150;
	
	cout<<"La Sinfonia del Destino"<<endl<<endl;	
	cout<<"Capitulo 1: La Encrucijada Musical"<<endl<<endl;
	cout<<"Te encuentras en una encrucijada musical crucial en tu vida"<<endl;
		do
		{
			cout<<"Tienes cuatro opciones:"<<endl;
			cout<<"1)Explorar el mundo del jazz y la improvisacion"<<endl;
			cout<<"2)Iniciar una busqueda en la musica clasica y la opera"<<endl;
			cout<<"3)Sumergirte en la escena indie y alternativa"<<endl;
			cout<<"4)Adentrarte en la electronica y la musica experimental"<<endl<<endl;
			cout<<"5)Salir de la historia."<<endl<<endl;
			cout<<"Tienes un total de "<< experiencia <<" experiencia"<<endl<<endl;
			cout<<"Ingrea el numero de la opcion la cual deseas elejir: ";
			cin>>opcion;
			
			switch(opcion)
				{
					case 1:
						int opcion;
						cout<<"\nhola opcion 1"<<endl;
						cout<<"hola segundo dentro opcion 1"<<endl;
							do
							{
								cout<<"Tienes tres opciones:"<<endl;
								cout<<"1)Sumergirte en los clubes de jazz locales y descubrir nuevos talentos"<<endl;
								cout<<"2)Estudiar tecnicas de improvisacion y aplicarlas a tu propio estilo"<<endl;
								cout<<"3)Ignorar el jazz y explorar otros géneros más familiares"<<endl<<endl;
								cout<<"4)Salir de la historia."<<endl<<endl;
								cout<<"Tienes un total de "<< experiencia <<" experiencia"<<endl<<endl;
								cout<<"Ingrea el numero de la opcion la cual deseas elejir: ";
								cin>>opcion;
									switch(opcion)
									{
										case 1:
											cout<<"hola 1 dentro opcion 1"<<endl;
											cout<<"Ahora tienes un total de "<< experiencia <<" experiencia"<<endl;
										break;
										case 2:
											cout<<"hola 2 dentro opcion 1"<<endl;
											cout<<"Ahora tienes un total de "<< experiencia <<" experiencia"<<endl;
										break;
										case 3:
											cout<<"hola 3 dentro opcion 1"<<endl;
											cout<<"Ahora tienes un total de "<< experiencia <<" experiencia"<<endl;
										break;
										case 4:
											cout<<"\nGracias por leer la historia vuela pronto"<<endl;
											return 0;
										break;
										default:
											cout<<"\nLa opcion que eligio es erronea elija de nuevo porfavor"<<endl<<endl;
										break;
									}
							}while(opcion != 1 && opcion != 2 && opcion != 3 && opcion !=4);
								
					break;
					case 2:
						int opcion2;
						cout<<"\nhola opcion 2"<<endl;
						cout<<"hola segundo dentro opcion 2"<<endl;
							do
							{
								cout<<"Tienes tres opciones:"<<endl;
								cout<<"1)Asistir a conciertos de musica clasica para apreciar la maestria"<<endl;
								cout<<"2)Profundizar en la opera y descubrir las historias detras de las arias"<<endl;
								cout<<"3)Descartar la musica clasica y explorar generos mas contemporaneos"<<endl<<endl;
								cout<<"4)Salir de la historia."<<endl<<endl;
								cout<<"Tienes un total de "<< experiencia <<" experiencia"<<endl<<endl;
								cout<<"Ingrea el numero de la opcion la cual deseas elejir: ";
								cin>>opcion2;
									switch(opcion2)
									{
										case 1:
											cout<<"hola 1 dentro opcion 2"<<endl;
											cout<<"Ahora tienes un total de "<< experiencia <<" experiencia"<<endl;
										break;
										case 2:
											cout<<"hola 2 dentro opcion 2"<<endl;
											cout<<"Ahora tienes un total de "<< experiencia <<" experiencia"<<endl;
											break;
										case 3:
											cout<<"hola 3 dentro opcion 2"<<endl;
											cout<<"Ahora tienes un total de "<< experiencia <<" experiencia"<<endl;
										break;
										case 4:
											cout<<"\nGracias por leer la historia vuela pronto"<<endl;
											return 0;
										break;
										default:
											cout<<"\nLa opcion que eligio es erronea elija de nuevo porfavor"<<endl<<endl;
										break;
									}
							}while(opcion2 != 1 && opcion2 != 2 && opcion2 != 3 && opcion2 !=4);
						
					break;
					case 3:
						int opcion3;
						cout<<"\nhola opcion 3"<<endl;
						cout<<"hola segundo dentro opcion 3"<<endl;
							do
							{
								cout<<"Tienes tres opciones:"<<endl;
								cout<<"1)Buscar bandas indie emergentes y asistir a conciertos locales"<<endl;
								cout<<"2)Participar en la produccion de eventos independientes"<<endl;
								cout<<"3)No sentirte atraido por lo indie y explorar otros generos"<<endl<<endl;
								cout<<"4)Salir de la historia."<<endl<<endl;
								cout<<"Tienes un total de "<< experiencia <<" experiencia"<<endl<<endl;
								cout<<"Ingrea el numero de la opcion la cual deseas elejir: ";
								cin>>opcion3;
									switch(opcion3)
									{
										case 1:
											cout<<"hola 1 dentro opcion 3"<<endl;
											cout<<"Ahora tienes un total de "<< experiencia <<" experiencia"<<endl;
										break;
										case 2:
											cout<<"hola 2 dentro opcion 3"<<endl;
											cout<<"Ahora tienes un total de "<< experiencia <<" experiencia"<<endl;
											break;
										case 3:
											cout<<"hola 3 dentro opcion 3"<<endl;
											cout<<"Ahora tienes un total de "<< experiencia <<" experiencia"<<endl;
										break;
										case 4:
											cout<<"\nGracias por leer la historia vuela pronto"<<endl;
											return 0;
										break;
										default:
											cout<<"\nLa opcion que eligio es erronea elija de nuevo porfavor"<<endl<<endl;
										break;
									}
							}while(opcion3 != 1 && opcion3 != 2 && opcion3 != 3 && opcion3 !=4);
							
					break; 
					case 4:
						int opcion4;
						cout<<"\nhola opcion 4"<<endl;
						cout<<"hola segundo dentro opcion 4"<<endl;
							do
							{
								cout<<"Tienes tres opciones:"<<endl;
								cout<<"1)Experimentar con la creacion de musica electronica por tu cuenta"<<endl;
								cout<<"2)Asistir a festivales de musica experimental para expandir tus horizontes"<<endl;
								cout<<"3)Ignorar la musica electronica y buscar sonidos mas convencionales"<<endl<<endl;
								cout<<"4)Salir de la historia."<<endl<<endl;
								cout<<"Tienes un total de "<< experiencia <<" experiencia"<<endl<<endl;
								cout<<"Ingrea el numero de la opcion la cual deseas elejir: ";
								cin>>opcion4;
									switch(opcion4)
									{
										case 1:
											cout<<"hola 1 dentro opcion 4"<<endl;
											cout<<"Ahora tienes un total de "<< experiencia <<" experiencia"<<endl;
										break;
										case 2:
											cout<<"hola 2 dentro opcion 4"<<endl;
											cout<<"Ahora tienes un total de "<< experiencia <<" experiencia"<<endl;
											break;
										case 3:
											cout<<"hola 3 dentro opcion 4"<<endl;
											cout<<"Ahora tienes un total de "<< experiencia <<" experiencia"<<endl;
										break;
										case 4:
											cout<<"\nGracias por leer la historia vuela pronto"<<endl;
											return 0;
										break;
										default:
											cout<<"\nLa opcion que eligio es erronea elija de nuevo porfavor"<<endl<<endl;
										break;
									}
							}while(opcion4 != 1 && opcion4 != 2 && opcion4 != 3 && opcion4 != 4);
					break;
					case 5:
					cout<<"\nGracias por leer la historia vuela pronto"<<endl;
						return 0;
					break;
					default:
						cout<<"\nLa opcion que eligio es erronea elija de nuevo porfavor"<<endl<<endl;
					break;	
				}			
			}while(opcion != 1 && opcion != 2 && opcion != 3 && opcion !=4 && opcion !=5);
		
				cout<<"\nFELICIADES HAS LOGRADO PASAR A LA SEGUNDA TRAMA DE LA HITORIA ESPERO Y ESTES PREPARADO PARA MAS DESICIONES"<<endl;
				cout<<"Capitulo 2: El Encuentro con un Mentor Musical"<<endl<<endl;
				cout<<"Durante tu exploracion musical, te encuentras con un mentor dispuesto a guiarte"<<endl;
					do
					{
						cout<<"Tienes tres opciones:"<<endl;
						cout<<"1)Seguir cada consejo del mentor de manera estricta"<<endl;
						cout<<"2)Tomar lo que consideras util y aplicarlo a tu propio estilo"<<endl;
						cout<<"3)Agradecer al mentor pero decidir explorar sin guia"<<endl<<endl;
						cout<<"4)Salir de la historia."<<endl<<endl;
						cout<<"Tienes un total de "<< experiencia <<" experiencia"<<endl<<endl;
						cout<<"Ingrea el numero de la opcion la cual deseas elejir: ";
						cin>>opcion;
						
						switch(opcion)
							{
								case 1:
									int opcion;
									cout<<"\nhola opcion 1"<<endl;
									cout<<"hola segundo dentro opcion 1"<<endl;
										do
										{
											cout<<"Tienes tres opciones:"<<endl;
											cout<<"1)Adquieres una comprension profunda de su genero musical recomendado"<<endl;
											cout<<"2)Te vuelves dependiente de su orientacion y pierdes tu voz"<<endl;
											cout<<"3)Ignoras a otros mentores potenciales por lealtad al actual"<<endl<<endl;
											cout<<"4)Salir de la historia."<<endl<<endl;
											cout<<"Tienes un total de "<< experiencia <<" experiencia"<<endl<<endl;
											cout<<"Ingrea el numero de la opcion la cual deseas elejir: ";
											cin>>opcion;
												switch(opcion)
												{
													case 1:
														cout<<"hola 1 dentro opcion 1"<<endl;
														cout<<"Ahora tienes un total de "<< experiencia <<" experiencia"<<endl;
													break;
													case 2:
														cout<<"hola 2 dentro opcion 1"<<endl;
														cout<<"Ahora tienes un total de "<< experiencia <<" experiencia"<<endl;
													break;
													case 3:
														cout<<"hola 3 dentro opcion 1"<<endl;
														cout<<"Ahora tienes un total de "<< experiencia <<" experiencia"<<endl;
													break;
													case 4:
														cout<<"\nGracias por leer la historia vuela pronto"<<endl;
														return 0;
													break;
													default:
														cout<<"\nLa opcion que eligio es erronea elija de nuevo porfavor"<<endl<<endl;
													break;
												}
										}while(opcion != 1 && opcion != 2 && opcion != 3 && opcion !=4);
								break;
								case 2:
									int opcion2;
									cout<<"\nhola opcion 2"<<endl;
									cout<<"hola segundo dentro opcion 2"<<endl;
										do
										{
											cout<<"Tienes tres opciones:"<<endl;
											cout<<"1)Fusionas lo aprendido con tus influencias previas, creando algo unico"<<endl;
											cout<<"2)Encuentras dificultades en la mezcla y te enfrentas a criticas"<<endl;
											cout<<"3)Ignoras consejos adicionales y sigues tu propio camino"<<endl<<endl;
											cout<<"4)Salir de la historia."<<endl<<endl;
											cout<<"Tienes un total de "<< experiencia <<" experiencia"<<endl<<endl;
											cout<<"Ingrea el numero de la opcion la cual deseas elejir: ";
											cin>>opcion2;
												switch(opcion2)
												{
													case 1:
														cout<<"hola 1 dentro opcion 2"<<endl;
														cout<<"Ahora tienes un total de "<< experiencia <<" experiencia"<<endl;
													break;
													case 2:
														cout<<"hola 2 dentro opcion 2"<<endl;
														cout<<"Ahora tienes un total de "<< experiencia <<" experiencia"<<endl;
														break;
													case 3:
														cout<<"hola 3 dentro opcion 2"<<endl;
														cout<<"Ahora tienes un total de "<< experiencia <<" experiencia"<<endl;
													break;
													case 4:
														cout<<"\nGracias por leer la historia vuela pronto"<<endl;
														return 0;
													break;
													default:
														cout<<"\nLa opcion que eligio es erronea elija de nuevo porfavor"<<endl<<endl;
													break;
												}
										}while(opcion2 != 1 && opcion2 != 2 && opcion2 != 3 && opcion2 !=4);
								break;
								case 3:
									int opcion3;
									cout<<"\nhola opcion 3"<<endl;
									cout<<"hola segundo dentro opcion 3"<<endl;
										do
										{
											cout<<"Tienes tres opciones:"<<endl;
											cout<<"1)Encuentras libertad en tu exploracion, pero a veces te sientes perdido"<<endl;
											cout<<"2)Te enfrentas a desafios y dificultades sin una guia constante"<<endl;
											cout<<"3)Descubres que otros mentores potenciales podrian haber sido valiosos"<<endl<<endl;
											cout<<"4)Salir de la historia."<<endl<<endl;
											cout<<"Tienes un total de "<< experiencia <<" experiencia"<<endl<<endl;
											cout<<"Ingrea el numero de la opcion la cual deseas elejir: ";
											cin>>opcion3;
												switch(opcion3)
												{
													case 1:
														cout<<"hola 1 dentro opcion 3"<<endl;
														cout<<"Ahora tienes un total de "<< experiencia <<" experiencia"<<endl;
													break;
													case 2:
														cout<<"hola 2 dentro opcion 3"<<endl;
														cout<<"Ahora tienes un total de "<< experiencia <<" experiencia"<<endl;
														break;
													case 3:
														cout<<"hola 3 dentro opcion 3"<<endl;
														cout<<"Ahora tienes un total de "<< experiencia <<" experiencia"<<endl;
													break;
													case 4:
														cout<<"\nGracias por leer la historia vuela pronto"<<endl;
														return 0;
													break;
													default:
														cout<<"\nLa opcion que eligio es erronea elija de nuevo porfavor"<<endl<<endl;
													break;
												}
										}while(opcion3 != 1 && opcion3 != 2 && opcion3 != 3 && opcion3 !=4);
								break;
								case 4:
									cout<<"\nGracias por leer la historia vuela pronto"<<endl;
									return 0;
								break;
								default:
									cout<<"\nLa opcion que eligio es erronea elija de nuevo porfavor"<<endl<<endl;
								break;
							}	
					}while(opcion != 1 && opcion != 2 && opcion != 3 && opcion !=4);
					
						cout<<"\nFELICIADES HAS LOGRADO PASAR A LA TERCERA Y ULTIMA TRAMA DE LA HITORIA"<<endl;
						cout<<"Capitulo 3(Final):La Gran Presentacion"<<endl<<endl;
						cout<<"Llega el momento de presentar tu musica al mundo en un concierto importante"<<endl;
							do{
								cout<<"Tienes tres opciones:"<<endl;
								cout<<"1)Incorporar todas las influencias y estilos que has explorado"<<endl;
								cout<<"2)Centrarte en un genero especifico que te haya impactado mas"<<endl;
								cout<<"3)Dejar que la audiencia influya en la interpretacion y ajustar la musica en tiempo real"<<endl<<endl;
								cout<<"4)Salir de la historia ."<<endl<<endl;
								cout<<"Tienes un total de "<< experiencia <<" experiencia"<<endl<<endl;
								cout<<"Ingrea el numero de la opcion la cual deseas elejir: ";
								cin>>opcion;
									switch(opcion)
										{
											case 1:
												cout<<"hola opcion 1"<<endl;	
												cout<<"Ahora tienes un total de "<< experiencia <<" experiencia"<<endl;
											break;
											case 2:
													cout<<"hola opcion 2"<<endl;
													cout<<"Ahora tienes un total de "<< experiencia <<" experiencia"<<endl;	
											break;
											case 3:
													cout<<"hola opcion 3"<<endl;	
													cout<<"Ahora tienes un total de "<< experiencia <<" experiencia"<<endl;	
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
							
			cout<<"Fin de la hirtoria gracias por leer"<<endl;
			
	return 0;
	
}	
	
