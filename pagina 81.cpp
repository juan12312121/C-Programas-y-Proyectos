#include <fstream>
#include <iostream>

int main()
{
    std::ifstream inf{"Sample.dat"};
    if (!inf)
    {
        std::cerr << "uh oh, Sample.dat no se puede abrir en modo escritura!" << '\n';
        return 1;
    }

    std::string strData;
    inf.seekg(5);
    getline(inf, strData);
    std::cout << strData << '\n';

    inf.seekg(8, std::ios::cur);
    std::getline(inf, strData);
    std::cout << strData << '\n';

    inf.seekg(-15, std::ios::end);
    std::getline(inf,strData);
    std::cout << strData << '\n';
    

    

    return 0;
}