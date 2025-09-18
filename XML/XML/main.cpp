#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

#include "dep\inc\xml\rapidxml_print.hpp"
#include "dep\inc\xml\rapidxml.hpp"
#include "dep\inc\xml\rapidxml_utils.hpp"
#include "dep\inc\xml\rapidxml_iterators.hpp" // poner iterators abajo de las librerias 


int main()
{
    rapidxml::xml_document<> doc;
    std::ifstream file("res/files/xml/BookStore.xml");

    if (!file.is_open())
        return 0;

    std::stringstream buffer;

    buffer << file.rdbuf();

    file.close();

    std::string content(buffer.str());

    doc.parse<0>(&content[0]);

    std::cout << "Name: " << doc.first_node()->name() << std::endl;
    std::cout << "Value: " << doc.first_node()->value() << std::endl;
    
    std::cout << "Name: " << doc.first_node()->first_node()->name() << std::endl;


    std::cout << "-------- PRINT ALL THE BOOKS ---------" << std::endl;

    rapidxml::xml_node<>* pRoot = doc.first_node();

    for (rapidxml::xml_node<>* pNode = pRoot->first_node("book");
        pNode; // mientras no sea null el puntero
        pNode = pNode->next_sibling()) {
        std::cout << pNode->name() << ":\n";

        for (rapidxml::xml_node<>* pNodeI = pNode->first_node();
            pNodeI;
            pNodeI = pNodeI->next_sibling()) {
            std::cout << pNodeI->name() << ":" << pNodeI->value() << '\n';

        }
        std::cout << '\n';
    }

    return 0;
}

