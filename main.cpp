#include <iostream>
#include "tComplexos.h"

using namespace std;

int main() {
  cout << "Hello World!" << endl;

  cout << "Calculadora de numeros complexos :)" << endl;

  float a_real = 0;
  float b_imaginario = 0;
  float c_real = 0;
  float d_imaginario = 0;

  cout << "Digite o numero real de z1:";
  cin >> a_real;
  cout << "Digite o numero imaginario de z1:";
  cin >> b_imaginario;
  cout << "Digite o numero real de z2:";
  cin >> c_real;
  cout << "Digite o numero imaginario de z2:";
  cin >> d_imaginario;

  tComplexos *calculadora = new tComplexos(a_real, b_imaginario, c_real, d_imaginario);

  float soma1 = calculadora->soma_real();
  float soma2 = calculadora->soma_imaginario();
  float subtracao1 = calculadora->subtracao_real();
  float subtracao2 = calculadora->subtracao_imaginario();
  float multiplicacao1 = calculadora->multiplicacao_real();
  float multiplicacao2 = calculadora->multiplicacao_imaginario();
  int divisao1 = calculadora->divisao_real();
  int divisao2 = calculadora->divisao_imaginario();
  int modulo1 = calculadora->moduloz1();
  int modulo2 = calculadora->moduloz2();
  
  
  cout << "======================================================" << endl;
  cout << "z1 + z2=" << " " << soma1 << "+" << soma2 << "i" << endl;
  cout << "z1 - z2=" << " " <<subtracao1 << "+" << subtracao2 << "i" << endl;
  cout << "z1 * z2=" << " " << multiplicacao1 << "+" << multiplicacao2 << "i" << endl;
  cout << "z1 / z2=" << " " << divisao1 << "+" << divisao2 << "i" <<endl;
  cout << "|Z1|=" << " " << modulo1 << endl;
  cout << "|Z2|=" << " " << modulo2 << endl;
}

