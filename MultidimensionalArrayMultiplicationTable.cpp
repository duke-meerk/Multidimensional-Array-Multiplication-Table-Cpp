//////////////////////////////////////////////////////
// Author : Barau Andrei Cristian a.k.a Cristian880 // 
//                Happy coding                      // 
//////////////////////////////////////////////////////


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


    cout << "============================================" << endl; // YOU CAN DELETE THIS IF YOU WANT! //
    cout << "∥      Multiplication Table 2.0 | 1-10 |   ∥" << endl; // YOU CAN DELETE THIS IF YOU WANT! //
    cout << "∥        by: Barau Andrei Cristian         ∥" << endl; // YOU CAN DELETE THIS IF YOU WANT! //
    cout << "∥              Cristian880                 ∥" << endl; // YOU CAN DELETE THIS IF YOU WANT! //
    cout << "============================================" << endl; // YOU CAN DELETE THIS IF YOU WANT! //



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


    cout << "============================================" << endl; // YOU CAN DELETE THIS IF YOU WANT! //
    cout << "∥      Multiplication Table 2.0 | 1-10 |   ∥" << endl; // YOU CAN DELETE THIS IF YOU WANT! //
    cout << "∥        by: Barau Andrei Cristian         ∥" << endl; // YOU CAN DELETE THIS IF YOU WANT! //
    cout << "∥              Cristian880                 ∥" << endl; // YOU CAN DELETE THIS IF YOU WANT! //
    cout << "============================================" << endl; // YOU CAN DELETE THIS IF YOU WANT! //

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
