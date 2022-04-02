# Object Oriented Programming Using C++

## Basic Concept of OOPS

1. **Classes and Object**
2. **Data Abstraction**
3. **Data Encapsulation**  
4. **Inheritance**
5. **Polymorphism**
6. **Message passing**

## Classes and Object

**Class** : It is an combination of Data members and Member functions

**Object** : It is an Instance of Class

## Access specifier

1. **private :** It is an default access specifier and it is use to hide data member and its member can't access outside the class

2. **public :** It is use for common purpose and it's data is accessable inside and outside class

3. **protect :** It is commonly for inheritance concept and it's data members accessable inside the class and inside a derive class  

## Object

1. **Creation of object**  
syntax:  
class_Name object_Name,..,N;  

2. **Access member using object**  
object_Name.Member_Name;

```
#include<iostream>
using namespace std;
class Employee {

private: //it is an default access specifier 
int id, salary;

public: //it is use for common purpose
void Input(){
    cout<<"Enter the id and salary"<<endl;
    cin>>id>>salary;
}
void Display(){
    cout<<"id = "<<id<<"salary = "<<salary<<endl;
}

};

int main(){
 
    system("clear");
    Employee emp;//emp is object
    emp.Input();
    emp.Display();
    return 0;
}
```

## Functions  

* **Function**: It is an set of instruction which use perform particular task  
syntax:  
**return_Type Function_Name (Parameters){  
    return 0;  
}**

* **Function prototype** : It mean Declaring a function  
syntax:  
**return_Type Function_Name (Parameters);**

* **Function Defination** : It mean writing a code for function  

* **passing Argument** : It an value pass to a function and so some operation on it and return  
syntax :  
**Function_Name(data_type variable, class_type &object);**

* **passing Array : Function_Name(data_type array[]);**

* **default argument : Function_Name(data_type varible = value );**

* **pass by pointer : return_type Function_Name(data_type * ptr){ //code }**

* it is effect in address

* **pass by reference : return_type Function_Name(data_type  &value ){ //code }**

* **Function call** : calling a function is called function call  
syntax :  
Function_Name(Argument);

### Function overloading

* **Function Overloading** : It mean function having same name and different parameters
* it use to achieve polymorphism

## Inline Function

* It is an function who's function body is replace by code

* It is recommented to use it when code is less

```
#include <iostream>
#include <stdlib.h>

using namespace std;

void NoReturnType (); //function protype

int ReturnTyepe (int parameter,int OrArgument);

class Functions {

int a,b,c;

public:
void swap(int *x,int *y){ //passing by pointer
    int temp=0;
    temp = *a;
    *a = *b;
    *b = temp;
}

void sort(int a[], int n){ //passing array
    int i,j;
    for(i=0; i<n; i++)
        for(j=i+1; j<n; j++){
            if(a[i] > b[j]){
                swap(a[i],a[j]);//function call inside a function
            }
        }
}

int large(int &a,int &b,int c=10){ //default argument and pass by reference

if (a>b && b>c )
return a;
else if ( b>c )
return b;
else 
return c;

// function returning value

}

//function overloading
void shape(int s){
    cout<<"square ="<<s*s<<endl;
}

void shape(int l,int b){
    cout<<"rectangle = "<<l*b<<endl;
}

//inline function
inline float circle(int r){
    return (3.14*r*r);
}

};

int main(){

    Function fun;
    fun.shape(10); //calling square function
    fun.shape(24,6); //caling rectangle function
    int a[]={1,2,3,4,5};
    sort(a[],5);    

    return 0;
}

```

## Constructor And Destructor  

1. **Constructor** : it is special member function which has same name has class and executed when object is created

* It is commonly use for assigning values
* It didn't return any value
* It can't be inherited but it can call by derive class
* It can't virtual and it can overload  
* It is use allocate memory dynamically to object
* It is use to perform operation user define data type

### **Type of constructor**

* default constructor
* parameterize constructor
* copy constructor

2. **Destructor** : it is also special member function which has same as class name prefix with till symbol (~)
executed when ever object is free or delete

* It is use release memory of variables
* It can be virtual and it can't be overload
* It can't be inherited but it can call by derive class

```

#include <iostream>
using namespace std;
class student {

int id,marks;
int *m1,*m2;

public: student(){ //it is an default constructor
    m1 = new int; // new use to allocate memory dynamically
    m2 = new int;
    id=marks=0;
     }  

student (int i,int m){ //it is an parameterize constructor
    id = i;
    marks = m;
}

student (student &std){ //it is a copy constructor
    //here std is object of class type
    //parameter is pass by object
    id = std.id;
    marks = std.marks;
}

~student (){
    delete m1; // delete use to free the memory
    delete m2;
}

};

int main(){

    student s;//  default constructor is call
    student s1(10,20);//  parameterize constructor call
    student s(s1); // copy constructor call
    // passing object to constructor s1
}

```

## Operator overloading

* **operator** : These are symbols which use to perform operation on operand or variable
* **operator overloading** : It type of polymorphism which mean overloading meaning of operator and use to operform operation on user define data type  
syntax :  
Return_Type operator operator_symbol (parameterise){//code}

* it can be overload with friend function

```
#include <iostream>
using namespace std;

class student {
int m1,m2,percentage;

public: 
student operator +(student &std){ // normal operation
    student temp; // creating object of tempary
    temp.m1 = m1 + std.m2; // adding value of object std.m2
    return temp;// returning object
}

student (int total){ //converting basic type to class type
    percentage = total*3/100;
}

operator int(){ //converting class type to basic type
    return (total/3*100);
}

};

int main(){
    student s1,s2,s3;// creating object
    s3 = s1 + s2; // doing addition on user define data type by operator + overloading

    student s4(650);//converting basic type to class type
    int s = s4;//converting class type to basic type

    return 0;
}
```

## Virtual Function

**polymorphism** : it is an ability to to exist in more than one form

### Type of polymorphism

* **compile time polymorphism** : decision make at compile time  
example function overloading
* **Run time polymorphism** : decision making at run time  
example virtual function

* **overloading** : having same name different parameters
* **overriding** : changing code of function in derive class
* **Abstraction** : It mean hiding background detail and showing essential information . A class which has at least one pure virtual function is called abstract class
* **pure virtual function** : A Virtual function who prototype is assign with zero  
* **virtual function** : A function prefix with keyword virtual

```
#include <iostream>
using namespace std;
class Base {

    public: virtual void show(){ //virtual function 
        cout<<"Virtual function"<<endl;
    }
    virtual void abstract_fun() = 0;//pure virtual function
    
    /*after declaring a pure virtual function now class
     become abstract class
     Note : we should override the pure virtual function in derive class because if we don't the derive class also become abstract class
     */
};

class derive :public Base { // inheriting base class

    public: void show(){ //overiding show function
        cout<<"override the base class function"<<endl;
    }

    void abstract_fun(){
        cout<<"overriding pure vitual function"<<endl;
    }
};

int main(){
    derive d;
    d.show();
    d.abstract_fun();
    /*
    Note : we can't create object for abstract class 
    overriding means changing the code of base class function in 
    side derive class 
    if function is virtual function and it is call inside base class the
    derive class overrided code will run  
    base b;
    derive d;
    base *ptr = &d;
    d->show();
    it will call function in derive class not base class
    */
}

```

## Friend function

* **Friend function** : it is function which can access private member of class it is prefix by keyword friend
it is an non member of a class

```

include <iostream>
using namespace std;

class Test{
    int a,b;
    public:
    Test(int a,int b){
        this->a = a; //this it return 
        this->b = b;
    }
    friend void swap(Test t);//declaring swap as friend of Test
};
void swap(Test t){//friend function
    int temp;
    temp = t.a;
    t.a = t.b;
    t.b = temp;
}
int main(){
    Test t;
    swap(t);//calling friend function 
    //it is not a member of class
    //it is like real friend
}

```

## Template

* **Template** : it use to wite a code which can work for all data type and class type

### Type of Template

* **Function Template** :  It is a function which can perform operation on different data type

* **Class Template** : It is an class which can perform operation on different data type

### Exception handling

* **Exception** : it is run time problem similar like error but not error but in exception program will not stop and continue end till it complete

* **try** : it is use to generate exception
* **throw** : it is use to throw exception
* **catch** : it is use to catch exception

```
#include <iostream>
using namespace std;
template<class T> //declaring function template with arg of T
T show(T dis){
    cout<<"value = "<<dis<<endl;
    return dis;
}

template<class T> //declaring class template  
class Test{
    T sh; // template varible for all type
public: T display(){
    cout<<"value = "<<sh<<endl;
    return sh;
}

template<class I,class P> // class template in class with 2 arg
T printing(I a,P c){
    cout<<"value ="<<a<<"value ="<<c<<endl;
    return a;
}

};
void exception(int a){
    //generating exception and handling it 
    try{
        throw a;
    }catch(int e){
        cout<<"exception ="<<e<<endl;
    }
}

int main(){
    int a=10;
    char s='a';
    
    Test <int>t;//creating object for template class with predefine type int
    t.display(a);
    Test <char>y;//creating object for template class with predefine type char
    y.display(s);

    show(a);// calling template function
    show(b);


}
```

## Inheritance

* **Inheritance** :  It is an process in which a class aquire or inherit the properties

### Type of inheritance

1. **single level**
2. **multiple level**
3. **mutilevel level**
4. **hierachy level**
5. **hybrid level**

* it is for code reusabiity
* it constructor and destructor behave differently
* there my be duplication of data to avoid it use virtual class
* by using it we can access the data of base class
* if 2 base class function are same use scope resolution operator with class name  
syntax:  
obj.class_Name::function();

### **Note : Refer about it in Google**

```
#include <iostream>
using namespace std;

class base{
protected:
void show(){
   cout<<"base class"<<endl;
}
};

class base1{
protected:void show(){
    cout<<"base2 class"<<endl;
}
};

class derive : public base,base1{ //multiple inheritance
public:
void display(){
    cout<<"derive class"<<endl;
}
};

int main(){
    
    derive d;
    d.base::show();
    d.base2::show();
    d.display();

    return 0;
}

```

## **Note : Learn about Files from Google**