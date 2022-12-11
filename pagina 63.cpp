#include <fstream>
#include <iostream>
#include <string.h>

int main()
{
    std::ifstream inf{"Sample.dat"};
    if (!inf)
    {
        std::cerr << "uh oh, Sample.dat no se puede abrir en modo escritura!" << std::endl;
        return 1;
    }

    while (inf)
    {
        std::string strInput;
        inf >> strInput;
        std::cout<< strInput << '\n';
    }
 return 0;   
}