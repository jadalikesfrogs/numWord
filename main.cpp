#include <iostream>
#include <string>
using namespace std;


int getInt(int a, int b); // get int in range (a,b)
string intWords(int a); // returns the word of the number

int main() {
	int number = 0;
	int min = 1, max = 10;
	
	cout << "Enter a number: ";
	
	number = getInt(min, max);
	cout << intWords(number);
	return 0;
}

int getInt(int a, int b)
{
	int number = 0;
	cin >> number;
	// check to make sure it is in range
	
	return number;
}

string intWords(int a)
{
	string answer = "";
	switch (a) {
	case 1:
		answer = "one";
		break;
	case 2: 
		answer = "two";
		break;
	default: 
		answer = "Out of range";
	}

	return answer;
}
