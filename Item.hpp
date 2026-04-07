#ifndef ITEM_HPP
#define ITEM_HPP

#include <iostream>
#include <string>
using namespace std;

class Item {
protected:
    string _titulo;
    int _ano;
    
public:
    Item(const string titulo, int ano);
    virtual ~Item();
    
    string getTitulo() const;
    int getAno() const;

    virtual void exibirInfo() const;
};

#endif