#include <string>

class Cliente {

private:
	int CPF_Cliente;
	std::string Nome;
	std::string Email;
	std::string Endereco;
	
public:
	int pegueCPF_Cliente();
	
	void definaCPF_Cliente(int);
	
	std::string pegueNome();
	
	void definaNome(std::string);
	
	std::string pegueEmail();
	
	void definaEmail(std::string);
	
	std::string pegueEndereco();
	
	void definaEndereco(std::string);
	
};
