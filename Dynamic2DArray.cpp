#include <iostream>
#include <string>
using namespace std;

int readDimension(const string& name)
{
    int value = 0;
    bool valid = false;

    while (!valid)
    {
        cout << "Enter the number of " << name
             << " (1 to 3): ";
        cin >> value;

        if (cin.fail())
        {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "That is not a number." << endl;
        }
        else if (value < 1 || value > 3)
        {
            cout << "The size may not exceed 3 "
                 << "(and must be at least 1)." << endl;
        }
        else
        {
            valid = true;
        }
    }

    return value;
}

int main()
{
    int rows = readDimension("rows");
    int cols = readDimension("columns");

    double** table = new double*[rows];
    for (int r = 0; r < rows; r++)
    {
        table[r] = new double[cols];
    }

    for (int r = 0; r < rows; r++)
    {
        for (int c = 0; c < cols; c++)
        {
            table[r][c] = (r + 1) * (c + 1) * 1.5;
        }
    }

    cout << "The array contains:" << endl;
    for (int r = 0; r < rows; r++)
    {
        for (int c = 0; c < cols; c++)
        {
            cout << table[r][c] << "\t";
        }
        cout << endl;
    }

    for (int r = 0; r < rows; r++)
    {
        delete[] table[r];
    }
    delete[] table;
    table = nullptr;

    return 0;
}
