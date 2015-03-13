/*
  2015-03-13
  test file for Heapsort
 */

#include <stdio.h>
#include <stdlib.h>
#include "heap.h"


int main(void)
{
  FILE* fp; //input file
  int n = 0;
  int* A;
  int i;
  if((fp=fopen("./input","r"))==NULL){
    printf("Can not open input file\n");
    return 1;
  }
  fscanf(fp,"%d",&n);
  A = (int*)malloc((n+1)*sizeof(int));
  for(i=1;i<=n;i++){
      fscanf(fp,"%d",A+i);
  }

  Heapsort(A,n);
  for(i=1;i<=n;i++){
      printf("%d ",A[i]);
  }

  printf("\n");
  fclose(fp);
  return 0;
}
