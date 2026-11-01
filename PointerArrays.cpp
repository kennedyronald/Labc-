#include <iostream>
using namespace std;
int main() {
int numbersArray[5] ;
int * pointer= nullptr;

// assign the address to the first element to the pointer
 pointer = numbersArray;
*pointer =10; //assign a value to the first element

/*increment the pointer using pointer arithmetic
to assign the address of the second element to the pointer*/
pointer++;
*pointer = 20; //assign a value to the second element

//assign the address of the third element to the pointer
pointer = &numbersArray[2];
*pointer = 30; // assign a value to the third element

/*assign the address of the fourth element to the pointer
using pointer arithmetic*/
pointer= numbersArray + 3;
*pointer = 40; //assign a value to the fourth element

//assign the address to the first element to the pointer
pointer = numbersArray;

/*assign a value to the fifth element using indirection and pointer
pointer arithmetic */
*(pointer+4) = 50;

// literate and output all the elements in the array
for(int i= 0; i < 5; i++){
cout << numbersArray[i]<<" " ;
}
return 0;

}