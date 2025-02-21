#include <string>
#include "Carrinho.hpp"
using namespace std;

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
	Cliente(string CPF_Cliente, std::string Nome, std::string Email, std::string Endereco, Carrinho* carrinho);

	string pegueCPF_Cliente();
	
	void definaCPF_Cliente(string);
	
	std::string pegueNome();
	
	void definaNome(std::string);
	
	std::string pegueEmail();
	
	void definaEmail(std::string);
	
	std::string pegueEndereco();
	
	void definaEndereco(std::string);

	Carrinho* pegueCarrinho();

	void definaCarrinho(Carrinho* carrinho);
	
};
