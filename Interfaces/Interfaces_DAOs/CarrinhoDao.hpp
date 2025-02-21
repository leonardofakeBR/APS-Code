#include <iostream>
#include <string>
using namespace std;

#include <Cliente.hpp>
#include <Item_Carrinho.hpp>
#include <Carrinho.hpp>

class DaoManager;

class CarrinhoDao {
    private:
        DaoManager *dao;
        Item_Carrinho* item_Carrinho[10];
        Carrinho* carrinho[10];

    public:
        CarrinhoDao(){
            Cliente* cliente[10] = {
                new Cliente(11111111111, "João", "João@gmail.com", "Rua do João, 123", nullptr),
                new Cliente(22222222222, "Maria", "Maria@gmail.com", "Rua da Maria, 456", nullptr),
                new Cliente(33333333333, "Carlos", "Carlos@gmail.com", "Avenida Central, 789", nullptr),
                new Cliente(44444444444, "Ana", "Ana@gmail.com", "Rua das Flores, 321", nullptr),
                new Cliente(55555555555, "Pedro", "Pedro@gmail.com", "Rua do Mercado, 654", nullptr),
                new Cliente(66666666666, "Mariana", "Mariana@gmail.com", "Rua do Bosque, 987", nullptr),
                new Cliente(77777777777, "Fernando", "Fernando@gmail.com", "Rua do Lago, 741", nullptr),
                new Cliente(88888888888, "Larissa", "Larissa@gmail.com", "Rua das Palmeiras, 852", nullptr),
                new Cliente(99999999999, "Roberto", "Roberto@gmail.com", "Rua da Serra, 963", nullptr),
                new Cliente(10101010101, "Camila", "Camila@gmail.com", "Rua das Montanhas, 159", nullptr)
            };

            carrinho[0] = new Carrinho(1,3500, cliente[0]);
            carrinho[1] = new Carrinho(2,2000, cliente[1]);
            carrinho[2] = new Carrinho(3,4000, cliente[2]);
            carrinho[3] = new Carrinho(4,250, cliente[3]);
            carrinho[4] = new Carrinho(5,150, cliente[4]);
            carrinho[5] = new Carrinho(6,300, cliente[5]);
            carrinho[6] = new Carrinho(7,200, cliente[6]);
            carrinho[7] = new Carrinho(8,1200, cliente[7]);
            carrinho[8] = new Carrinho(9,800, cliente[8]);
            carrinho[9] = new Carrinho(10,1500, cliente[9]);

            cliente[0]->definaCarrinho(carrinho[0]);
            cliente[1]->definaCarrinho(carrinho[1]);
            cliente[2]->definaCarrinho(carrinho[2]);
            cliente[3]->definaCarrinho(carrinho[3]);
            cliente[4]->definaCarrinho(carrinho[4]);
            cliente[5]->definaCarrinho(carrinho[5]);
            cliente[6]->definaCarrinho(carrinho[6]);
            cliente[7]->definaCarrinho(carrinho[7]);
            cliente[8]->definaCarrinho(carrinho[8]);
            cliente[9]->definaCarrinho(carrinho[9]);

            Produto* produtos[10] = {
                new Produto(1, "Notebook Dell", 3500.00, "Eletrônicos"),
                new Produto(2, "Smartphone Samsung", 2000.00, "Eletrônicos"),
                new Produto(3, "Tablet Apple", 4000.00, "Eletrônicos"),
                new Produto(4, "Fone de Ouvido Bluetooth", 250.00, "Acessórios"),
                new Produto(5, "Mochila para Notebook", 150.00, "Acessórios"),
                new Produto(6, "Teclado Mecânico", 300.00, "Periféricos"),
                new Produto(7, "Mouse Gamer", 200.00, "Periféricos"),
                new Produto(8, "Monitor 24 Polegadas", 1200.00, "Monitores"),
                new Produto(9, "Impressora Laser", 800.00, "Impressão"),
                new Produto(10, "Cadeira Gamer", 1500.00, "Móveis")
            };

            item_Carrinho[0] = new Item_Carrinho(1, 1, produtos[0], carrinho[0]);
            item_Carrinho[1] = new Item_Carrinho(2, 1, produtos[1], carrinho[0]);
            item_Carrinho[2] = new Item_Carrinho(3, 1, produtos[2], carrinho[0]);
            item_Carrinho[3] = new Item_Carrinho(4, 1, produtos[3], carrinho[3]);
            item_Carrinho[4] = new Item_Carrinho(5, 1, produtos[4], carrinho[3]);
            item_Carrinho[5] = new Item_Carrinho(6, 1, produtos[5], carrinho[5]);
            item_Carrinho[6] = new Item_Carrinho(7, 1, produtos[6], carrinho[6]);
            item_Carrinho[7] = new Item_Carrinho(8, 1, produtos[7], carrinho[8]);
            item_Carrinho[8] = new Item_Carrinho(9, 1, produtos[8], carrinho[8]);
            item_Carrinho[9] = new Item_Carrinho(10, 1, produtos[9], carrinho[8]);

        };

       virtual Item_Carrinho* listarItem_Carrinho(string CPF_Cliente);
};