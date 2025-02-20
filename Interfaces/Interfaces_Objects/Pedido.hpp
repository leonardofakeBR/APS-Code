#include <string>

class NotaFiscal;

class Pedido {
private:
	int Id_Pedido;
	double Valor_Total;
	bool Status_Pagamento;
	std::string Status_Pedido;
	NotaFiscal* notafiscal;
	
public:
	Pedido(int Id_Pedido, double Valor_Total, bool Status_Pagamento, std::string Status_Pedido, NotaFiscal* notafiscal);

	int pegueId_Pedido();
	
	void definaId_Pedido(int);
	
	double pegueValor_Total();
	
	void definaValor_Total(double);
	
	std::string pegueStatus_Pedido();
	
	void definaStatus_Pedido(std::string);
	
	bool pegueStatus_Pagamento();
	
	void definaStatus_Pagamento(bool);

	NotaFiscal* pegueNotaFiscal();

	void definaNotaFiscal(NotaFiscal*);

};
