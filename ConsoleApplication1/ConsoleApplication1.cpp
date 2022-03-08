#include <iostream>
#include <string>
using namespace std;

int main(int argc, char**argv) {
	std::cout << "M5t2 is the GOAT at this" << endl;
	string sentence = "My name is Fluorine and i am exploring c++ \n";
	std::cout << sentence;
	cout << "The length of the text above is : " << sentence.length() << " characters long \n";
	std::cout << "THIS INFORMATION WILL NOT BE STORED! \n";
	string name;
	std::cout << "Enter your name \n";
	cin >> name;
	std::cout << "Your name is " << name  << endl;
	int age;
	std::cout << "What is your age \n";
	cin >> age;
	std::cout << "Your Age is " << age << endl;
	string country;
	std::cout << "Enter what country you live in \n";
	cin >> country;
	std::cout << "You live in " << country << endl;
	const float PI = 3.14;
	std::cout << "the word PI in numbers is " << PI << endl;
	int sum1 = 100 + 50;
	int sum2 = sum1 + 250;
	int sum3 = sum2 + sum2;
	std::cout << "not random number " << sum1 << endl;
	std::cout << "not random numbers " << sum2 << endl;
	std::cout << "completly not random number's " << sum3 << endl;
	system("pause");
}