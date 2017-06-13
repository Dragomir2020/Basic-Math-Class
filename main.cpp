///////////////////////
//FILE NAME: main.cpp//
///////////////////////

////////////////
//Contributers//
////////////////

///////////////////////////////////////////////

// NAME                   DATE           CHANGE
// Dillon Dragomir        06-17-2017     Initalized folder

///////////////////////////////////////////////

////////////////
//DEPENDANCIES//
////////////////
#include <iostream>
#include <iomanip>
#include "Maths.h"
using namespace std;

// Main function used for math functions
// Shows data abstraction
int main()
{
   int x, y;

   // Get the value1.
   cout << "Enter value1 ";
   cin >> x;

   // Get the value2.
   cout << "Enter value2 ";
   cin >> y;
   
   // Create a Maths object.
   Maths my_obj(x, y);
   
   // Display the maths operations.
   cout << "Addition is " << my_obj.Add() << endl;
   /* Call the other operators member functions */
   cout << "Subtraction is " << my_obj.Subtract() << endl;
   cout << "Multiplication is " << my_obj.Multiply() << endl;
   cout << "Division is " << my_obj.Divide() << endl;
   cout << "Modulo is " << my_obj.Modulo() << endl;
   return 0;
} 