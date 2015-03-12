/*
  2015-03-12
  test file for calculate inversions
 */

#include <stdio.h>
#include <stdlib.h>
#include "inversions.h"


int main(void)
{
  FILE* fp; //input file
  int inversion_c = 0;
  int num_elems = 0;
  int* a;
  int i;
  if((fp=fopen("./input","r"))==NULL){
    printf("Can not open input file\n");
    return 1;
  }
  fscanf(fp,"%d",&num_elems);
  a = (int*)malloc(num_elems*sizeof(int));
  for(i=0;i<num_elems;i++){
      fscanf(fp,"%d",a+i);
  }

  inversion_c = inversion_count(a,0,num_elems-1);
  printf("inversion count = %d\n",inversion_c);
  for(i=0;i<num_elems;i++){
    printf("%d ",a[i]);
  }
  printf("\n");
  fclose(fp);
  return 0;
}
