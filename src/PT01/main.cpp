#include <iostream>
#include "matrix.hpp"
using namespace std;

int main()
{
    Matrix Y(3, 2, 5.0);
    Matrix X(4, 1, 5.0);
    
    std::cout << "Y:: " << std::endl;
    Y.print();
    std::cout << "Numero de linhas de Y:: " << Y.getRows();
    std::cout << "Numero de colunas de Y:: " << Y.getCols();
   
    std::cout << "Z é transposta de Y:: " << std::endl;
    Matrix Z = Y.transpose();
    Z.print();
    std::cout << "Numero de linhas de Z:: " << Z.getRows();
    std::cout << "Numero de colunas de Z:: " << Z.getCols();
    
    std::cout << std::endl << "X:: " << std::endl;
    X.print();
    
    std::cout << "Numero de linhas de X:: " << X.getRows();
    std::cout << "Numero de colunas de X:: " << X.getCols();
   
    return 0;
}