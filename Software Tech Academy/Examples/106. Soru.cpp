#include <iostream>
using namespace std;

int main() {

	// What is the output of this code?
	int x = 0;

	do {
		x++;
		cout << "*";
	} while (x++ < 5);

	/* x=0	Output			x=1
	*  x=1	Output: *		x=2
	*  x=3	Output:	**		x=4
	*  x=5	Output: ***		Condition ends
	*/

	cout << endl;
	return 0;
}