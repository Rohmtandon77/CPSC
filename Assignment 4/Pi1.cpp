//
//  Pi.cpp
//  Programming Project Pi
//
//  Program that uses a single for loop implementing a truncated Leibnitz formula to approximate the value of pi using an upper bound for k entered by the user.
//

#include <iostream>
#include <cmath>
#include <cfloat>
#include <iomanip>
using namespace std;

int main(){
  double pi = 0.0;
  int n;
  cout << "Enter an integer for the upper bound for K in the Leibnitz formula to compute pi: ";
  cin >> n;
  for (int k = 0; k <=n; k++){
    pi += (pow(-1.0,k)) / (2.0 * k + 1.0);
  }
  pi=4*pi;
  std::cout << std::setprecision(DBL_DIG) <<"Pi = " << pi << " approx ; n: " << std::setw(7) << n << std::endl;
}
