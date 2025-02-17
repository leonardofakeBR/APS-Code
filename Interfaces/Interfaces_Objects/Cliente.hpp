#include <string>

class Cliente {

private:
	int CPF_Cliente;
	std::string Nome;
	std::string Email;
	std::string Endereco;
	
public:
	int getCPF_Cliente();
	
	void setCPF_Cliente(int);
	
	std::string getNome();
	
	void setNome(std::string);
	
	std::string getEmail();
	
	void setEmail(std::string);
	
	std::string getEndereco();
	
	void setEndereco(std::string);
	
};
