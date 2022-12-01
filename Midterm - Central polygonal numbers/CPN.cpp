//
//  main.cpp
//  CentralPolygonalNumbers
//  Created by Rohm Tandon on 28/11/22.
//

#include <iostream>
#include <cmath>
#include <fstream>
#include <array>
#include <cstring>
using namespace std;

class CentralPolygonalNumbers{
public:
    CentralPolygonalNumbers();
    CentralPolygonalNumbers(int nMax);
    ~CentralPolygonalNumbers();
    void display();
    bool save(string filename);
    std::ofstream ofsNumbers;
private:
    int m_nMax;
    int* mp_iNumbers;
};

/* Default constructor */
CentralPolygonalNumbers :: CentralPolygonalNumbers(){
    m_nMax = 0;
    mp_iNumbers = new int[m_nMax + 1];
    mp_iNumbers[0] = 1;
}

/* Overloaded constructor */
CentralPolygonalNumbers :: CentralPolygonalNumbers(int maxNum){
    m_nMax = maxNum;
    mp_iNumbers = new int[m_nMax + 1];
    int pieces;
    for (int i=0; i < m_nMax + 1; i++){
        pieces = (pow(i,2) + i + 2)/2;
        mp_iNumbers[i] = pieces;
    }
}

 /* Destructor */
CentralPolygonalNumbers :: ~CentralPolygonalNumbers(){
    delete[] mp_iNumbers;
    std::cout << "~CentralPolygonalNumbers called" << endl;
}

void CentralPolygonalNumbers :: display(){
    for(int i=0; i < m_nMax + 1; i++){
        cout << "n: " << i << ", maximum number of pieces: " << mp_iNumbers[i] << endl;
    }
}

bool CentralPolygonalNumbers :: save(string filename){
    ofsNumbers.open("CentralPolygonalNumbers.txt");
    for (int i=0; i < m_nMax + 1; i++){
        ofsNumbers << mp_iNumbers[i] << endl;
    }
    ofsNumbers.close();
    return true;
}

int main(){
    CentralPolygonalNumbers cpn(10);
    cpn.display();
    cpn.save("CentralPolygonalNumbers.txt");
}


