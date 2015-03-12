/*
  2015-03-12
  test file for Horner's rule for evaluating a polynomial'
 */

#include <stdio.h>
#include "horner.h"

int main(void)
{
  FILE* fp; //input file
  float x = 0;
  float a[MAX_A_NUMBER];
  int i;
  if((fp=fopen("./input","r"))==NULL){
    printf("Can not open input file\n");
    return 1;
  }
  fscanf(fp,"%f",&x);
  printf("x=%f\n",x);
  for(i=0;i<MAX_A_NUMBER;i++){
      fscanf(fp,"%f",a+i);
  }
  printf("result = %f\n",horner_polynomial(x,a));
  printf("result = %f\n",naive_polynomial(x,a));
  fclose(fp);
  return 0;
}
