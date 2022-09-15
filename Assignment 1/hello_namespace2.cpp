//
/// @file <hello.cpp>
/// @brief <A file to output a single word message>
/// @author <Rohm Tandon>

#include <iostream>
#include <string>
using namespace std;
int main()
{
   string strMessage;
   cout << "Please type a single word message" << endl;
   cin >> strMessage;
   cout << "Message: " << strMessage << endl;
   return 0; 
}
