#include<iostream>
using namespace std;

int main() { 

// declare pointer and initialize it
// so that it doesn't store a random address
int* Pointer = nullptr;
int integerVar = 5;

// assign pointer to address of object
 Pointer = &integerVar;

//output the value of integerVar
cout<< "integerVar: "<< integerVar << endl;

//output the address of integerVar
cout << "Address of integerVar:" << &integerVar<< endl;

//output the address assigned to pPointer
cout <<"pPointer:"<< Pointer << endl;

// output the address of pPointer
cout <<"Address Of pPointer : " <<*Pointer<< endl;

return 0;
}
