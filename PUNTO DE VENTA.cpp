#include <iostream>
#include <string>
#include <stdlib.h>
#include <fstream>

using namespace std;



void escribirProducto(string a[20][5])
{
	ofstream archivo;
	
	archivo.open("PRODUCTOS.txt",ios::out);
	
	if(archivo.fail())
	{
		cout<<"ERROR NO SE PUDO ABRIR EL ARCHIVO";
		exit(1);
	}
	else
	{
		for (int i=0;i<=19;i++)
		{
			for(int j=0;j<=4;j++)
			{
				archivo<<a[i][j]<<"\n";
			}
		}
	}
	archivo.close();
}
void lecturaProducto(string a[2][3])
{
	ifstream archivo;
	string linea;
	
	archivo.open("CLIENTES.txt",ios::in);
	if(!archivo.is_open())
	{
		cout<<"ERROR NO SE PUDO ABRIR EL ARCHIVO";
		exit(1);
	}
	
	for(int i=0;i<=19;i++)
	{
		for(int j=0;j<=4;j++)
		{
			getline(archivo,linea);
			a[i][j]=linea;
		}
	}
		archivo.close();
}

void escribirRVI(string a[100][4])
{
	ofstream archivo;
	
	archivo.open("RVI.txt",ios::out);
	
	if(archivo.fail())
	{
		cout<<"ERROR NO SE PUDO ABRIR EL ARCHIVO";
		exit(1);
	}
	else
	{
		for (int i=0;i<=99;i++)
		{
			for(int j=0;j<=3;j++)
			{
				archivo<<a[i][j]<<"\n";
			}
		}
	}
	archivo.close();//cerrar el archivo
}
void lecturaRVI(string a[100][4])
{
	ifstream archivo;
	string linea;
	
	archivo.open("RVI.txt",ios::in);
	if(!archivo.is_open())
	{
		cout<<"ERROR NO SE PUDO ABRIR EL ARCHIVO";
		exit(1);
	}
	
	for(int i=0;i<=99;i++)
	{
		for(int j=0;j<=3;j++)
		{
			getline(archivo,linea);
			a[i][j]=linea;
		}
	}
		archivo.close();
}

void escribirCliente(string a[5][4])
{
	ofstream archivo;
	
	archivo.open("CLIENTE.txt",ios::out);
	
	if(archivo.fail())
	{
		cout<<"no se pudo abrir el archivo";
		exit(1);
	}
	else
	{
		for (int i=0;i<=4;i++)
		{
			for(int j=0;j<=3;j++)
			{
				archivo<<a[i][j]<<"\n";
			}
		}
	}
	archivo.close();
}
void lecturaCliente(string a[5][4])
{
	ifstream archivo;
	string linea;
	
	archivo.open("CLIENTE.txt",ios::in);
	if(!archivo.is_open())
	{
		cout<<"ERROR NO SE PUDO ABRIR EL ARCHIVO";
		exit(1);
	}
	
	for(int i=0;i<=4;i++)
	{
		for(int j=0;j<=3;j++)
		{
			getline(archivo,linea);
			a[i][j]=linea;
		}
	}
		archivo.close();
}

void escribirRVT(string a[5][3])
{
	ofstream archivo;
	
	archivo.open("RVT.txt",ios::out);
	
	if(archivo.fail())
	{
		cout<<"no se pudo abrir el archivo";
		exit(1);
	}
	else
	{
		for (int i=0;i<=4;i++)
		{
			for(int j=0;j<=2;j++)
			{
				archivo<<a[i][j]<<"\n";
			}
		}
	}
	archivo.close();
}
void lecturaRVT(string a[5][3])
{
	ifstream archivo;
	string linea;
	
	archivo.open("RVT.txt",ios::in);
	if(!archivo.is_open())
	{
		cout<<"no se pudo abrir el archivo";
		exit(1);
	}
	
	for(int i=0;i<=4;i++)
	{
		for(int j=0;j<=2;j++)
		{
			getline(archivo,linea);
			a[i][j]=linea;
		}
	}
		archivo.close();
}

void escribirInt(float a,float b,int c, int d, int e, int f)
{
	ofstream archivo;
	
	archivo.open("int.txt",ios::out);
	
	if(archivo.fail())
	{
		cout<<"no se pudo abrir el archivo";
		exit(1);
	}
	else
	{
		archivo<<a<<"\n";
		archivo<<b<<"\n";
		archivo<<c<<"\n";
		archivo<<d<<"\n";
		archivo<<e<<"\n";
		archivo<<f<<"\n";
	}
	archivo.close();
}
void lecturaInt(float a,float b,int c, int d, int e, int f)
{
	ifstream archivo;
	string linea;
	
	archivo.open("int.txt",ios::in);
	if(!archivo.is_open())
	{
		cout<<"no se pudo abrir el archivo";
		exit(1);
	}
		getline(archivo,linea);
		a=stoi(linea);
		getline(archivo,linea);
		b=stoi(linea);
		getline(archivo,linea);
		c=stoi(linea);
		getline(archivo,linea);
		d=stoi(linea);
		getline(archivo,linea);
		e=stoi(linea);
		getline(archivo,linea);
		f=stoi(linea);
		
	archivo.close();//cerramos el archivo
}

void escribirtotalCl(int a[5])
{
	ofstream archivo;
	
	archivo.open("total_cliente.txt",ios::out);
	
	if(archivo.fail())
	{
		cout<<"no se pudo abrir el archivo";
		exit(1);
	}
	else
	{
		for (int i=0;i<=4;i++)
		{
				archivo<<a[i]<<"\n";
		}
	}
	archivo.close();
}
void lecturatotalCl(int a[5])
{
	ifstream archivo;
	string linea;
	
	archivo.open("total_cliente.txt",ios::in);
	if(!archivo.is_open())
	{
		cout<<"no se pudo abrir el archivo";
		exit(1);
	}
	
	for(int i=0;i<=4;i++)
	{
			getline(archivo,linea);
			a[i]=stoi(linea);
	}
		archivo.close();
}
bool Numero(string cade)
{
	int l,num;
	char com;
	
	l=cade.length();
	for (int i=0;i<l;i++)
	{
		com=cade.at(i);
		num=int(com);
		if (num<48 or num>57)
		{
			cout<<"ingrese un numero valido\n";
			return false;
		}
	}
	return true;
}

string Articulos[20][5];
string clientes[5][4];
string RVI[100][4];
string RVT[5][3];
float TVentas=0;
bool Numero(string cade);	
int opcion;
int p,np,opc2,x;
int mov=0;
float totalV=0;
int pro=8;int pro2=4;
int cic=0;int cic2=0;  
int i=2;                              
float totalCl[5];

int main()
{	
    //DATOS DE LOS CLIENTES ID, NOMBRE, DINERO, DEUDA O CREDITO
	// DATOS DEL PRIMER CLIENTE
	clientes[0][0]="0";
	clientes[0][1]="Jesus";
	clientes[0][2]="2500";
	clientes[0][3]="155";
	//DATOS DEL SEGUNDO CLIENTE
	clientes[1][0]="1";
	clientes[1][1]="Maria";
	clientes[1][2]="3500";
	clientes[1][3]="550";
	//DATOS DEL TERCER CLIENTE
	clientes[2][0]="2";
	clientes[2][1]="Roberto";
	clientes[2][2]="4500";
	clientes[2][3]="700";
	

	//PRODUCTOS, PRECIOS, ID Y CANTIDAD DE STOCK
	Articulos[0][0]="0";
	Articulos[0][1]="Creminos";
	Articulos[0][2]="3";
	Articulos[0][3]="30";
	Articulos[0][4]="10";
	//
	Articulos[1][0]="1";
	Articulos[1][1]="coca cola 600ml";
	Articulos[1][2]="20";
	Articulos[1][3]="20";
	Articulos[1][4]="5";
	//
	Articulos[2][0]="2";
	Articulos[2][1]="Takis fuego";
	Articulos[2][2]="15";
	Articulos[2][3]="8";
	Articulos[2][4]="4";
	//
	Articulos[3][0]="3";
	Articulos[3][1]="Pinguinos";
	Articulos[3][2]="18";
	Articulos[3][3]="15";
	Articulos[3][4]="5";
	//
	Articulos[4][0]="4";
	Articulos[4][1]="Queso oaxaca";
	Articulos[4][2]="70";
	Articulos[4][3]="10";
	Articulos[4][4]="4";
	//
	Articulos[5][0]="5";
	Articulos[5][1]="Paquete de salchichas Don Hector";
	Articulos[5][2]="35";
	Articulos[5][3]="7";
	Articulos[5][4]="2";
	//
	Articulos[6][0]="6";
	Articulos[6][1]="Speed 600 ml";
	Articulos[6][2]="80";
	Articulos[6][3]="15";
	Articulos[6][4]="4";
	//
	Articulos[7][0]="7";
	Articulos[7][1]="Botella de agua Bonafont ";
	Articulos[7][2]="12";
	Articulos[7][3]="20";
	Articulos[7][4]="5";
	//
	Articulos[8][0]="8";
	Articulos[8][1]="Comida para perro Dog Show";
	Articulos[8][2]="80";
	Articulos[8][3]="18";
	Articulos[8][4]="6";
	
	//MATRIZ DE LAS VENTAS INDIVIDUALES
	RVT[0][2]="0";
	RVT[1][2]="0";
	RVT[2][2]="0";
	RVT[3][2]="0";
	RVT[4][2]="0";
	do
	{
		system("CLS");
		system("color 0b");
		cout<<"|-----------------------------------|\n";
		cout<<"|           ABARROTERA              |\n";
		cout<<"|-----------------------------------|\n";
		cout<<"|  [1] VENDER                       |\n";
		cout<<"|  [2] PRODUCTOS                    |\n";
		cout<<"|  [3] CLIENTE                      |\n";
		cout<<"|  [4] REGISTRO DE VENTA TOTAL      |\n";
		cout<<"|  [5] TOTAL DE VENTAS              |\n";
		cout<<"|  [6] STOCK DE PRODUCTOS           |\n";
		cout<<"|  [7] SALIR                        |\n";
		cout<<"|-----------------------------------|\n";

		cin>>opcion;
		switch(opcion)
		{
			case 1:
				{	
					system("CLS");
					string xp;
					mov++;
					string op="";
					float tempp;
					string id; id=" ";
					int idN;
					string npL;
					tempp=0;
					do
					{
						cout<<"VENTAS\n";
						for (cic=0;cic<=pro;cic++)
						{
							if(Articulos[cic][1]==" ")
							{
								cout<<"\n";
							}
							else
							cout<<"["<<cic<<"]  "<<"$"<<Articulos[cic][2]<<" "<<Articulos[cic][1]<<"\n";
						}
						cout<<"ELEGIR PRODUCTO: ";	
						do
						{
						cin>>xp;
						}
						while(Numero(xp)==false);
						p=stoi(xp);
						cout<<"CANTIDAD DE "<<Articulos[p][1]<<" QUE DESEA COMPRAR: ";
						do
						{					
						cin>>xp;
						}
						while(Numero(xp)==false);
						np=stoi(xp);
						int l;
						l=stoi(Articulos[p][3]);
						while(np>l)
						{
							cout<<"INGRESE UNA CANTIDAD MENOR";
							cin>>np;
						}
						npL=to_string(np);
						tempp=stof(Articulos[p][2]);
						tempp*=np;
						cout<<"TOTLA A PAGAR: "<<tempp<<"\n";
						totalV=totalV+tempp;											 
						do
						{
							if (id==" ")
							{
								cout<<"ID DEL CLIENTE: ";
								do
								{
								cin>>id;
								}
								while(Numero(id)==false);
								idN=stoi(id);
								if(idN>i or idN<0)
								{
									cout<<"INGRESAR UN CLIENTE QUE ESTE REGISTRADO\n";
									x=1;
								}							
								else 
									x=0;
							}
							else 
								x=0;	
						}
						while(x==1);
							int st=stoi(Articulos[p][3]);
							st=st-np;
							Articulos[p][3]=to_string(st);
							string temppL=to_string(tempp);
							string movL;
							movL=to_string(mov);
							
							RVI[mov][1]=movL;
							RVI[mov][2].append(Articulos[p][1]);
							RVI[mov][2].append("     $");
							RVI[mov][2].append(temppL);
							RVI[mov][2].append("\n");
							if (RVT[idN][0]!=id)
							{
								RVT[idN][0]=id;
							}
							RVT[idN][1].append(npL);
							RVT[idN][1].append(Articulos[p][1]);
							RVT[idN][1].append(temppL);
							RVT[idN][1].append("\n");
						cout<<"QUIERE COMPRAR OTRO PRODUCTO? SI/NO\n";
						cin>>op;

					}
					while(op=="SI" or op=="S");
					cout<<"EL TOTAL A PAGAR ES: "<<totalV;					
					//VENTAS INDIVIDUALES
					string totalVL;
					totalVL=to_string(totalV);
					RVI[mov][0]=id;
					RVI[mov][3]=totalVL;
					//REPORTE DE VENTA TOTALES
					float tempRVT=stof(RVT[idN][2]);
					tempRVT=tempRVT+totalV;
					RVT[idN][2]=to_string(tempRVT);
					//total de venta
					TVentas=TVentas+totalV;
					
					system("PAUSE");
				}
				break;
			case 2:
				{	
					int id;
					int op;
					system("cls");
					system("color 0d");
					cout<<"|---------------------------------|\n";
					cout<<"|           PRODUCTOS             |\n";
					cout<<"|---------------------------------|\n";
					cout<<"| [1] BUSCAR PRODUCTO             |\n";
					cout<<"| [2] MOSTRAR TODOS LOS PRODUCTOS |\n";
					cout<<"| [3] AGREGAR PRODUCTO            |\n";
					cout<<"| [4] BORRAR PRODUCTO             |\n";
					cout<<"| [5] SALIR                       |\n";
					cout<<"|---------------------------------|\n";
					cin>>op;
					cin.ignore(32767,'\n');
					do
					{
						string xp;
					switch (op)
					{
						case 1:
							{
								cout<<"INGRESAR EL ID DEL PRODUCTO: ";
								do
								{
								cin>>xp;
								}
								while(Numero(xp)==false);
								id=stoi(xp);
								int idN=0;
								for (idN=0;idN<=4;idN++)
								{
									if(idN==0)
									{
										cout<<"ID:";
									}
									else if(idN==2)
									{
										cout<<"$";
									}
									else if(idN==3)
									{
										cout<<"STOCK ";
									}
									else if(idN==4)
									{
										cout<<"CANTIDAD(STOCK) MINIMO ";
									}
									cout<<Articulos[id][idN]<<"  ";		
								}	
								system("PAUSE");
							}
							break;
						case 2:
							{
								for (cic=0;cic<=pro;cic++)
								{
									for(cic2=0;cic2<=pro2-1;cic2++)
									{
										if(cic2==0)
										{
											cout<<"ID:";
										}
										else if(cic2==2)
										{
											cout<<"$";
										}
										else if(cic2==3)
										{
											cout<<"STOCK ";
										}
										cout<<Articulos[cic][cic2]<<"  ";
									}
									cout<<"\n";
								}
								system("PAUSE");
							}
							break;
						case 3:
							{
								int x;
								cout<<"AGREGAR INFO O DESCRIPCION DEL PRODUCTO: ";
								for (cic=0;cic<=pro;cic++)
								{
									if(Articulos[cic][1]==" ")
									{
										getline(cin,Articulos[cic][1]);
										Articulos[cic][0]=to_string(cic);
										do
										{										
										cout<<"PRECIO DE VENTA DEL PRODUCTO: ";
										cin>>xp;
										}
										while(Numero(xp)==false);
										Articulos[cic][2]==xp;
										do
										{										
										cout<<"CANTIDAD DE PRODUCTOS EN STOCK: ";
										cin>>xp;
										}
										while(Numero(xp)==false);
										Articulos[cic][3]=xp;
										do
										{
										cout<<"CANTIDAD MINIMA DE STOCK DE PRODUCTOS: ";
										cin>>xp; 
										}
										while(Numero(xp)==false);
										Articulos[cic][4]=xp;
										cic+=10;
										cic+=pro;

										x=1;
									}
									else
									{
										x=0;
									}
								}
								if(x==0)
								{
									pro++;
									getline(cin,Articulos[pro][1]);
									Articulos[pro][0]=to_string(pro);
									do
									{
									cout<<"precio de venta del producto: ";
									cin>>xp;
									}
									while(Numero(xp)==false);
									Articulos[pro][2]=xp;
									do
									{
									cout<<"CANTIDAD(STOCK) DE ARTICULOS: ";
									cin>>xp;
									}
									while(Numero(xp)==false);
									Articulos[pro][3]=xp;
									do
									{
									cout<<"CANTIDAD MINIMA DE ARTICULOS: ";
									cin>>xp; 
									}
									while(Numero(xp)==false);
									Articulos[pro][4]=xp;
								}	
							}
							break;
						case 4:
							{
								int x;
								do
								{
								cout<<"ARTICULO A ELIMINAR: ";
								cin>>xp;
								}
								while(Numero(xp)==false);
								x=stoi(xp);
								Articulos[x][1]=" ";
								Articulos[x][2]=" ";
								Articulos[x][3]=" ";
								Articulos[x][4]=" ";
								cout<<" ARTICULO "<<x<<" ELIMINADO\n";
								cout<<Articulos[x][1]<<Articulos[x][2]<<Articulos[x][3]<<Articulos[x][4]<<"\n";
								system("PAUSE");
							}
							break;
						case 5:
							{
								op=6; 
							}
							break;
						default:
							{
								cout<<"INGRESA UNA OPCION VALIDA";
								system("PAUSE");
								system("CLS");
							}
					}
				}
				while(op<1 or op>6);
			}
			break;
			case 3:
				{
					int op=0;
					string id;
					int idN;
					do
					{
						string A;
						system("CLS");
						system("color 0e");
						cout<<"|---------------------------------|\n";
						cout<<"|           CLIENTES              |\n";
						cout<<"|---------------------------------|\n";
						cout<<"| [1] BUSCAR CLIENTES             |\n";
						cout<<"| [2] MOSTRAR CLIENTES            |\n";
						cout<<"| [3] AGREGAR CLIENTES            |\n";
						cout<<"| [4] BORRAR CLIENTES             |\n";
						cout<<"| [5] ABONAR                      |\n";
						cout<<"| [6] Salir                       |\n";
						cout<<"|---------------------------------|\n";
						cin>>op;
						switch(op)
						{
							case 1:
								{
									do
									{
									cout<<"ingresar cliente para buscar: ";
									cin>>A;
									}
									while(Numero(A)==false);
									id=A;
									idN=stoi(id);
									for (cic=0;cic<=3;cic++)
									{	
										if (cic==0)
										{
											cout<<"ID: ";
										}
										else if (cic==1)
										{
											cout<<"NOMBRE: ";
										}
										else if(cic==2)
										{
											cout<<"CREDITO MAXIMO: ";
										}
										else if (cic==3)
										{
											cout<<"CREDITO UTILIZADO: ";
										}
										cout<<clientes[idN][cic]<<"  ";
									}
									system("PAUSE");
								}
								break;
							case 2:
								{
									for (cic=0;cic<=i;cic++)
									{
										for(cic2=0;cic2<=3;cic2++)
										{
											if(cic2==0)
											{
												cout<<"ID:";
											}
											else if(cic2==1)
											{
												cout<<"NOMBRE: ";
											}
											else if(cic2==2)
											{
												cout<<"CREDITO MAXIMO: ";
											}
											else if(cic2==3)
											{
												cout<<"CREDITO UTILIZADO: ";
											}
											cout<<clientes[cic][cic2]<<"  ";
										}
										cout<<"\n";
									}
									system("PAUSE");
								}
								break;
							case 3:
								{
									int x;
									cout<<"AGREGAR EL NOMBRE DEL CLIENTE A REGISTRAR: ";
									for (cic=0;cic<=i;cic++)
									{
										if(clientes[cic][1]==" ")
										{
											getline(cin,clientes[cic][1]);
											cin.ignore(32767,'\n');
											string cicL=to_string(cic);
											clientes[cic][0]=cicL;
											do
											{
											cout<<"CREDITO MAXICO AL CLIENTE(FIADO): ";
											cin>>A;
											}
											while(Numero(A)==false);
											clientes[cic][2]=A;
											clientes[cic][3]="0";
											cic+=10;
											x=1;
										}
										else
										{
											x=0;
										}
									}
									if(x==0)
									{
									
										i++;
										cin>>clientes[i][1];
										string iL=to_string(i);
										clientes[i][0]=iL;
										do
										{
										cout<<"CREDITO MAXIMO DEL NUEVO CLIENTE(FIADO): ";
										cin>>A;
										}
										while(Numero(A)==false);
										clientes[i][2]=A;
										clientes[i][3]="0";
									}	
								}
								break;
							case 4:
								{
									int x;
									cout<<"CLIENTE A ELIMINAR: ";
									do
									{
									cin>>A;
									}
									while(Numero(A)==false);
									x=stoi(A);
									clientes[x][1]=" ";
									clientes[x][2]=" ";
									clientes[x][3]=" ";
									cout<<" CLIENTE "<<x<<" ELIMINADO\n";
									cout<<clientes[x][1]<<clientes[x][2]<<clientes[x][3]<<"\n";
									system("PAUSE");
								}
								break;
							case 5:
								{
									int temp;
									do
									{
									cout<<"INGRESE EL ID DEL CLENTE QUIEN ABONARA ";
									cin>>A;
									}
									while(Numero(A)==false);
									id=A;
									idN=stoi(id);
									if (idN>=0 and idN<=i)
									{
										cout<<"EL CLIENTE TIENE UNA DEUDA DE: "<<clientes[idN][3]<<"\n";
										do
										{
										cout<<"CANTIDAD A DEPOSITAR: ";
										cin>>A;	
										}
										while(Numero(A)==false);
										temp=stoi(A);
										float tempc=stof(clientes[idN][3]);
										tempc-=temp;
										clientes[idN][3]=to_string(tempc);
										
									}
									else 
									{
										cout<<"CLIENTE NO ECONTRADO, INTENTE DE NUEVO ";
										system("PAUSE");
									}
									system("PAUSE");
								}
								break;
							case 6:
								{
									// para terminar el do while
								}
								break;
							default:
								{
									cout<<"INGRESE UNA OPCION VALIDA\n"<<"PRESIONE CUALQUIER TECLA PARA CONTINUAR";
									system("PAUSE");
									system("CLS");
								}
						}
					}
					while(op!=6);
				}
				break;
		
			case 4:
				{
					int op,x,idN;
					float k;
					cout<<"REGISTRO DE TODAS LAS VENTAS\n";
					for(x=0;x<=i;x++)
					{
						for(idN=0;idN<=2;idN++)
						{
							k=stof(RVT[x][2]);
							if (k>=1)
							{
							cout<<RVT[x][idN]<<"\n";
							}
							else 
							{
								
							}
						}
					}
					system("PAUSE");
				}
				break;
			case 5:
				{
					cout<<"DINERO TOTAL EN LA CAJA\n";
					cout<<"EL TOTAL DE LA CAJA ES: ";
					cout<<TVentas;
					system("PAUSE");
				}
				break;
			case 6:
				{
					int x;
					int temp1,temp2;
					cout<<"CANTIDAD DEL PRODCUTO\n";
					for(x=0;x<=pro;x++)
					{
						cout<<"ID: "<<Articulos[x][0]<<" "<<Articulos[x][1]<<" CANTIDAD ACTUAL: "<<Articulos[x][3]<<"CANTIDAD MINIMA: "<<Articulos[x][4]<<"\n";
						temp1=stoi(Articulos[x][3]);
						temp2=stoi(Articulos[x][4]);
						if(temp1<=temp2)
						{
							cout<<"BAJA CANTIDAD DE PRODUCTOS COMPRAS MAS A LOS PROVEDORES :3 \n";
						}
					}
					system("PAUSE");
				}
				break;
			case 7:
				{
					
				}
				break;
			default:
				{
					cout<<"INGRESAR UNA OPCION VALIDA PORFAVOR\n";
					system("PAUSE");
					system("CLS");
				}		
		}
	}
	while (opcion!=7);
	escribirProducto(Articulos);
	escribirCliente(clientes);
	escribirRVI(RVI);
	escribirRVT(RVT);
	escribirInt(TVentas,totalV,mov,pro,pro2,i);
	return 0;
}
