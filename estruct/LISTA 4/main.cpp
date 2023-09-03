#include <iostream>

#include "Array.h"
#include "Matriz2D.h"

using namespace std;

int main() {
    // Cria objeto Array e matriz de inteiros
    Array<int> intArray(5);
    Matrix2D<int> matriz(2, 2);

    //variavel temporaria
    int temp;

    //constante
    int K;

    // Define alguns elementos no Array
    std::cout << "Digite o primeiro valor do array: ";
    std::cin >> temp;
    intArray.setElemento(0, temp);

    std::cout << "Digite o segundo valor do array: ";
    std::cin >> temp;
    intArray.setElemento(1, temp);

    std::cout << "Digite o terceiro valor do array: ";
    std::cin >> temp;
    intArray.setElemento(2, temp);

    std::cout << "Digite o quarto valor do array: ";
    std::cin >> temp;
    intArray.setElemento(3, temp);

    std::cout << "Digite o quinto valor do array: ";
    std::cin >> temp;
    intArray.setElemento(4, temp);

    std::cout << "Digite o valor da constante K: ";
    std::cin >> K;

    std::cout << '\n' << "TESTES COM A CLASSE ARRAY";

    // chamada de métodos
    std::cout << '\n' << "Soma dos elementos: " << intArray.SomaElementos() << std::endl;
    std::cout << "Produto dos elementos: " << intArray.ProdutoElementos() << std::endl;
    intArray.MultiplicarPorConstante(K);

    std::cout << "Elementos apos multiplicacao pela constante:" << std::endl;
    for (unsigned int i = 0; i < intArray.getSize(); ++i) {
        std::cout << intArray.getElemento(i) << " ";
    }
    std::cout << std::endl;

    // Define alguns elementos na matriz
    std::cout << '\n' << "Digite o primeiro valor da linha 1 da matriz: ";
    std::cin >> temp;
    matriz.setElemento(0, 0, temp);

    std::cout << "Digite o segundo valor da linha 1 da matriz: ";
    std::cin >> temp;
    matriz.setElemento(0, 1, temp);

    std::cout << "Digite o primeiro valor da linha 2 da matriz: ";
    std::cin >> temp;
    matriz.setElemento(1, 0, temp);

    std::cout << "Digite o segundo valor da linha 1 da matriz: ";
    std::cin >> temp;
    matriz.setElemento(1, 1, temp);


    std::cout << '\n' << "TESTES COM A CLASSE MATRIZ2D";

    std::cout << '\n' << "Soma dos elementos: " << matriz.SomaElementos() << std::endl;
    std::cout << "Produto dos elementos: " << matriz.ProdutoElementos() << std::endl;
    std::cout << "Matriz e nula: " << matriz.MatrizNula() << std::endl;
    std::cout << "Matriz e diagonal: " << matriz.MatrizDiagonal() << std::endl;
    std::cout << "Matriz e identidade: " << matriz.MatrizIdentidade() << std::endl;
    std::cout << "Matriz e escalar: " << matriz.MatrizEscalar() << std::endl;
    std::cout << "Matriz e simetrica: " << matriz.MatrizSimetrica() << std::endl;
    std::cout << "Matriz e anti-simetrica: " << matriz.MatrizAntiSimetrica() << std::endl;
    std::cout << "Matriz e triangular superior: " << matriz.MatrizTriangularSuperior() << std::endl;
    std::cout << "Matriz e triangular inferior: " << matriz.MatrizTriangularInferior() << std::endl;

    return 0;
}


