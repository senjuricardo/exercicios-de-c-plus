// Funcionarios salarios com cargo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, ("portuguese"));
    double salario;
    int cargo;
    std::cout << "Digite o seu salario!\n";
    cin >> salario;
    std::cout << "Digite o seu cargo!\n";
    cin >> cargo;


    double novoS;

    switch (cargo) {
    case 101:
        novoS = salario * 1.25;
        cout << " Com o cargo de Gerente, o valor antigo era de " << salario << " e o novo é de  " << novoS << " com a diferença de " << novoS - salario;
        break;
    case 102:
        novoS = salario * 1.20;
        cout << "Com o cargo de Engenheiro o valor antigo era de " << salario << " e o novo é de  " << novoS << " com a diferença de " << novoS - salario;
        break;
    case 103:
        novoS = salario * 1.15;
        cout << " Com o carg de Tecnico o valor antigo era de " << salario << " e o novo é de  " << novoS << " com a diferença de " << novoS - salario;
        break;
    default:
        novoS = salario * 1.10;
        cout << " Sem nenhum cargo de relevo, o valor antigo era de " << salario << " e o novo é de  " << novoS << " com a diferença de " << novoS - salario;
    }

}