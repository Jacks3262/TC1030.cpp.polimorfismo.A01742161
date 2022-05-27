#include "Polygon.hpp"

Polygon::Polygon() {
   nlados=0;
   lado=0;
   apotema=0;
}

Polygon::Polygon(double nlados, double lado, double apotema) 
{
    this->nlados=nlados;
    this->lado=lado;
    this->apotema=apotema;
}

std::string Polygon::draw() 
{
    return "soy un poligono";
}