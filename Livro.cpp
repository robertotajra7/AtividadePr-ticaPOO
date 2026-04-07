#include "Livro.hpp"

Livro::Livro(const string titulo, int ano, const string autor) : Item(titulo, ano), _autor(autor) {}

std::string Livro::getAutor() const {
    return _autor;
}

void Livro:: exibirInfo() const {
    std::cout << "Livro: " << _titulo << std::endl;
    std::cout << "Autor: " << _autor << std::endl;
    std::cout << "Ano: " << _ano << std::endl;
}
