#include <iostream>
#include <string>
#include "Cliente.hpp"
#include "ClienteManager.hpp"
using namespace std;

#include <PedidoManager.hpp>

void PedidoManager::AtualizarStatus(int id_pedido){
    PedidoDao* dao = daoManager.peguePedidoDao();
    dao->confirmarPedido(id_pedido);
}

NotaFiscal* PedidoManager::solicitarNotaFiscal(int id_pedido){
    PedidoDao* dao = daoManager.peguePedidoDao();
    return dao->pegueNotaFiscal(id_pedido);
}

void PedidoManager::enviarConfirmacaoPedidoEmail(int id_pedido) {
	PedidoDao* dao = daoManager.peguePedidoDao();
	Cliente* cliente = pegueCliente(id_pedido); // retorna os valores depois de uma busca no banco de dados pelo cliente com este id
	ClienteManager* clienteManager;
	clienteManager.enviarEmail(cliente);
}

void PedidoManager::atualizarStatusPedido(int id_pedido) {
	PedidoDao* dao = daoManager.peguePedidoDao();
	dao.confirmarPedido(id_pedido);
	this.exibirConfirmacao();
}

void exibirConfirmacao() {
	std::cout << "Seu pedido foi confirmado com sucesso!";
}
