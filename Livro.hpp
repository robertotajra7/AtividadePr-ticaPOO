#ifndef LIVRO_HPP
#define LIVRO_HPP

#include "Item.hpp"
#include <string>

class Livro : public Item {
private:
    string _autor;

public:
    Livro(const string titulo, int ano, const string autor);

    std::string getAutor() const;
    void exibirInfo() const override;
};

#endif