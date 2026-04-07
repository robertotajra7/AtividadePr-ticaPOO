#include "Usuário.hpp"
#include <iostream>

Usuario::Usuario() {}

Usuario::~Usuario() {
    for (Item* item : Itens) {
        delete item;
    }
}

void Usuario::adicionarItem(Item* item) {
    Itens.push_back(item);
}

void Usuario::listarItens() const {
    std::cout << "Itens do usuario: " << std::endl;
    for (const Item* item : Itens) {
        item->exibirInfo();
    }
}