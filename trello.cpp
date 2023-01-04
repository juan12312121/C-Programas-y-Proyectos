#include <iostream>
#include <cstring>
#include <iterator>
#include <fstream>


std::string datos[100];
int cont{};
int adds{};

std::string aMayuscula(std::string cadena) {
    for (int i = 0; i < cadena.length(); i++){
        cadena[i] = toupper(cadena[i]);
    }
    return cadena;
}

int leerTXT(){
    cont = 0;
    std::string archivo = "lista.txt";
    std::ifstream leerArc(archivo.c_str());
    std::string linea;
    
    while (std::getline(leerArc, linea)) {
        cont += 1;
        datos[cont] = linea;
    }
    leerArc.close();
    adds = cont;
    return 0;
}

int escribirTXT(){
    std::string archivo = "lista.txt";
    std::ofstream escArchivo;
    escArchivo.open(archivo.c_str(), std::fstream::out);
    escArchivo.end;
    for (int i = 1; i <= adds; i++){
        escArchivo << datos[i] << std::endl;
    }
    escArchivo.close();
    return 0;
}

int buscar(int pos, int lenght, std::string busqueda){
    std::cout << "-----------------------------------------------------------------------\n";  
    int c{};
    if (adds >= 1){
        for (int i = 1; i <= adds; i++){
            if (datos[i].substr(pos, lenght) == busqueda){
                c += 1;
                std::cout << "Tarea " + std::to_string(c) + "\n";
                std::cout << "Fecha: " << datos[i].substr(6, 2) << "/" << datos[i].substr(4, 2)
                << "/" << datos[i].substr(0, 4) << "\n";
                std::cout << "Prioridad: " << datos[i].substr(9, 1) << "\n";
                std::cout << "Tarea: " << datos[i].substr(11, datos[i].length() - 9) << "\n";
                std::cout << "----------------------------------------------------------------------- \n";  
            }
        }
        if (c == 0){
            std::cout << "No hay tareas \n";
            std::cout << "----------------------------------------------------------------------- \n";  
        }
    } else {
        std::cout << "No hay tareas \n";
        std::cout << "----------------------------------------------------------------------- \n";  
    }
    return 0;
}

int getNumber(int mayor, int menor){
    while(true){
        int numero{};
        std::cin >> numero;
        if (std::cin.fail() || (numero > mayor || numero < menor)){
            std::cin.clear();
            std::cin.ignore(32767, '\n');
            std::cout << "El numero no es valido. Intente de nuevo \n";
        } else {
            std::cin.ignore(32767, '\n');
            return numero;
        }
    }
}

int getFecha(){
    std::cout << "Dia: ";
    int dia{getNumber(31, 1)};
    std::cout << "Mes: ";
    int mes{getNumber(12, 1)};
    std::cout << "A" << char(164) << "o: ";
    int year{getNumber(2122, 2023)};
    int fecha{};
    fecha = (year * 10000) + (mes * 100) + dia;
    return fecha;
}

int addTarea(){
    adds = cont;
    std::string asunto{};
    std::cout << "Asunto: ";
    std::getline(std::cin, asunto);
    std::string descrip{};
    std::cout << "Descripcion: ";
    std::getline(std::cin, descrip);
    std::cout << "Prioridad (1,2,3): ";
    int prior{getNumber(3, 1)};
    std::cout << "Inserte la fecha: \n";
    int fecha{getFecha()};
    adds += 1;
    datos[adds] = std::to_string(fecha) + "," + std::to_string(prior) + "," + asunto + " - " + descrip;
    return 0;
}

void Login(){
	
	system("color 0b");
std::string nombre;

std::string contra;

std::cout << "Escriba su usuario";

std::cin >> nombre;
getline(std::cin, nombre);
std::cout << "Escriba su contraseña";

std::cin >> contra;	
	
}

void usuarios(){
	
}

int main(){
	
	Login();
    leerTXT();
    std::string seguir{};
    do{
system("cls");
system("color 0d");
        std::cout << "Lista de tareas \n";
        std::cout << "1 - A" << char(164) << "adir tarea                      2 - Buscar tareas por fecha \n";
        std::cout << "3 - Buscar tareas por prioridad       4 - Salir \n";
        int opcion{getNumber( 4, 1)};
        int prior{};
        int fecha{};
        switch (opcion){
            case 1: 
                addTarea();
                break;
            case 2:
                std::cout << "Fecha por la que desea buscar: \n";
                fecha = getFecha();
                buscar(0, 8, std::to_string(fecha));
                break;
            case 3:
                std::cout << "Prioridad por la que desea buscar (1,2,3)";
                prior = getNumber(3, 1);
                buscar(9, 1, std::to_string(prior));
                break;
            case 4:
                std::cout << "i'll be back \n";
        }
        if (opcion >= 1 and opcion <= 4){
            std::cout << "Desea salir? (SI/NO): ";
            std::cin >> seguir;
            seguir = aMayuscula(seguir);
        }
    } while(seguir == "NO");
    escribirTXT();
    
    return 0;
}