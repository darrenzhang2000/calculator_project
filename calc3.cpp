/*

Author: Darren Zhang

Course: CSCI-136

Instructor: Gatto

Assignment: Task D. Caclc3:squares
Write an even better calculator program calc3.cpp that can understand squared numbers.
We are going to use a simplified notation X^ to mean X2. For example, 10^ + 7 - 51^ should mean 102 + 7 âˆ’ 512.

*/

#include <iostream>

using namespace std;

int main()
{   
	int num, temp;
	char character;
	bool truthValue = true; // 2 cases- positive and negative
   int total;
   
   cin >> num; // first number
   total = num; // sets total equal to first number

   while(cin >> character){  // While the reading operation is a success
		
      if(character == '^'){
			temp = num * num; //stores number squared
			if (truthValue == true){ //if positive
				total = total - num; //to account for the fact that num is automatically added to total
				total = total + temp; 
			}		
			else if (truthValue == false){ //if negative
				total = total + num; // to account for the fact that num is automatically subtracted from total
				total = total - temp;
			}
		}
      else if(character == '+'){
      	truthValue = true; // positive
      	cin >> num;
         total = total + num;
      }
      else if(character == '-'){
      	truthValue = false; // negative
      	cin >> num;
         total = total - num;
      }
   	else if(character == ';'){
   		cout << total << endl;
   		cin >> num; //first number in each line 
   		total = num;
   		truthValue = true;
      }
	}
	return 0;   
}
