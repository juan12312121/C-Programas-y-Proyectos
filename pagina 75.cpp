#include <fstream>
#include <iostream>

int main()
{
    std::ofstream outf{"Sample.dat", std::ios::app};
    if (!outf)
    {
        std::cerr << "uh oh, Sample.dat no se puede abrir en modo escritura!" << '\n';
        return 1;
    }

    outf << "This is line 3" << '\n';
    outf << "This is line 4" << '\n';

    return 0;
}