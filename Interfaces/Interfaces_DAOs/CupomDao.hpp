#include <iostream>
#include <string>
using namespace std;

class Cupom;

class CupomDao {
    private:
        Cupom *cupom;

    public:
        virtual Cupom* criar();
        virtual Cupom* recuperar(string codigo);
        virtual bool update(Cupom cupom);

};