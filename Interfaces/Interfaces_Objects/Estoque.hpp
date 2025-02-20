#include <iostream>
#include <string>
using namespace std;

class Estoque {
    private:
        int Capacidade;
        string Endereco;   
    public:
        int pegueCapacidade();
        void definaCapacidade(int);

        string pegueEndereco();
        void definaEndereco(string);     

};
