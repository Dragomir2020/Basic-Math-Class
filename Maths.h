////////////////////////
//FILE NAME: Maths.h//
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

// If the file is node defined, define
#ifndef MATH_H
#define MATH_H

// Header File declares member funtions and data values
class Maths
{
   private:
      int value1;
      int value2;
   public:
   	  // FUNCTIONS DECLARED IN MATHS.CPP
      Maths(int, int);   // Constructor
      void setValue1(int); // Set Value1
      void setValue2(int); // Set Value2
      double Divide(); //Divide
      int Modulo(); //Modulo
      
      // MEMBER FUNCTIONS DECLARED IN HEADER FILE
      int getValue1() const{
      	return value1;
      }  // Constant member function to return value1

      // Constant member function to return value1
      int getValue2() const{ 
      	return value2; 
       }  // Constant member function to return value2
      
      // Add two values
      double Add() const{ 
         return value1 + value2; 
      } // Add 2 values
         
      // Substract two values
      double Subtract() const{ 
      	return value1 - value2;
      } //Subtract 2 values
      
      // Multiply two values
      double Multiply() const{ 
      	return value1 * value2; 
      } // Multiply 2 values

};
#endif