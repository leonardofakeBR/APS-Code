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
        void setCapacidade(int capacidade);

        string pegueEndereco();
        void setEndereco(string endereco);

        void imprime();     

};