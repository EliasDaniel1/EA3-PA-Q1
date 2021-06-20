#ifndef TCOMPLEXOS_H
#define TCOMPLEXOS_H

class tComplexos 
{
  private:
   float a;
   float b;
   float c;
   float d;
  public:
   tComplexos(float real1, float imaginario1, float real2,float imaginario2);
   float soma_real();
   float soma_imaginario();
   float subtracao_real();
   float subtracao_imaginario();
   float multiplicacao_real();
   float multiplicacao_imaginario();
   int divisao_real();
   int divisao_imaginario();
   int moduloz1();
   int moduloz2();
   
};

#endif