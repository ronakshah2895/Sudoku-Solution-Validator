//
//  main.cpp
//  Sudoku-Solution-Validator
//  Created By: Ronak Shah & Karan Patel
//  180-C - Group 32
//

#include <iostream>
#include "sudoku-validator.hpp"
using namespace std;

int main() {
    int a[9][9] = {
        {6, 2, 4, 5, 3, 9, 1, 8, 7},
        {5, 1, 9, 7, 2, 8, 6, 3, 4},
        {8, 3, 7, 6, 1, 4, 2, 9, 5},
        {1, 4, 3, 8, 6, 5, 7, 2, 9},
        {9, 5, 8, 2, 4, 7, 3, 6, 1},
        {7, 6, 2, 3, 9, 1, 4, 5, 8},
        {3, 7, 1, 9, 5, 6, 8, 4, 2},
        {4, 9, 6, 1, 8, 2, 5, 7, 3},
        {2, 8, 5, 4, 7, 3, 9, 1, 6}
    };
    int (*sp)[9] = a;
    if (validateSudokuSolution(sp))
        cout << "Valid Sudoku Solution\n";
    else
        cout << "Invalid Sudoku Solution\n";
    return 0;
}
