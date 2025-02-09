#include <string>

class Cliente {

private:
	std::string CPF;
	std::string nome;
	std::string email;
	std::string endereco;
	
public:
	std::string getCPF();
	
	void setCPF(std::string cpfCliente);
	
	std::string getNome();
	
	void setNome(std::string nomeCliente);
	
	std::string getEmail();
	
	void setEmail(std::string emailCliente);
	
	std::string getEndereco();
	
	void setEndereco(std::string enderecoCliente);
	
};
