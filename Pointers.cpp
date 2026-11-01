#include<iostream>
using namespace std;
int main() {
int firstVa1ue;
int secondVa1ue;
int * pPointer = nullptr;

// assign pointer with the address of firstVa1ue
pPointer = &firstVa1ue;

// Indirection
*pPointer = 10; 

//assign pointer with the address of secondVa1ue
pPointer = &secondVa1ue;

// Indirection
*pPointer = 20; 
cout<< "firstVa1ue is"<< firstVa1ue <<'\n';
cout <<"secondVa1ue is "<<secondVa1ue <<'\n' ;
return 0;
}