////////////////////////
//FILE NAME: Maths.cpp//
////////////////////////

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

#include "Maths.h"
#include <iostream> 
#include <cstdlib> 
using namespace std;

// Constructor
Maths::Maths(int val1, int val2)
{
   value1 = val1;
   value2 = val2;
}

// MEMBER FUNCTIONS

// Set Value 1
void Maths::setValue1(int val1){value1 = val1;}
// Set Value 2
void Maths::setValue2(int val2){value2 = val2;}
// Divide: Return -1 if divide by 0
double Maths::Divide(){
   if(value2 != 0) {
      return static_cast<double>(value1) / static_cast<double>(value2);
   } else {
      return -1;
   }
}
// Modulo: Return -1 if divide by 0
int Maths::Modulo()
{
	if(value2!=0){
		return value1 % value2;
	}
	return -1;
}


