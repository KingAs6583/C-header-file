#include<stdio.h>
#include<stdlib.h>

/*
Move this file the path /usr/include/c++/9/ if you using in Linux
To use without moving just include by follow line
#include<path_of_this_file/carry.h>
*/

int int_insert(int arr[],int size,int element,int capicity, int index,int *ar){
    if(size>=capicity){
        printf("overflow\n");
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
int int_traverser(int *arr,int size){
    for (int i = 0; i <= size-1; i++)
    {   
        printf("%d ",*arr);
        *arr++;
    }
    printf("\n");
    return 0;
}
int int_deletion(int arr[],int size,int index,int *ar){

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
void int_sort(int a[],int n,int *arr){
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

int char_insert(char arr[],int size,char element,int capicity, int index,char *ar){
    if(size>=capicity){
        printf("overflow\n");
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
int char_traverser(char *arr,int size){
    for (int i = 0; i <= size-1; i++)
    {   
        printf("%c ",*arr);
        *arr++;
    }
    printf("\n");
    return 0;
}
int char_deletion(char arr[],int size,int index,char *ar){

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
void char_sort(char a[],int n,char *arr){
int i,j;
char temp;
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

int float_insert(float arr[],int size,float element,int capicity, int index,float *ar){
    if(size>=capicity){
        printf("overflow\n");
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
int float_traverser(float *arr,int size){
    for (int i = 0; i <= size-1; i++)
    {   
        printf("%f ",*arr);
        *arr++;
    }
    printf("\n");
    return 0;
}
int float_deletion(float arr[],int size,int index,float *ar){

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
void float_sort(float a[],int n,float *arr){
int i,j;
float temp=0;
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

int double_insert(double arr[],int size,double element,int capicity, int index,double *ar){
    if(size>=capicity){
        printf("overflow\n");
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
int double_traverser(double *arr,int size){
    for (int i = 0; i <= size-1; i++)
    {   
        printf("%f ",*arr);
        *arr++;
    }
    printf("\n");
    return 0;
}
int double_deletion(double arr[],int size,int index,double *ar){

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
void double_sort(double a[],int n,double *arr){
int i,j;
double temp=0;
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

