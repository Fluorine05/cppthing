#include <iostream>
#include <string>
using namespace std;

int main() {
	std::cout << "Arun is the GOAT at this" << endl;
	string sentence = "My name is asif and i am exploring c++ \n";
	std::cout << sentence;
	cout << "The length of the text above is : " << sentence.length() << " characters long" << endl;
	string name;
	std::cout << "Enter your name " << endl;
	cin >> name;
	int age;
	std::cout << "What is your age ";
	cin >> age;
	
	std::cout << "Your age is " << age << endl;
	const float PI = 3.14;
	std::cout << "the word PI in numbers is " << PI << endl;
	int sum1 = 100 + 50;
	int sum2 = sum1 + 250;
	int sum3 = sum2 + sum2;
	std::cout << "not random number " << sum1 << endl;
	std::cout << "not random numbers " << sum2 << endl;
	std::cout << "completly not random number's " << sum3 << endl;
	return EXIT_SUCCESS;
}