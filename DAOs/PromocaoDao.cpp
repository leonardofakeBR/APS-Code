#include "PromocaoDao.hpp"

Promocao* PromocaoDao::peguePromocao() {
	return &promocao;
	
}

void PromocaoDao::definaPromocao(Promocao* promo) {
	promocao = promo;
	
}
