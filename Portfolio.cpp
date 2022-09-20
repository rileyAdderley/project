#include "Portfolio.h"
#include <vector>
#include <iostream>

using namespace std;

Portfolio::Portfolio() {
  this->stocknames = " ";
  this->prices = 0;
}
vector<int> Portfolio::setPortfolio(std::string stocks, int prices) { this->stocknames = stocks; this->prices = prices;}

int Portfolio::getPrices() { return this->prices; }
string Portfolio::getStocknames() {return this->stocknames;}
}
