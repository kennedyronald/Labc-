#include <iostream>
#include <string>
using namespace std;

int main()
{
    int* Numbers = new int;
    string* Text = new string;

    cout << "Enter an integer: ";
    cin >> *Numbers;
    if(cin.fail()){
        cin.clear();
        cin.ignore(1000,'\n');
        cout<<"you have not entered a number "<<endl;
    } else{
        cin.ignore(1000,'\n');
    }
    

    cout << "Enter a string: ";
    getline(cin, *Text);
    
    cout << "The integer is: " << *Numbers << endl;
    cout << "The string is: " << *Text << endl;
    

    delete Numbers;
    delete Text;
    Numbers = nullptr;
    Text = nullptr;

    return 0;
}
