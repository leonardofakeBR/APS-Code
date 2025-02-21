#include "DaoManager.hpp"
#include "Promocao.hpp"
#include "PromocaoDao.hpp"
#include <string>

class PromocaoManager {
private:
	DaoManager daoManager;
	
public:
	Promocao* criar();
	void lancarPromoao(Produto*, std::string, std::string, double);
	
};
