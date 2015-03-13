#include <stdlib.h>
#include "heap.h"

void MaxHeapify(int* A,int n,int i){
  int l=Left(i);
  int r=Right(i);
  int largest = 0;
  int tmp = 0;
  if(l<=n && A[l]>=A[i])
    largest = l;
  else
    largest = i;
  if(r<=n && A[r]>=A[largest])
    largest = r;
  if(largest != i){
    tmp = A[i];
    A[i] = A[largest];
    A[largest] = tmp;
    MaxHeapify(A,n,largest);
  }
  return;
}
void BuildMaxHeap(int* A,int n){
  int i=0;
  for(i=n/2;i>=1;i--)
    MaxHeapify(A,n,i);
  return;
}

void Heapsort(int* A,int n){
  int i = 0;
  int tmp = 0;
  BuildMaxHeap(A,n);
  for(i=n;i>=2;i--){
    tmp = A[i];
    A[i] = A[1];
    A[1] = tmp;
    MaxHeapify(A,i-1,1);
  }
  return;
}

int Parent(int i){
  return i/2;
}

int Left(int i){
  return 2*i;
}

int Right(int i){
  return 2*i+1;
}
