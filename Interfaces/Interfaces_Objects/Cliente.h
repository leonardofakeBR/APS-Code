#include <string>

class Cliente {

private:
	std::string CPF;
	std::string nome;
	std::string email;
	std::string endereco;
	
public:
	std::string pegueCPF();
	
	void setCPF(std::string cpfCliente);
	
	std::string pegueNome();
	
	void setNome(std::string nomeCliente);
	
	std::string pegueEmail();
	
	void setEmail(std::string emailCliente);
	
	std::string pegueEndereco();
	
	void setEndereco(std::string enderecoCliente);
	
};
