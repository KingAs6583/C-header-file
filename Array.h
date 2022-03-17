#include<iostream>
#include<stdlib.h>
using namespace std;
/*
Move this file the path /usr/include/c++/9/ if you using in Linux
To use without moving just include by follow line
#include<path_of_this_file/Array.h>
*/

//index = position size=number of element or n 

//insert is new element into array
template<class T>
int insert(T arr[],int len,T element,int capicity, int index,T *ar){
    if(size>=capicity){
        cout<<"overflow\n";
        return -1;
        exit(1);
    }
    for (int i = size-1; i >= index; i--)
    {
        arr[i+1]=arr[i];//with value
        /* here we are moving element back side to add one element 
        assume size = 5 as per array index it n-1 but in i+1 we are moving one one element to back
        */
    }
    arr[index] = element;
    for (int i = 0; i < size+1; i++)
    {
        *ar=arr[i];
        *ar++;
    }
    return 1;
}

//template it use to handle many different data type
//traversing is use to print array
template<class T>
T traverser(T *arr,int size){
    for (int i = 0; i <= size-1; i++)
    {
        cout<<*arr<<" ";
        *arr++;
    }
    cout<<endl;
    return 0;
}
// deletion is use to remove an element from array
template<class T>
int deletion(T arr[],int len,int index,T *ar){

    for (int i = index; i < size-1; i++)
    {
        arr[i]=arr[i+1];//with value
        arr[i+1]=0;   
    }
    for (int i = 0; i < size+1; i++)
    {
        *ar=arr[i];
        *ar++;
    }
    
    return 1; 
}

template<class T>
void sort(T a[],int n,T *arr){
int i,j,temp=0;
for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
        if(a[i]>a[j]){
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
}
for(i=0;i<n;i++){
    *arr=a[i];
    *arr++;
}
}

template<class T>
// function to swap elements
void swap(T *a, T *b) {
  int t = *a;
  *a = *b;
  *b = t;
}

// function to print the array
template<class T>
void printArray(T array[], int len) {
  int i;
  for (i = 0; i < size; i++)
    cout << array[i] << " ";
  cout << endl;
}

template<class T>
// function to rearrange array (find the partition point)
int partition(T array[], int low, int high) {
    
  // select the rightmost element as pivot
  int pivot = array[high];
  
  // pointer for greater element
  int i = (low - 1);

  // traverse each element of the array
  // compare them with the pivot
  for (int j = low; j < high; j++) {
    if (array[j] <= pivot) {
        
      // if element smaller than pivot is found
      // swap it with the greater element pointed by i
      i++;
      
      // swap element at i with element at j
      swap(&array[i], &array[j]);
    }
  }
  
  // swap pivot with the greater element at i
  swap(&array[i + 1], &array[high]);
  
  // return the partition point
  return (i + 1);
}

template<class T>
void quickSort(T array[], int low, int high) {
  if (low < high) {
      
    // find the pivot element such that
    // elements smaller than pivot are on left of pivot
    // elements greater than pivot are on righ of pivot
    int pi = partition(array, low, high);

    // recursive call on the left of pivot
    quickSort(array, low, pi - 1);

    // recursive call on the right of pivot
    quickSort(array, pi + 1, high);
  }
}

template<class T>
void sort(T ar[],int a,int b,T *arr){
    quickSort(arr,a,b);
    for(int i=0;i<b;i++){
    *arr=ar[i];
    *arr++;
    }    
}

template<class T>
int length(T ar[]){
 int i = 0;
    for(i=0; i < 10; i++)
    {
        if(ar[i] == NULL){
            break;
        }
    }
    return i;
}
