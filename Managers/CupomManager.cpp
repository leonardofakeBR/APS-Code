#include <iostream>
#include <string>
using namespace std;

#include <CupomManager.hpp>

cupom* CupomManager::inserirCupom(string codigo){
    CupomDao* dao = daoManager.pegueCupomDao();
    cupom* cupom = dao->recuperar(codigo);
    return cupom;
}