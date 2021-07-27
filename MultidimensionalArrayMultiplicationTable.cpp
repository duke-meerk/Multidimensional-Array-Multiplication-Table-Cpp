#include <iostream>
#include <conio.h>
using namespace std;

int main()
{

    int nums[11][11] = {
        {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
        {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10}
    };

    int rows = 11;
    int cols = 11;


    cout << "============================================" << endl;
    cout << "∥      Multiplication Table 2.0 | 1-10 |   ∥" << endl;
    cout << "∥        by: Barau Andrei Cristian         ∥" << endl;
    cout << "∥              Cristian880                 ∥" << endl;
    cout << "============================================" << endl;



    for (int i = 1; i < rows; i++) {
        for (int j = 1; j < cols; j++) {
            nums[i][j] = i * j;
            cout.width(4);
        }
    }

    for (int i = 1; i < rows; i++) {
        for (int j = 1; j < cols; j++) {


            cout << nums[i][j] << flush;
            cout.width(4);
        }
        cout << endl;

    }



    cout << "============================================" << endl;
    cout << endl;


    cout << "============================================" << endl;
    cout << "∥      Multiplication Table 2.0 | 1-10 |   ∥" << endl;
    cout << "∥        by: Barau Andrei Cristian         ∥" << endl;
    cout << "∥              Cristian880                 ∥" << endl;
    cout << "============================================" << endl;

    // nested for-loop
    for (int i = 1; i < rows; i++) {
        for (int j = 1; j < cols; j++) {
            nums[i][j] = i * j;
            cout.width(6); //align output
        }
    }

    //nested for-loop
    for (int i = 1; i < rows; i++) {
        for (int j = 1; j < cols; j++) {

            cout << i << "*" << j << "=" << j * i;
            cout.width(6); //align output 
        }
        cout << endl;

    }

    cout << "============================================" << endl;


    return 0;
}