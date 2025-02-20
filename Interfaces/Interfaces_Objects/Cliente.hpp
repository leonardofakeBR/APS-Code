#include <string>
#include "Carrinho.hpp"

class Carrinho;

class Cliente {

private:
	int Id;
	std::string CPF;
	std::string Nome;
	std::string Email;
	std::string Endereco;
	Carrinho* carrinho;
	
public:
	Cliente(int CPF_Cliente, std::string Nome, std::string Email, std::string Endereco, Carrinho* carrinho);

	int pegueCPF_Cliente();
	
	void definaCPF_Cliente(int);
	
	std::string pegueNome();
	
	void definaNome(std::string);
	
	std::string pegueEmail();
	
	void definaEmail(std::string);
	
	std::string pegueEndereco();
	
	void definaEndereco(std::string);

	Carrinho* pegueCarrinho();

	void definaCarrinho(Carrinho* carrinho);
	
};
