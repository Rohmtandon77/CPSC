//
//  main.cpp
//  Final Exceptions
//
//  Created by Rohm Tandon on 14/12/22.
//

#include <iostream>
#include <stdexcept>
#include <string>


using namespace std;

unsigned long sigma(unsigned long n){
  unsigned long sum = 0;

  try{
    //checking precondition
    if (n < 1) {
      throw runtime_error("Precondition n>=1 violated; invalid value for argument n: " + std::to_string(n) + " (Loc: " + __FILE__ + ", " + std::to_string(__LINE__) + ")");
    }
    //checking postconditions
    for (int i = 1; i <= n; i++){
      sum += i;
      if (sum != (n*(n+1)/2)){
        throw runtime_error("Postcondition sum == (n(n+1))/2 violated: sum: " + std::to_string(sum) + "; n(n+1)/2: " + std::to_string((n * (n+ 1)) / 2) + " (Loc: " + __FILE__ + ", " + std::to_string(__LINE__) + ")");
      }
    }
  }
    
  catch (std::runtime_error & ex){
    std::cout << "Exception: " << ex.what() << std::endl;
    std::cout << "Cannot compute sum; returning 0" << std::endl;
    sum = 0;
  }
    
  return sum;
}

int main() {
  int sum = sigma(5);
  cout << "sigma(5) = " << sum << endl;
  sum = sigma(0);
  cout << "sigma(0) = " << sum << endl;
  return 0;
}
