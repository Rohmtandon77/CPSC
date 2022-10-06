//
//  main.cpp
//  Programming project pi 2
//
//  Created by Rohm Tandon on 05/10/22.
//

#include <iostream>
#include <cmath>
#include <cfloat>
#include <iomanip>
using namespace std;

int main() {
    double pi = 0.0;
    int n;
    for (n = 2; n <= 1048576; n*=2) {
      for (int k = 0; k <= n; k++) {
        pi +=  (pow(-1.0,k)) / (2.0*k + 1.0);
      }
      pi = 4 * pi;
      cout << std::setprecision(DBL_DIG + 1) << "PI= " << pi << ";" << " n: " << n << endl;
      pi = 0.0;
    }
}
