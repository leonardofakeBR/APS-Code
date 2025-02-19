#include <iostream>
#include <string>
using namespace std;

class Pedido;

class NotaFiscal {
    private:
        int id;
        int numero;
        string Data_Emissao;
        Pedido* pedido;
    public:
        NotaFiscal(int id, int numero, string data_Emissao, Pedido* pedido);

        int pegueId();

        void definaId(int id);

        int pegueNumero();

        void definaNumero(int numero);

        string pegueData_Emissao();

        void definaData_Emissao(string dataEmissao);

        Pedido* peguePedido();

        void definaPedido(Pedido* pedido);
    };