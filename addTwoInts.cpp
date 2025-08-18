// Created by BE129 on 8/18/2025.
// addTwoInts.cpp
// 0836901
// This program will get three ints from the user and output the largest one.
#include <iostream>

using namespace std;

int main() {
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;
    //int hiNum = 0;
    //int loNum = 0;
    //int mdNum = 0;
    int sumOFNums = 0;
    cout << "Enter a value for num1:";
    cin >> num1;
    cout << "Enter a value for num2:";
    cin >> num2;
    cout << "Enter a value for num3:";
    cin >> num3;

    sumOFNums = num1 + num2 + num3;

    cout << "\nThe sum of " << num1 << ", " << num2 << ", and " << num3 << " is " << sumOFNums;

    if (sumOFNums > 0) {
        cout << "\nThe sum, " << sumOFNums << ", is positive.";
    }
    else if (sumOFNums < 0) {
        cout << "\nThe sum, " << sumOFNums << ", is negative.";
    }

    //cout << "\n The largest number is " << hiNum;
    //cout << "\n The smallest number is " << loNum;
    //cout << "\n" << mdNum << " sits in the middle";

    if (num1 > num2) {
        cout << "\nThe largest number is " << num1;
    }
    else {
        cout << "\nThe smallest number is " << num2;
    }

    return 0;

}