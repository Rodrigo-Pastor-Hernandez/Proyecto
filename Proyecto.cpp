#include<iostream>

using namespace std;

main()
{
	int opcion=-1;
	int experiencia=5;
	
	cout<<"El Viaje Melodico"<<endl<<endl;	
	cout<<"Era un dia soleado en la ciudad de Harmonia, donde la musica fluia por las calles como un rio magico."<<endl;
	cout<<"Tu un apasionado amante de la musica, decides aventurarte en busca de la fuente de un misterioso sonido "<<endl;
	cout<<"que ha estado resonando en tus pensamientos"<<endl<<endl;
	cout<<"Capitulo 1: Calle de las Armonias"<<endl<<endl;
	cout<<"Caminando por la Calle de las Armonias, donde la musica flota en el aire. De repente, encuentras a cuatro"<<endl;
	cout<<"musicos callejeros tocando diferentes instrumentos. Cual eliges para acercarte?"<<endl<<endl;
		do
		{
			cout<<"Tienes cuatro opciones:"<<endl;
			cout<<"1)El Violinista Apasionado"<<endl;
			cout<<"2)El Guitarrista Bohemio"<<endl;
			cout<<"3)La Pianista Misteriosa"<<endl;
			cout<<"4)El Percusionista Energetico"<<endl<<endl;
			cout<<"5)Salir de la historia."<<endl<<endl;
			cout<<"Tienes un total de "<< experiencia <<" experiencia"<<endl;
			cout<<"Cada decision te aumentara o disminuira experiencia, elije con cuidado"<<endl<<endl;
			cout<<"Ingrea el numero de la opcion la cual deseas elejir: ";
			cin>>opcion;
				switch(opcion)
					{
						case 1:
							int opcion;
							experiencia= experiencia + 5;
							cout<<"\nDe repente te atrae la intensidad de un violinista que cierra los ojos mientras toca con pasion."<<endl;
							cout<<"El violinista, llamado Luca, se percata que lo observas con cierta intriga y admiracion por lo que"<<endl;
							cout<<"te invita a unirte a el. Como respondes?"<<endl<<endl;
								do
								{
									cout<<"Tienes tres opciones:"<<endl;
									cout<<"1)Aceptar y Tocar Juntos"<<endl;
									cout<<"2)Pedirle que Siga Tocando"<<endl;
									cout<<"3)Preguntar por su Historia"<<endl<<endl;
									cout<<"4)Salir de la historia."<<endl<<endl;
									cout<<"+ 5 de experiencia"<<endl;
									cout<<"Tienes un total de "<< experiencia <<" experiencia"<<endl<<endl;
									cout<<"Ingrea el numero de la opcion la cual deseas elejir: ";
									cin>>opcion;
										switch(opcion)
										{
											case 1:
												experiencia= experiencia + 10;
												cout<<"\nDecides unirte a Luca y juntos crean una melodia apasionada"<<endl;
												cout<<"De la nada otros musicos se unen y asi llegan personas a escuchar la melodia apasionada"<<endl;
												cout<<"y hermosa que logran crear, pero termias dandole las gracias a Luca y continuas tu camino"<<endl<<endl;
												cout<<"+ 10 de experiencia"<<endl;
												cout<<"Ahora tienes un total de "<< experiencia <<" experiencia"<<endl;
											break;
											case 2:
												experiencia= experiencia - 10;
												cout<<"\nPrefieres escuchar a Luca mientras te sumerges en la musica"<<endl;
												cout<<"Al terminar de tocar Luca, te agracede y terminan hablando de"<<endl;
												cout<<"otros temas que no tienen nada que ver con musica"<<endl<<endl;
												cout<<"- 10 de experiencia"<<endl;
												cout<<"Ahora tienes un total de "<< experiencia <<" experiencia"<<endl;
											break;
											case 3:
												experiencia= experiencia + 10;
												cout<<"\nQuieres conocer mas sobre Luca y su conexion con la musica"<<endl;
												cout<<"Al terminar de tocar Luca, te cuenta su historia y te da unas clases"<<endl;
												cout<<"rapidas de violin, asi como muchos consejos de musica"<<endl<<endl;
												cout<<"+ 10 de experiencia"<<endl;
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
							experiencia= experiencia + 5;
							cout<<"\nUn hombre con una guitarra desgastada te sonrie desde una esquina"<<endl;
							cout<<"Te acercas a ver como toca mas de cerca por lo que el guitarrista, llamado Alejandro"<<endl;
							cout<<"te invita a sentarte y compartir historias. Que eliges hacer?"<<endl<<endl;
								do
								{
									cout<<"Tienes tres opciones:"<<endl;
									cout<<"1)Compartir tus Historias Musicales"<<endl;
									cout<<"2)Escuchar sus Historias"<<endl;
									cout<<"3)Proponer una Jam Session"<<endl<<endl;
									cout<<"4)Salir de la historia."<<endl<<endl;
									cout<<"+ 5 de experiencia"<<endl;
									cout<<"Tienes un total de "<< experiencia <<" experiencia"<<endl<<endl;
									cout<<"Ingrea el numero de la opcion la cual deseas elejir: ";
									cin>>opcion2;
										switch(opcion2)
										{
											case 1:
												experiencia = experiencia -10 ;
												cout<<"\nCompartes tus propias experiencias musicales"<<endl;
												cout<<"Al compartirlas Alejandro queda impresionado y admirado por ti"<<endl;
												cout<<"Sin embargo a la larga lo aburres y termina yendose "<<endl;
												cout<<"- 10 de experiencia"<<endl;
												cout<<"Ahora tienes un total de "<< experiencia <<" experiencia"<<endl;
											break;
											case 2:
												experiencia = experiencia + 10 ;
												cout<<"\nPrefieres escuchar las historias musicales de Alejandro"<<endl;
												cout<<"Despues de escuchar a Alejrandro comprendes porque es tan buen gutarrista"<<endl;
												cout<<"Te despides y sigues tu camino"<<endl;
												cout<<"+ 10 de experiencia"<<endl;
												cout<<"Ahora tienes un total de "<< experiencia <<" experiencia"<<endl;
												break;
											case 3:
												experiencia = experiencia + 10 ;
												cout<<"\nSugieres tocar juntos para crear nuevas historias musicales"<<endl;
												cout<<"Terminas teniendo una experiencia muy bonita y agrable, pero decides seguir tu camino"<<endl;
												cout<<"+ 10 de experiencia"<<endl;
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
							experiencia= experiencia + 5;
							cout<<"\nUna mujer toca un piano antiguo con una elegancia intrigante, al acercarte"<<endl;
							cout<<"la pianista, conocida como Isabella, te mira con curiosidad. Como decides abordar la situacion?"<<endl<<endl;
								do
								{
									cout<<"Tienes tres opciones:"<<endl;
									cout<<"1)Unirte a su Melodia"<<endl;
									cout<<"2)Preguntar sobre su Inspiracion"<<endl;
									cout<<"3)Pedirle que Te Muestre Algo Sobre el Piano"<<endl<<endl;
									cout<<"4)Salir de la historia."<<endl<<endl;
									cout<<"+ 5 de experiencia"<<endl;
									cout<<"Tienes un total de "<< experiencia <<" experiencia"<<endl<<endl;
									cout<<"Ingrea el numero de la opcion la cual deseas elejir: ";
									cin>>opcion3;
										switch(opcion3)
										{
											case 1:
												experiencia = experiencia -10 ;
												cout<<"\nTe sientas junto a Isabella y comienzas a tocar un instrumento complementario"<<endl;
												cout<<"Sin embargo esto no le agrada a Isabella y te pide que te retires de manera amable"<<endl;
												cout<<"- 10 de experiencia"<<endl;
												cout<<"Ahora tienes un total de "<< experiencia <<" experiencia"<<endl;
											break;
											case 2:
												experiencia = experiencia + 10 ;
												cout<<"\nQuieres saber que la inspira a tocar de esa manera tan unica"<<endl;
												cout<<"A lo que te responde que es lo hermoso que solia tocar su abuelo por lo que "<<endl;
												cout<<"te demuestra algunos de los trucos que su abuelo utilizaba al tocar"<<endl;
												cout<<"+ 10 de experiencia"<<endl;
												cout<<"Ahora tienes un total de "<< experiencia <<" experiencia"<<endl;
												break;
											case 3:
												experiencia = experiencia + 0 ;
												cout<<"\nQuieres aprender algo nuevo sobre el piano"<<endl;
												cout<<"A lo que accede pero te demuestra solo lo basico, cosas que ya 4sabias "<<endl;
												cout<<"+ 0 de experiencia"<<endl;
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
							experiencia= experiencia + 5;
							cout<<"\nUn joven toca tambores con una energia contagiosa, debido a la melodia tan contagiosa"<<endl;
							cout<<"te acercas bailando por lo que el percusionista, llamado Miguel te invita a unirte a su"<<endl;
							cout<<"animada sesion de tambores. Que decides hacer?"<<endl<<endl;
								do
								{
									cout<<"Tienes tres opciones:"<<endl;
									cout<<"1)Unirte a la Fiesta de Tambores"<<endl;
									cout<<"2)Observar con Admiracion"<<endl;
									cout<<"3)Proponer una Fusion de Estilos"<<endl<<endl;
									cout<<"4)Salir de la historia."<<endl<<endl;
									cout<<"+ 5 de experiencia"<<endl;
									cout<<"Tienes un total de "<< experiencia <<" experiencia"<<endl<<endl;
									cout<<"Ingrea el numero de la opcion la cual deseas elejir: ";
									cin>>opcion4;
										switch(opcion4)
										{
											case 1:
												experiencia= experiencia + 10;
												cout<<"\nTe sumas con entusiasmo a la sesion de tambores"<<endl;
												cout<<"Por lo que terminas acomplandote a su ritmo y terminan creando"<<endl;
												cout<<"una melodia tan contagiosa que pone a bailar a todos alrededor"<<endl;
												cout<<"+ 10 de experiencia"<<endl;
												cout<<"Ahora tienes un total de "<< experiencia <<" experiencia"<<endl;
											break;
											case 2:
												experiencia= experiencia + 0;
												cout<<"\nPrefieres disfrutar del espectaculo y observar a Miguel"<<endl;
												cout<<"Por lo que al final felicitas a Miguel, y continuas con tu camino"<<endl;
												cout<<"+ 0 de experiencia"<<endl;
												cout<<"Ahora tienes un total de "<< experiencia <<" experiencia"<<endl;
												break;
											case 3:
												experiencia= experiencia - 10;
												cout<<"\nSugieres combinar su percusion con otro instrumento para crear algo unico"<<endl;
												cout<<"Pero a Miguel, ni a la gente le termina agragdando, por lo que te pide que dejes de tocar y te retires"<<endl;
												cout<<"- 10 de experiencia"<<endl;
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
			
				if (experiencia <= 0)
				{
		            cout<<"\nTe quedaste sin experiencia ¡Fin de la historia!"<<endl;
					return 0;
	        	} 
	        	
					cout<<"\nCapitulo 2:  Encrucijada Musical"<<endl<<endl;
					cout<<"Despues de experimentar con el primer musico, llegas a una encrucijada musical donde tres caminos se cruzan."<<endl;
					cout<<"Cual decides tomar?"<<endl<<endl;
						do
						{
							cout<<"Tienes tres opciones:"<<endl;
							cout<<"1)El Camino del Jazz Urbano"<<endl;
							cout<<"2)La Avenida del Folk Clasico"<<endl;
							cout<<"3)El Pasillo de la Electronica Creativa"<<endl<<endl;
							cout<<"4)Salir de la historia."<<endl<<endl;
							cout<<"Tienes un total de "<< experiencia <<" experiencia"<<endl<<endl;
							cout<<"Ingrea el numero de la opcion la cual deseas elejir: ";
							cin>>opcion;
								switch(opcion)
									{
										case 1:
											int opcion;
											experiencia= experiencia + 5;
											cout<<"\nEn un callejon lleno de ritmos jazzisticos y musicos improvisando"<<endl;
											cout<<"En el Jazz Urbano, encuentras a tres musicos destacados. Cual eliges?"<<endl<<endl;
												do
												{
													cout<<"Tienes tres opciones:"<<endl;
													cout<<"1)El Saxofonista Seductor"<<endl;
													cout<<"2)El Bajista Groovy"<<endl;
													cout<<"3)La Cantante Encantadora"<<endl<<endl;
													cout<<"4)Salir de la historia."<<endl<<endl;
													cout<<"+ 5 de experiencia"<<endl;
													cout<<"Tienes un total de "<< experiencia <<" experiencia"<<endl<<endl;
													cout<<"Ingrea el numero de la opcion la cual deseas elejir: ";
													cin>>opcion;
														switch(opcion)
														{
															case 1:
																experiencia= experiencia - 15;
																cout<<"\nEl saxofonista te invita a unirse a su jam session"<<endl;
																cout<<"Sin embargo el saxofonista no tiene una muy buena actitud y es grosero"<<endl;
																cout<<"por lo que optas por retirarte de esa session"<<endl;
																cout<<"- 15 de experiencia"<<endl<<endl;
																cout<<"Ahora tienes un total de "<< experiencia <<" experiencia"<<endl;
															break;
															case 2:
																experiencia= experiencia - 25;
																cout<<"\nUn bajista con una presencia magnetica que te atrae"<<endl;
																cout<<"Sin embargo te atrae y te pide que toques algo que le causaste intriga"<<endl;
																cout<<"pero al momento de esucharte tocar se rie de ti y te pide que te retires"<<endl;
																cout<<"- 25 de experiencia"<<endl<<endl;
																cout<<"Ahora tienes un total de "<< experiencia <<" experiencia"<<endl;
															break;
															case 3:
																experiencia= experiencia + 10;
																cout<<"\nUna vocalista que te invita a cantar a duo con ella"<<endl;
																cout<<"Al momento de cantar te dice que tienes una voz muy bonita"<<endl;
																cout<<"por lo que te da muhcos consejos sobre como vocalizar"<<endl;
																cout<<"+ 10 de experiencia"<<endl<<endl;
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
											experiencia= experiencia + 5;
											cout<<"\nUna calle decorada con luces suaves donde suena musica folk tradicional"<<endl;
											cout<<"En la Avenida del Folk Clasico, descubres tres artistas destacados. Cual captura tu atencion?"<<endl<<endl;
												do
												{
													cout<<"Tienes tres opciones:"<<endl;
													cout<<"1)El Violinista Tradicional"<<endl;
													cout<<"2)El Cantautor Melancolico:"<<endl;
													cout<<"3)El Coro Folklorico"<<endl<<endl;
													cout<<"4)Salir de la historia."<<endl<<endl;
													cout<<"+ 5 de experiencia"<<endl;
													cout<<"Tienes un total de "<< experiencia <<" experiencia"<<endl<<endl;	
													cout<<"Ingrea el numero de la opcion la cual deseas elejir: ";
													cin>>opcion2;
														switch(opcion2)
														{
															case 1:
																experiencia= experiencia + 10;
																cout<<"\nUn violinista que te invita a unirte a una danza tradicional"<<endl;
																cout<<"Tu no sabes bailar, pero al escuchar al violista tocar, sientes la musica"<<endl;
																cout<<"y terminas dando una increible funcion de danza, al finalizar el violinista"<<endl;
																cout<<"se acerca a ti y te da unos buenos tips de baile"<<endl;
																cout<<"+ 10 de experiencia"<<endl<<endl;
																cout<<"Ahora tienes un total de "<< experiencia <<" experiencia"<<endl;
															break;
															case 2:
																experiencia= experiencia - 10;
																cout<<"\nUn musico con una guitarra que te invita a escuchar sus canciones melancolicas"<<endl;
																cout<<"sin embargo no te das cuenta que este estaba borracho, y tu al decirle que sonaba"<<endl;
																cout<<"algo desafinado se enojaba y trata de golpearte pero terminas huyendo de el"<<endl;
																cout<<"- 10 de experiencia"<<endl<<endl;
																cout<<"Ahora tienes un total de "<< experiencia <<" experiencia"<<endl;
																break;
															case 3:
																experiencia= experiencia - 10;
																cout<<"\nUn grupo vocal que te invita a unirte a su armonia"<<endl;
																cout<<"Todo iba bien, hasta que unos integrantes del coro se empezaron a pelear entre ellos"<<endl;
																cout<<"y termina separandose el coro, y a ti te hechan la culpa de todo y te piden que te vayas"<<endl;
																cout<<"- 10 de experiencia"<<endl<<endl;
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
											experiencia= experiencia + 5;
											cout<<"\nUna estrecha calle llena de luces parpadeantes y sonidos electronicos."<<endl;
											cout<<"En el Pasillo de la Electronica Creativa, tres DJs te llaman la atencion. Cual eliges explorar?"<<endl<<endl;
												do
												{
													cout<<"Tienes tres opciones:"<<endl;
													cout<<"1)El DJ Experimental"<<endl;
													cout<<"2)La Productora Innovadora"<<endl;
													cout<<"3)El Maestro de los Beats"<<endl<<endl;
													cout<<"4)Salir de la historia."<<endl<<endl;
													cout<<"+ 5 de experiencia"<<endl;
													cout<<"Tienes un total de "<< experiencia <<" experiencia"<<endl<<endl;
													cout<<"Ingrea el numero de la opcion la cual deseas elejir: ";
													cin>>opcion3;
														switch(opcion3)
														{
															case 1:
																experiencia= experiencia - 15;
																cout<<"\nUn creador de sonidos experimentales que te invita a ser parte de su mezcla"<<endl;
																cout<<"Te unes y te das cuentas que sus mezclas no estan tan mal sin embargo"<<endl;
																cout<<"el al ver las mezclas que tu colocabas las quitaba porque decia que arruinaba"<<endl;
																cout<<"la mezcla en general y decide pedirte que te retires"<<endl;
																cout<<"- 15 de experiencia"<<endl;
																cout<<"Ahora tienes un total de "<< experiencia <<" experiencia"<<endl;
															break;
															case 2:
																experiencia= experiencia - 20;
																cout<<"\nUna productora que te invita a colaborar en la creacion de musica electronica"<<endl;
																cout<<"Todo iba bien excepto a la hora de mezclar los generos para hacer la musica ya que"<<endl;
																cout<<"a ella no le gusta para nada los generos que tu escuchas por lo que se burla de ti y te pide que te retires"<<endl;
																cout<<"- 20 de experiencia"<<endl;
																cout<<"Ahora tienes un total de "<< experiencia <<" experiencia"<<endl;
																break;
															case 3:
																experiencia= experiencia - 25;
																cout<<"\nUn experto en beats que te desafia a una batalla"<<endl;
																cout<<"Tu inicas muy bien y vas ganando la batalla sin embargo al no saber mucho como hacer beats"<<endl;
																cout<<"no mezlcas bien una parte, y el amestro te toma ventaja y termina ganado la batalla diciendote"<<endl;
																cout<<"que abandones por completo los beats y te retires"<<endl;
																cout<<"- 25 de experiencia"<<endl;
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
			
							if (experiencia <= 0)
							{
					            cout<<"\nTe quedaste sin experiencia ¡Fin de la historia!"<<endl;
								return 0;
				        	} 
	        	
								cout<<"\nCapitulo 3(Final): El Descubrimiento Final"<<endl<<endl;
								cout<<"Despues de explorar el camino del genero de musica, llegas a un lugar magico donde la"<<endl;
								cout<<"musica de todos los caminos se fusiona. Como decides contribuir a esta sinfonia final?"<<endl<<endl;
									do{
										cout<<"Tienes tres opciones:"<<endl;
										cout<<"1)Unirte a la Gran Jam Session"<<endl;
										cout<<"2)Convertirte en el Director de la Orquesta"<<endl;
										cout<<"3)Dejar que la Música te Lleve"<<endl<<endl;
										cout<<"4)Salir de la historia ."<<endl<<endl;
										cout<<"Tienes un total de "<< experiencia <<" experiencia"<<endl<<endl;
										cout<<"Ingrea el numero de la opcion la cual deseas elejir: ";
										cin>>opcion;
											switch(opcion)
												{
													case 1:
														experiencia= (experiencia - experiencia ) + 1000;
														cout<<"\nTe unes con todos los musicos para crear una sinfonia epica"<<endl;	
														cout<<"Y terminan armo la mejor sinfonia de toda la historia ya que pusidte empelar"<<endl;
														cout<<"muy bien todos los conocimientos que fuiste adquieriendo"<<endl;
														cout<<"Bonus recibes +1000 de experiencia"<<endl;
														cout<<"Ahora tienes un total de "<< experiencia <<" experiencia"<<endl;	
													break;
													case 2:
														experiencia= experiencia - 35;
														cout<<"\nTomas el papel de director y guias a los musicos hacia una armonia perfecta"<<endl;
														cout<<"Sin embargo te terminan traicionando los nervios y no puedes emplear bien todo lo que aprendiste"<<endl;
														cout<<"y en lugar de lograr una armonia perfecta logras un completo desastre y todos piden que te vayas"<<endl;
														cout<<"pierdes toda tu experiencia"<<endl;
														cout<<"Ahora tienes un total de "<< experiencia <<" experiencia"<<endl;	
													break;
													case 3:
														experiencia= (experiencia - experiencia ) +1;
														cout<<"\nTe sumerges en la musica y dejas que te guie hacia donde desee"<<endl;	
														cout<<"Sin embargo terminas desperdiciando totalmente todo lo aprendido"<<endl;
														cout<<"por el miedo a no creer que puedes armar una bonita sinfonia"<<endl;
														cout<<"se te queda solo 1 de experiencia"<<endl;
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
												
										if (experiencia <= 0)
										{
								            cout<<"\nTe quedaste sin experiencia ¡Fin de la historia!"<<endl;
											return 0;
							        	} 
	        	
	cout<<"\nFin de la hirtoria gracias por leer"<<endl;
			
	return 0;
	
}	
	
