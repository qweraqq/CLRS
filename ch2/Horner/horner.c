#include "horner.h"
#include <math.h>

float horner_polynomial(float x,float* a)
{
  float result = 0;
  int i = 0;
  for(i=MAX_A_NUMBER-1;i>=0;i--){
    result = *(a+i)+result*x;
  }
  return result;
}


float naive_polynomial(float x,float* a)
{
  float result = 0;
  int i = 0;
  for(i=0;i<MAX_A_NUMBER;i++){
    result += (*(a+i))*pow(x,i);
  }
  return result;
}
