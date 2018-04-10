#ifndef SOBRECARGA_HPP
#define SOBRECARGA_HPP

class Banco{
    private:
            int saldo;
    public:
            Banco();
            Banco (int x);
            int getSaldo();
            void setSaldo(int a);
            Banco operator+(Banco &bank);
            Banco operator-(Banco &bank);
            //friend istream& operator >> (istream &i, Banco &bank);
            //friend ostream operator<<(ostream& o, Banco &bank);
};

Banco::Banco(){
    saldo = 0;
}
Banco::Banco(int x){
   saldo = x;
}

void Banco::setSaldo (int a){
    saldo = a;
}

int Banco::getSaldo (){
    return saldo;
}

Banco Banco::operator+ (Banco &bank){
    int saldo = this->saldo + bank.getSaldo();
    return Banco(saldo);
}

Banco Banco::operator- (Banco &bank){
    int saldo = this->saldo - bank.getSaldo();
    return Banco(saldo);
}
/*
istream& operator>> (istream &i, Banco &bank){
    i >> bank.saldo;
    return i;
}
*/

/*ostream operator <<(ostream& o, Banco &bank){
    o << "O saldo é " << bank.getSaldo();
    return o;
}*/

#endif
