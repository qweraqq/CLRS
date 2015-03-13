/*
  2015-03-13
  Head file for heapsort
 */
#ifndef _HEAP_H
#define _HEAP_H

void MaxHeapify(int*,int,int);
void BuildMaxHeap(int*,int);
void Heapsort(int*,int);
int MaxHeapInsert(int*,int,int);
int HeapMaximun(int*,int);
int HeapExtractMax(int*,int);
int Parent(int);
int Left(int);
int Right(int);


#endif
