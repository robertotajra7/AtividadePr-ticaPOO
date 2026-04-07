#include "Item.hpp"

Item::Item(const string titulo, int ano) : _titulo(titulo), _ano(ano) {}

Item::~Item() {}

std::string Item::getTitulo() const {
    return _titulo;
}

int Item::getAno() const {
    return _ano;
}

void Item::exibirInfo() const {
    std::cout << "Título: " << _titulo << std::endl;
    std::cout << "Ano: " << _ano << std::endl;
}