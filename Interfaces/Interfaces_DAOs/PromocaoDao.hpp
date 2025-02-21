#include "Promocao.hpp"

class PromocaoDao {
private:
	Promocao* promocao;
	
public:
	Promocao* peguePromocao();
	void definaPromocao(Promocao*);
	
	bool validarCupom();
	
};
