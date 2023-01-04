#include <iostream>
#include <string>
#include <stdlib.h>
#include <fstream>

using namespace std;

double cant{0};
int opc{};
bool Numero(string cade);
string usuario[2][3];
string NIP0="";

string movimientos[2][100];

int mov[2]{0};

double temp= 0;
int u;
int i= 0;
int val;

void EscribirUsuario(string a[2][3])
{
	ofstream Archivo;
	
	Archivo.open("USUARIOS.txt",ios::out);//crea el archivo de los usarios
	
	if(Archivo.fail())//Comprobamos de que si se creo el archivo
	{
		cout<<"ERROR NO SE PUEDE ABRIR EL ARCHIVO";
		exit(1);
	}
	else
	{
		for (int i=0;i<=1;i++)
		{
			for(int j=0;j<=2;j++)
			{
				Archivo<<a[i][j]<<"\n";
			}
		}
	}
	Archivo.close();//cerramos el archivo
}

void LecturaUsuario(string a[2][3])
{
	ifstream archivo;
	string linea;
	
	archivo.open("usuarios.txt",ios::in);
	if(!archivo.is_open())
	{
		cout<<"no se pudo abrir el archivo";
		exit(1);
	}
	
	for(int i=0;i<=1;i++)
	{
		for(int j=0;j<=2;j++)
		{
			getline(archivo,linea);
			a[i][j]=linea;
		}
	}
		archivo.close();//cerramos el archivo
}

void EscribirMovimiento(string a[2][100])
{
	ofstream Archivo;
	
	Archivo.open("TRANSACCIONES.txt",ios::out);//creamos el archivo de las transacciones
	
	if(Archivo.fail())//comprobar que se a creado
	{
		cout<<"ERROR AL ABRIR EL ARCHIVO";
		exit(1);
	}
	else
	{
		for (int i=0;i<=1;i++)
		{
			for(int j=0;j<=99;j++)
			{
				Archivo<<a[i][j]<<"\n";
			}
		}
	}
	Archivo.close();//cerrar el archivo
}
void lecturaMovimiento(string a[2][100])
{
	ifstream archivo;
	string linea;
	
	archivo.open("TRANSACCIONES.txt",ios::in);
	if(!archivo.is_open())
	{
		cout<<"ERROR AL ABRIR EL ARCHIVO";
		exit(1);
	}
	
	for(int i=0;i<=1;i++)
	{
		for(int j=0;j<=99;j++)
		{
			getline(archivo,linea);
			a[i][j]=linea;
		}
	}
		archivo.close();//cerramos el archivo
}

void escribirMov(int a[2])
{
	ofstream archivo;
	
	archivo.open("movimientos.txt",ios::out);//crea el archivo
	
	if(archivo.fail())//comprobar que se a creado
	{
		cout<<"ERROR AL ABRIR EL ARCHIVO";
		exit(1);
	}
	else
	{
		for (int i=0;i<=1;i++)
		{
				archivo<<a[i]<<"\n";
		}
	}
	archivo.close();//cerrar el archivo
}

void lecturaMov(int a[2])
{
	ifstream archivo;
	string linea;
	
	archivo.open("TRANSACCIONES.txt",ios::in);
	if(!archivo.is_open())
	{
		cout<<"ERROR AL ABRIR EL ARCHIVO";
		exit(1);
	}
	
	for(int i=0;i<=1;i++)
	{
			getline(archivo,linea);
			a[i]=stoi(linea);
	}
		archivo.close();//cerramos el archivo
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
			cout<<"INGRESE UN NUMERO VALIDO \n";
			return false;
		}
	}
	return true;
}

int main()
{
	
	for (int i=0;i<=1;i++)
	{
	mov[i]=0;
	}
	for (int i=0;i<=1;i++)
	{
		usuario[i][2]="10000";// Agregamos el saldo del usuario
		usuario[i][1]="2222";// Agregamos el NIP al usuario
	}
	do 
	{
		string opcion;
		do
		{
			system("color 0c");
			cout<<"|--------------------------|\n";
			cout<<"|    BIENVENIDO USUARIO    |\n";
			cout<<"|--------------------------|\n";
			cout<<"|   [0].-primer usuario    |\n";
			cout<<"|   [1].-segundo usuario   |\n";
			cout<<"|   [3].-salir             |\n";
			cout<<"|--------------------------|\n";
			cout<<"| A QUE USARIOS VA ENTRAR? |\n";
			cout<<"|--------------------------|\n";
			cin>>opcion;
		}
		while(Numero(opcion)==false);
		u=stoi(opcion);
		if (u>=2 or u<0)
		{
			cout<<"Hasta la proxima";
		}
		else if (u<=1)
		{
		system("CLS");
		do
		{
		cout<<"ingrese el NIP DEL USARIO: ";
		cin>>NIP0;
		val=NIP0.length();
		}
		while(val!=4);
		if (usuario[u][1]==NIP0)
		{
			do
		{
		do
		{
			system("CLS");
			system("color 0b");
			cout<<"|---------------------------------|\n";
			cout<<"|BIENVENIDO A SU CAJERO AUTOMATICO|\n";
			cout<<"|---------------------------------|\n";
			cout<<"|[1].-Retiro de saldo             |\n";       		
			cout<<"|[2].-Deposito de saldo           |\n";
			cout<<"|[3].-Consulta de saldo           |\n";
			cout<<"|[4].-Cambio de NIP               |\n";
			cout<<"|[5].-Transferencia               |\n";
			cout<<"|[6].-Ultimos 4 movimientos       |\n";
			cout<<"|[7].-Salir                       |\n";
			cout<<"|---------------------------------|\n";

			cin>>opcion;
		}
		while(Numero(opcion)==false);
		opc=stoi(opcion);	
		switch (opc)
			{
				case 1:
				{
					do
					{
					cout<<"Dinero a retirar: ";
					cin>>opcion;
					}
					while(Numero(opcion)==false);
					cant=stoi(opcion);
					temp=stod(usuario[u][2]);
					while (cant>temp)
						{	
							cout<<"ERRO NO ESP POSIBLE SACAR ESA CANTIDAD: "<<cant<<" INGRESE UNA QUE SEA MENOR A: "<<temp<<"\n";
							do
							{
							cin>>opcion;
							}
							while(Numero(opcion)==false);
							cant=stoi(opcion);
							movimientos[u][mov[u]].append(" NO SE PUDO HACER EL RETIRO \n");
							
							while(Numero(opcion)==false);
							
						}
					temp=temp-cant;
					usuario[u][2]=to_string(temp);
					mov[u]=mov[u]+1;
					movimientos[u][mov[u]].append(" SU RETIRO SE HA REALIZADO CON EXITO \n");
					cout<<"SU SALDO AHORA ES DE: "<<usuario[u][2];
					system("pause()");
					system("cls");
				}
				break;
				case 2:
				{
					do
					{
					do
					{
						cout<<"CANTIDAD DE DINERO A DEPOSITAR: ";
						cin>>opcion;
					}
					while(Numero(opcion)==false);
					cant=stoi(opcion);
					if(cant<=0)
						cout<<"ERROR INGRESE UNA CANTIDAD VALID";
					}
					while(cant<=0);
					temp=stod(usuario[u][2]);
					temp=temp+cant;
					usuario[u][2]=to_string(temp);
					cout<<"SU SALDO AHORA ES DE: "<<usuario[u][2];
					mov[u]=mov[u]+1;
					movimientos[u][mov[u]].append(" DEPOSITO DE ");
					string temp2=to_string(cant);
					movimientos[u][mov[u]].append(temp2);
					movimientos[u][mov[u]].append("\n");
					system("PAUSE()");
					system("CLS");
				}
				break;
				case 3:
				{
					cout<<"SU SALDO ES DE: "<<usuario[u][2];
					mov[u]=mov[u]+1;
					movimientos[u][mov[u]].append(" CONSULTAR SALDO ");
					system("PAUSE()");
					system("CLS");	
				}
				break;
				case 4: 
				{
					int temp,temp2;
					cout<<"ingrese su NIP: ";
					cin>>NIP0;
					if(usuario[u][1]==NIP0)
					{
						cout<<"ingrese su nuevo NIP: ";
						cin>>usuario[u][1];
						
						cout<<"usted a cambiado su NIP ";
						mov[u]=mov[u]+1;
						movimientos[u][mov[u]].append("SU NIP HA SIDO CAMBIADO CON EXITO");
						system("PAUSE()");
					}
					else
					{
						cout<<"NIP INCORRECTO, INTENTE DE NUEVO";
						mov[u]=mov[u]+1;
						movimientos[u][mov[u]].append("ERROR NO SE HA PODIDO CAMBIAR EL NIP CON EXITO");
						system("PAUSE()");
					}
					system("CLS");
				}
				break;
				case 5:
				{
					int x;
					double temp2=0;
					do
					{
						cout<<"A QUE CUENTA(USARIO) DESEA TRANSFERIR: ";
						cin>>opcion;
					}
					while(Numero(opcion)==false);
					x=stoi(opcion);
					do
					{
					cout<<"CUAL ES LA CANTIDAD A TRANSFERIR: ";
					cin>>opcion;
					}
					while(Numero(opcion)==false);
					cant=stoi(opcion);
					temp=stod(usuario[u][2]);
					if (x==u) 
					{
						if(cant>temp)
						{	
							cout<<"NO SE HA PODIDO TRANFERIR A ESTE USAURIO \n";
							mov[u]=mov[u]+1;
							movimientos[u][mov[u]].append("ERROR AL TRANSFERIR AL USARIO QUE ESPECIFICO");
						}
						else
						{
							cout<<"NO SE HA PODIDO TRANFERIR A ESTE USAURIO  \n";
							mov[u]=mov[u]+1;
							movimientos[u][mov[u]].append("ERROR AL TRANSFERIR AL USARIO QUE ESPECIFICO");
						}
					}	
					if (x!=u)
					{
						if (cant<=temp)
						{	
							temp2=stod(usuario[x][2]);
							temp=temp-cant;
							temp2=temp2+cant;
							usuario[x][2]=to_string(temp2);
							usuario[u][2]=to_string(temp);
							mov[u]=mov[u]+1;
							movimientos[u][mov[u]].append("transferencia enviada exitosamente ");
							mov[x]=mov[x]+1;
							movimientos[x][mov[x]].append("transferencia recibida exitosamente ");
						}
						else
						{
							cout<<"lo siento, no es posible transferir a ese usuario, intente luego \n";
							mov[u]=mov[u]+1;
							movimientos[u][mov[u]].append("intento de transferencia fallido");
						}
					}
					system("PAUSE()");
					system("CLS");
				}
				break;
				case 6:
				{
					cout<<"ESTOS SON LOS ULTIMOS 4 MOVIMIENTOS: \n \n";
					int mov2=mov[u]-4;
					int i=0;
					for (i=mov[u];i>=mov2;i--)//el valor es 5 al inicio
					{
					cout<<i<<"\n"<<movimientos[u][i]<<"\n";
					}
				system("PAUSE()");
				system("CLS");
				}
				break;
				case 7:
				{
					cout<<"bye \n ";
				system("PAUSE()");
				system("CLS");
				}
				break;
				default:
				{
				cout<<"INGRESE UNA OPCION VALIDA \n";
				system("PAUSE()");
				}
			}
		}
		while(opc!=7);
	
		}
		else
		{
		cout<<"\n NIP INCORRECTO \n";
		}		
		}
		
		}
	while(u<=1);	
	
	EscribirUsuario(usuario);
	escribirMov(mov);
	EscribirMovimiento(movimientos);
	return 0;
}

