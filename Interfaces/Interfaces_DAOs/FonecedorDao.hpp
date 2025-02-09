#include <iostream>
#include <string>
using namespace std;

class Cliente;

class FornecedorDao {
    private:
        Cliente* cliente;
    public:
    virtual Cliente* recuperar(string CPF_Cliente);
};