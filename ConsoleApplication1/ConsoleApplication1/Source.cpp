/* Run through 1-20,
if the number is divisible by 3 print "fizz"
if the number is divisible by 5 print "buzz"
if the number is divisible by 3 & 5 print "fizz buzz"
else, display the numbe itself
Then make a branch called woof, same as before but add: if divisible by 7 print "woof" and 1-50
Merge into master branch
*/
#include <iostream>
using namespace std;
int main()
{
	int a, b, c; //Creaton of condition variables
	for (int i = 1; i < 21; i++) //The for loop that will run from 1-20
	{
		a = i % 3; //The variables are being used to test the conditions
		b = i % 5;
		c = a + b;

		if (c == 0)
			cout << "fizz buzz" << endl;
		else if (b == 0)
			cout << "buzz" << endl;
		else if (a == 0)
			cout << "fizz" << endl;
		else
			cout << i << endl;
	}
}
