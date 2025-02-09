#include <iostream>
#include <string>
using namespace std;

class Estoque {
    private:
        int capacidade;
        string endereco;   
    public:
        Estoque(int capacidade, string endereco);

        int getCapacidade();
        void setCapacidade(int capacidade);

        string getEndereco();
        void setEndereco(string endereco);

        void imprime();     

};