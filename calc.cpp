/* 
Author : Darren Zhang
Course: CSCI- 136
Instructor: Gatto
Assignment: Project 1 Task A. Write a program sum.cpp that reads a sequence of integers from cin and reports their sum. 
*/

#include <iostream>

using namespace std;

int main()
{   
    int sum = 0; // initial sum is 0
	int number;
    while(cin >> number){  // While the reading operation is a success
		sum += number;  // Add number to sum
    }
    cout <<  sum;
    return 0;
}
