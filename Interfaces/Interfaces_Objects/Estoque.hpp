#include <iostream>
#include <string>
using namespace std;

class Estoque {
    private:
        int capacidade;
        string Localizacao;  
        
    public:
        Estoque(int capacidade, string Localizacao);

        int pegueCapacidade();
        void definaCapacidade(int capacidade);
        
        string pegueLocalizacao();
        void definaLocalizacao(string Localizacao);
        
};
