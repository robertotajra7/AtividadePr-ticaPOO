#ifndef USUARIO_HPP
#define USUARIO_HPP

#include "Item.hpp"
#include <vector>


class Usuario {
private:
    std::vector<Item*> Itens;

public:
    Usuario();
    ~Usuario();

    void adicionarItem(Item* item);
    void listarItens() const;
};

#endif