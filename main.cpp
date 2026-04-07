#include <iostream>
#include "Livro.hpp"
#include "Usuário.hpp"

int main() {
    Livro livroStack("Morro dos Ventos Uivantes", 1847, "Emily Bronte");
    Livro* livroHeap = new Livro("O Hobbit", 1937, "J.R.R. Tolkien");

    Usuario usuario;

    usuario.adicionarItem(new Livro(livroStack));
    usuario.adicionarItem(livroHeap);

    std::cout << "Listando itens com polimorfismo:" << std::endl;
    usuario.listarItens();

    return 0;

}