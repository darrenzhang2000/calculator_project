/*

Author: Darren Zhang

Course: CSCI-136

Instructor: Gatto

Assignment: Task B. Calc: A calculator Program. 

We want to make a simple calculator that can add and subtract integers, and will accept arbitrarily long mathematical formulas composed of symbols +, -, and non-negative integer numbers.

*/


#include <iostream>

using namespace std;

int main()
{   
	int temp; //a temporary holder for inputted numbers
   char character;
   int total = 0;
   cin >> temp; //first number
   total = temp; // total total equal to first number 
   while(cin >> character >> temp){  // While the reading operation is a success
       if(character == '+'){ //if there is an addition sign
           total = total + temp;
       }
       if(character == '-'){ //if there is a subtraction sign
           total = total - temp;
       } 
   }
   cout << "The total is: " << total;
   return 0; 
}

