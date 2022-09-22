/// @file Music_freq.cpp
/// @brief this is a program to investigate the frequencies of musical notes and their  mathematical relation.
/// @author Rohm Tandon on 21/09/22.


#include <iostream>
#include <math.h>
using namespace std;
int main() {

  double m_freq= 16.35;
  double dTwelfthRootOfTwo = 1.059463094359;
  long sp_sound= 34500;

  long Pow_0 = pow(2,0);
  long Pow_3 = pow(2,3);
  long Pow_4 = pow(2,4);
  long Pow_7 = pow(2,7);
  long Pow_8 = pow(2,8);

  double Fkv_1 = m_freq* Pow_0 * pow(dTwelfthRootOfTwo,0);
  double Fkv_2 = m_freq* Pow_0 * pow(dTwelfthRootOfTwo,1);
  double Fkv_3 = m_freq* Pow_0 * pow(dTwelfthRootOfTwo,2);
  double Fkv_4 = m_freq* Pow_4 * pow(dTwelfthRootOfTwo,0);
  double Fkv_5 = m_freq* Pow_7 * pow(dTwelfthRootOfTwo,3);
  double Fkv_6 = m_freq* Pow_8 * pow(dTwelfthRootOfTwo,0);
  double Fkv_7 = m_freq* Pow_3 * pow(dTwelfthRootOfTwo,2);

  double WaveLn1 = sp_sound/Fkv_1;
  double WaveLn2 = sp_sound/Fkv_2;
  double WaveLn3 = sp_sound/Fkv_3;
  double WaveLn4 = sp_sound/Fkv_4;
  double WaveLn5 = sp_sound/Fkv_5;
  double WaveLn6 = sp_sound/Fkv_6;
  double WaveLn7 = sp_sound/Fkv_7;


  //displaying each of the frequency's, octave number, half tone offset, and wavelength
  cout << "Reference Frequency: " << m_freq<< " Hz" << endl;
  cout << "Speed of Sound 345m/s" << endl;
  cout << "Note: C0; nu: 0; k: 0; frequency: " << Fkv_1 << " Hz; wavelength: " << WaveLn1 << " cm" << endl;
  cout << "Note: C#0; nu: 0; k: 1; frequency: " << Fkv_2 << " Hz; wavelength: " << WaveLn2 << " cm" << endl;
  cout << "Note: D0; nu: 0; k: 2; frequency: " << Fkv_3 << " Hz; wavelength: " << WaveLn3 << " cm" << endl;
  cout << "Note: C4; nu: 4; k: 0; frequency: " << Fkv_4 << " Hz; wavelength: " << WaveLn4 << " cm" << endl;
  cout << "Note: D#7; nu: 7; k: 3; frequency: " << Fkv_5 << " Hz; wavelength: " << WaveLn5 << " cm" << endl;
  cout << "Note: C8; nu: 8; k: 0; frequency: " << Fkv_6 << " Hz; wavelength: " << WaveLn6 << " cm" << endl;
  cout << "Note: D3; nu: 3; k: 2; frequency: " << Fkv_7 << " Hz; wavelength: " << WaveLn7 << " cm" << endl;


}
