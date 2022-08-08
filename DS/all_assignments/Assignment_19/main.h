#ifndef QUICKSORT_H
#define QUICKSORT_H

#include<stdio.h>
#include<stdlib.h>

//Function prototypes.
int print_array(int arr[],int size);   //to print the array.

int quick_sort(int arr[],int low,int high);  //to quick sort the elements.

int partition(int arr[],int low,int high);   //to find the right position of the pivot element.

void swap(int *a,int*b);                     //to swap the elements.

#endif
