#include <iostream>
//CSC134
//M4LAB1
//Hunter Beard
//3/6/2023
using namespace std;

int main()
{
    // make a grid with ASCII text
    int rows, columns;
    cout << "How many rows? ";
    cin >> rows;
    cout << "How many columns? ";
    cin >> columns;
    cout << "Step 1: Print one row" << endl;
   for (int i=0; i<rows; i++) {
    cout << "*" << " ";
   }
   cout << endl; //entire loop is on the same line

   cout << "Step 2: Print one column" << endl;
   for (int i=0; i<columns; i++) {
    cout << "*" << endl;
   }

    cout << "Step 3: Nested loops to print the grid" << endl;
    for (int i=0; i <columns; i++) {
        for (int j=0; j<rows; j++) {
            cout << "*" << " ";
        }
        cout << endl; //finish the row
    }


    return 0;
}
