//
//  main.cpp
//  ElectronicControlUnit
//  Created by Rohm Tandon on 30/11/22.
//

#include <iostream>
#include <iostream>
#include <math.h>
#include <string>
#include <iomanip>
using namespace std;

class EngineControlUnit {
public:
    EngineControlUnit();
    ~EngineControlUnit();
    void handleCommand(char cCommand);
    void Start() ;
    void Buttons() ;

private:
    bool m_bActivatedHydraulicJacks; //Button A
    bool m_bActivatedBeltTires; //Button B
    bool m_bActivatedIRIllumination; //Button E
};

EngineControlUnit :: EngineControlUnit(){
    m_bActivatedHydraulicJacks = false;
    m_bActivatedBeltTires = false;
    m_bActivatedIRIllumination = false;
}

EngineControlUnit :: ~EngineControlUnit(){
    cout << endl;
}

void EngineControlUnit :: handleCommand(char cCommand){
    switch (cCommand){
        case 'A':
        case 'a':
            if (m_bActivatedHydraulicJacks == false){
                m_bActivatedHydraulicJacks = true;
                cout << "Hydraulic Jacks activated" << endl;
                if (m_bActivatedBeltTires == true){
                    m_bActivatedBeltTires = false;
                    cout << "Belt Tires deactivated" << endl;
                }
            }
            else{
                m_bActivatedHydraulicJacks = false;
                cout << "Hydraulic Jacks deactivated" << endl;
            }
            break;
        case 'B':
        case 'b':
            if (m_bActivatedBeltTires == false){
                m_bActivatedBeltTires = true;
                cout << "Belt Tires activated" << endl;
            }
            else{
                m_bActivatedBeltTires = false;
                cout << "Belt Tires deactivated" << endl;
            }
            break;
        case 'E':
        case 'e':
            if (m_bActivatedIRIllumination == false){
                m_bActivatedIRIllumination = true;
                cout << "Infrared Illumination activated" << endl;
            }
            else{
                m_bActivatedIRIllumination = false;
                cout << "Infrared Illumination deactivated" << endl;
            }
            break;
    }
}

void EngineControlUnit :: Start(){
    cout << "Press X to turn off ignition or entering a steering wheel button (A, B or E)" << endl;
}

void EngineControlUnit :: Buttons(){
    cout << setw(9) << "(A)" << endl;
    cout <<setw(14) << "(F)  (G)  (B)" << endl;
    cout <<setw(14) << "(E)       (C)" << endl;
    cout << setw(9) << "(D)" << endl;
}

int main(){
    EngineControlUnit Engine;
    char command;
    Engine.Start();
    Engine.Buttons();
    cin >> command;
    while (true){
        if (command == 'x' || command == 'X')
            break;
        else {
            Engine.handleCommand(command);
            Engine.Buttons();
            cin >> command;
        }
    }
    return 0;
}
