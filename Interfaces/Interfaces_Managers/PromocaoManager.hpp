#include "DaoManager.hpp"
#include "Promocao.hpp"

class PromocaoManager {
private:
	DaoManager daoManager;
	
public:
	Promocao* criar();
	
};
