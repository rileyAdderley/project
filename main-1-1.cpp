#include <iostream>
#include "Portfolio.h"
#include <vector>
using namespace std;
int main() {
Portfolio p1;

 for (int i = 0; i <= 20; i++) {
        p1.getPrices();
 }
for (int i = 0; i <= 20; i++) {
        p1.getStocknames();
 }

}