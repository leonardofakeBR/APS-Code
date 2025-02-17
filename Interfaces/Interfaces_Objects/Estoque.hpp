#include <iostream>
#include <string>
using namespace std;

class Estoque {
    private:
        int capacidade;
        string endereco;   
    public:
        Estoque(int capacidade, string endereco);

        int pegueCapacidade();
        void definaCapacidade(int capacidade);

        string pegueEndereco();
        void definaEndereco(string endereco);

        void imprime();     

};