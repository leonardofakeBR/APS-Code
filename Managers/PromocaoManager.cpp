#include "PromocaoManager.hpp"

Promocao* PromocaoManager::criar() {
	Promocao* pont = new Promocao;
	return pont;
	
}

void PromocaoManager::lancarPromoao(Produto* prod, std::string dataInicio, std::stringdataFim, double precoDesconto) {
	PromocaoDao* dao = daoManager.peguePromocaoDao();
	dao
	
}
