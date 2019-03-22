/*

Author: Darren Zhang

Course: CSCI-136

Instructor: Gatto

Assignment: Task C. Calc2: Reading multiple formulas.

We want to make a simple calculator that can add and subtract integers, and will accept arbitrarily long mathematical formulas composed of symbols +, -, and non-negative integer numbers.

*/

#include <iostream>

using namespace std;

int main()
{   
	int num;
	char character;
   // The first sign is positive since negative numbers are not allowed.
   int total = 0;
   cin >> num; //first number
   total = num;
   while(cin >> character >> num){  // While the reading operation is a success
   	if(character == ';'){ //looks for semicolon; when it finds a semicolon, prints the total then  moves onto the next line and set total to the first number in that line.
   		cout << total << endl;	
    		total = 0;    		
   		total = total + num;
    	}
      if(character == '+'){ //addition
         total = total + num;
      }
      if(character == '-'){ //subtraction
         total = total - num;
      }
	}  
	cout << total;
   return 0; 
}

