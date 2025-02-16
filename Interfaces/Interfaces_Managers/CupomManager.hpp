#include <iostream>
#include <string>
using namespace std;

#include <DaoManager.hpp>

class cupom;

class CupomManager {
    private:
        DaoManager daoManager;
    public:
        cupom* inserirCupom(string codigo);
};