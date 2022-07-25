// Ch1DisplayPointers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    cout << "Welcome. Please enter two integers." << endl;
    int a, b;
    cin >> a >> b;

    int* ptrA = &a;
    int* ptrB = &b;

    cout << "*ptrA: " << *ptrA << endl;
    cout << "*ptrB: " << *ptrB << endl;
}
