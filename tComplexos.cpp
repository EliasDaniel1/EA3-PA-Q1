#include "tComplexos.h"
#include <math.h>

tComplexos::tComplexos(float real1, float imaginario1, float real2, float imaginario2 )
{
 a = real1;
 b = imaginario1;
 c = real2;
 d = imaginario2;
}

float tComplexos::soma_real(void)
{
 float soma_real = a + c;
 return soma_real;
}

float tComplexos::soma_imaginario(void)
{
  float soma_imaginario = b + d;
  return soma_imaginario;
}

float tComplexos::subtracao_real(void)
{
  float subtracao_real = a - c;
  return subtracao_real;
}

float tComplexos::subtracao_imaginario(void)
{
  float subtracao_imaginario = b - d;
  return subtracao_imaginario;
}

float tComplexos::multiplicacao_real(void)
{
  float multiplicacao_real = (a * c) -  (b * d); 
  return multiplicacao_real;
}

float tComplexos::multiplicacao_imaginario(void)
{
  float multiplicacao_imaginario = (a * d) + (c * b);
  return multiplicacao_imaginario;
}

int tComplexos::divisao_real(void)
{
  int divisao_real = ((a * c)+(b * d))/((c * c) + (d * d));
  return divisao_real;
}

int tComplexos::divisao_imaginario(void)
{
  int divisao_imaginario = ((c * b)-(a * d))/((c * c)+(d * d));
  return divisao_imaginario;
}

int tComplexos::moduloz1(void)
{
  int moduloz1 = sqrt((a * a) + (b * b));
  return moduloz1;
}

int tComplexos::moduloz2(void)
{
  int moduloz2 = sqrt((c * c) + (d * d));
  return moduloz2;
}