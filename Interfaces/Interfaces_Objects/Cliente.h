#include <string>

class Cliente {

private:
	std::string CPF;
	std::string nome;
	std::string email;
	std::string endereco;
	
public:
	std::string pegueCPF();
	
	void definaCPF(std::string cpfCliente);
	
	std::string pegueNome();
	
	void definaNome(std::string nomeCliente);
	
	std::string pegueEmail();
	
	void definaEmail(std::string emailCliente);
	
	std::string pegueEndereco();
	
	void definaEndereco(std::string enderecoCliente);
	
};
