#include <string>
#include "Carrinho.hpp"

class Cliente {

private:
	int Id;
	std::string CPF;
	std::string Nome;
	std::string Email;
	std::string Endereco;
	Carrinho* carrinho;
	
	
public:
	int pegueId();
	void definaId(int);
	
	std::string pegueCPF();
	void definaCPF(std::string);
	
	std::string pegueNome();
	void definaNome(std::string);
	
	std::string pegueEmail();
	void definaEmail(std::string);
	
	std::string pegueEndereco();
	void definaEndereco(std::string);
	
	Carrinho* pegueCarrinho();
	void definaCarrinho(Carrinho*);
	
};
