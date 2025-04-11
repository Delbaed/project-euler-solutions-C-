#include <iostream>
using namespace std;

//fucntion for checking for multiples
int multiples(int userInput) {
	int numCounter = 0;
	for (int i = 0; i < userInput; i++) {
		if (i % 3 == 0) {
			numCounter += i;
		} else if (i % 5 == 0) {
			numCounter += i;
		} else {
			; //its basically a "pass"
		}
	}
	return numCounter;
}

int main() {
	//cout << "hello world";
	//printf("hello world");

	//get user input
	int numInput;
	cin >> numInput;

	//use function and display answer
	int answer = multiples(numInput);
	cout << answer;

	return 0;
}