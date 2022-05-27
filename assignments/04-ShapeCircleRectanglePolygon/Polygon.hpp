#pragma once

#include "Shape.hpp"

class Polygon:public Shape
{
private:
    double nlados;
    double lado;
    double apotema;
public:
    Polygon();
    Polygon(double,double,double);
    std::string draw() override;
};