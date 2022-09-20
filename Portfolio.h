#ifndef PORTFOLIO_H
#define PORTFOLIO_H
#include <string>
#include <vector>
using namespace std;
#include <iostream>
class Portfolio {
  std::string stocknames;
  int prices;

 public:
  Portfolio();
  vector<int> setPortfolio(std::string stocks, int prices); 
  int getPrices();
  std::string getStocknames();
};
#endif
