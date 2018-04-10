#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include "Banco.hpp"

int main (){
    Banco conta_1;
    Banco conta_2(20);
    int x;

    cout << "Conta 1: Saldo " << conta_1.getSaldo() << endl;
    cout << "Conta 2: Saldo " << conta_2.getSaldo() << endl;


    cout << "Digite o seu saldo" << endl;
    cin >> x;

    conta_1.setSaldo(x);

    cout << "Conta 1: Saldo " << conta_1.getSaldo() << endl;
    cout << "Conta 2: Saldo " << conta_2.getSaldo() << endl;

    Banco conta_3 (conta_1 + conta_2);
    Banco conta_4 (conta_1 - conta_2);

    cout << "Conta 3: Saldo " << conta_3.getSaldo() << endl;
    cout << "Conta 4: Saldo " << conta_4.getSaldo() << endl;

    return 0;
}
