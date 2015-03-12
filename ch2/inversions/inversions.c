#include "inversions.h"
#include <stdlib.h>

int inversion_count(int* A,int p,int r){
  int count = 0;
  int q = 0;
  int c1 = 0;
  int c2 = 0;
  int c3 = 0;
  if (p>=r)  //base case
    return 0;

  q = (p+r)/2;
  c1 = inversion_count(A,p,q);
  c2 = inversion_count(A,q+1,r);
  c3 = inversion_count_merge(A,p,q,r);

  count = c1+c2+c3;

  return count;

}

int inversion_count_merge(int* A,int p,int q,int r){
  int n1 = q - p + 2;
  int n2 = r - q + 1;
  int* L = (int*)malloc(n1*sizeof(int));
  int* R = (int*)malloc(n2*sizeof(int));
  int i = 0;
  int j = 0;
  int k = 0;
  int count = 0;
  for(i=0;i<n1-1;i++)
    *(L+i) = A[p+i];
  for(i=0;i<n2-1;i++)
    *(R+i) = A[q+i+1];
  *(L+n1-1) = 999999; //inf
  *(R+n2-1) = 999999; //inf
  i = 0;
  j = 0;
  for(k=p;k<=r;k++){
    if (L[i]<=R[j]){
      A[k]=L[i];
      i++;
    }
    else{
      A[k]=R[j];
      count += n1 - 1 -i;
      j++;
    }
  }
  return count;
}
