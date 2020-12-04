/* Alexander Mendez 11-27-20
	Dr_T COSC 1437-58003
	Unit 7 - C++ Towers of Hanoi - Recursion
	repl.it 
*/
#include <iostream>
#include "Input_Validation_Extended.h"
using namespace std; 


/*
	defintion of Recursion
	Recursion is the process of solving a problem using a simpler version of itself
	A function that calls itself
*/


void towerOfHanoi(int numDisk, char startPeg, char sparePeg , char endPeg)  
{  
  if (numDisk == 1)  
  {  
    cout << "\nMove disk " << numDisk << " from peg " << startPeg << " to peg " << endPeg <<endl; 
  } 
	else
	{
		towerOfHanoi(numDisk - 1, startPeg, endPeg, sparePeg);
		cout << "\nMove disc " << numDisk << " from peg " << startPeg << " to peg " << endPeg << endl;
		towerOfHanoi(numDisk - 1, sparePeg, startPeg, endPeg);
	} 
}  


int factorialR(int num)
{
	if(num > 1)
	{
		return num * factorialR(num - 1); // ex: 4 * 3 * 2 * 1
	}
  else
	{
		return 1;
	}      
}
  

int main()  
{  
	int numDisk;

	cout << "Input the number of disks: ";
  numDisk = validateInt(numDisk); 

  towerOfHanoi(numDisk, 'A', 'B', 'C'); // name of pegs


	// Factorial

	int num = 0;

	cout << "\nEnter a number: ";
	num = validateInt(num);
	cout << "Factorial of " << num << " = " << factorialR(num);

  return 0;  
}  