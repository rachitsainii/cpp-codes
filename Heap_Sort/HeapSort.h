#pragma once
class HeapSort
{
public:
  HeapSort(int arr[], int n);
  void sort();
  void printArray();

private:
  int *arr;
  int n;

  void heapify(int i);
};
