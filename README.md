# C-header-file
This Array.h and carray.h is use to perform operations on arrays of any type in c language
## The operation as follow
1. **Traversing**
2. **Inseration**
3. **Deletion**
4. **Sorting**
**************************************************************************************
* Insert(array, length_of_array, element_to_insert, capicity_of_array, position, array). 

* Deletion(array, length, position, array). 

* Traverser(array, length). 

* sort(array, length, array). 

above functions use to take above parameters
****************************************************************************************
The File LinkList.h this file is use to perform operation on Linklist in C++ Language. 
1. add. 
2. insert. 
3. remove. 
4. length. 
5. get. 
6. release. 
7. Append. 
8. print. 
*****************************************************************************************
* Add(data) : this function is use add element into LinkList
* insert(position , data) : this is use to insert element at position 
* remove(position) : it is use delete element at position
* length() : this use to return length or size of LinkList
* get(index) : it is use to get data of particular index
* release() : this use to release or free the memory of list
* print() : it is use to display elements of LinkList
*****************************************************************************************
```
Example

#include </path/Array.h>
#include </path/LinkList.h>
#include <iostream>
#include <stdlib.h>
  
using namesp std;

template<class T>
void Array_helper(T ar[],int size,T e){
  
  int s=length(ar);
  
  traverser(ar,s);
  cout<<s<<endl;
  insert(ar,s,e,size,4,ar);
  traverser(ar,s+1);
  deletion(ar,s,4,ar);
  sort(ar,0,s,ar);
  traverser(ar,s);
  cout<<"stop...\n";

  }

void Array_Test(){

  cout<<"Starting \n";
  int iar[10] = {1,2,3,4,5};
  Array_helper(iar,10,6);
    
  char car[10] = {'a','c','b','e','d'};
  Array_helper(car,10,'s');

  double dar[10] = {1.2,3.5,2.5,4.8,5.9};
  
  Array_helper(dar,10,6.6);

  }

void LinkList_test(){
  
  LinkList<int> *list = new LinkList<int>();
    
  for(int i=1;i<11;i++)
    list->add(i+1);
  
  list->print();
  list->remove(5);
  list->print();
  list->insert(5-1,4);
  list->print();
  int t = list->length();
  cout<<t<<endl;
  list->release();
  delete(list);
  
  }

int main(){
  
  system("clear");
  
  Array_Test();
  
  LinkList_test();
  
  return 0;
  
}
    
```
