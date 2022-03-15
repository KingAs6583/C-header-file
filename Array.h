#include<iostream>
#include<stdlib.h>
/*
Move this file the path /usr/include/c++/9/ if you using in Linux
To use without moving just include by follow line
#include<path_of_this_file/Array.h>
*/

//index = position size=number of element or n 
template<class T>
int insert(T arr[],int size,T element,int capicity, int index,T *ar){
    if(size>=capicity){
        std::cout<<"overflow\n";
        return -1;
        std::exit(1);
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
template<class T>
T traverser(T *arr,int size){
    for (int i = 0; i <= size-1; i++)
    {
        std::cout<<*arr<<" ";
        *arr++;
    }
    std::cout<<std::endl;
    return 0;
}
template<class T>
int deletion(T arr[],int size,int index,T *ar){

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



/*int main(){
    system("clear");
    int ar[10]={1,2,3,4,5};
    //for(int i=0;i<5;i++)
    //std::cin>>ar[i];
    traverser(ar,5);
    insert(ar,5,8,10,5,ar);
    traverser(ar,7);
    deletion(ar,6,4,ar);
    traverser(ar,8);
    return 0;
}*/