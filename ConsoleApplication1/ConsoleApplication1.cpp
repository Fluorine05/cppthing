#include <iostream>
#include <string>
using namespace std;

int main(int argc, char**argv) {
	std::cout << "M5t2 is the GOAT at this" << endl;
	string sentence = "My name is Fluorine and i am exploring c++ \n";
	std::cout << sentence;
	cout << "The length of the text above is : " << sentence.length() << " characters long \n";
	std::cout << "THIS INFORMATION WILL NOT BE STORED! \n";
	// Procceds to store info :O
	string name;
	std::cout << "Enter your name \n";
	cin >> name;
	int age;
	std::cout << "What is your age \n";
	cin >> age;
	string country;
	std::cout << "Enter what country you live in \n";
	cin >> country;
	std::cout << "Your name is " << name << endl;
	std::cout << "Your Age is " << age << endl;
	std::cout << "You live in " << country << endl;
	const float PI = 3.14;
	std::cout << "the word PI in numbers is " << PI << endl;
	int sum1 = 100 + 50;
	int sum2 = sum1 + 250;
	int sum3 = sum2 + sum2;
	std::cout << "not random number " << sum1 << endl;
	std::cout << "not random numbers " << sum2 << endl;
	std::cout << "completly not random number's " << sum3 << endl;

	/* float number;
	std::cout << "Input a number and the program will multiply it by 0.6213712 \n";
	cin >> number;
	double sum = number * 0.6213712;
	std::cout << sum << endl;
#
	std::cout << "the size of an char is " << sizeof(char) << endl;
	std::cout << "the size of an short is " << sizeof(short) << endl;
	std::cout << "the size of an int is " << sizeof(int) << endl;
	std::cout << "the size of an long is " << sizeof(long) << endl;
	std::cout << "the size of an float is " << sizeof(float) << endl;
	std::cout << "the size of an double is " << sizeof(double) << endl;*/


	float Radius;
	std::cout << "Please input the radius and this program will calculate the volume \n";
	cin >> Radius;
	
	double Volume = Radius * Radius * Radius * 3.14159 * 4 / 3;
	std::cout << "The Volume Is " << Volume << endl;
	

		float num1;
		std::cout << "Please Input What Number you would like to use first\n";
		cin >> num1;
		float num2;
		std::cout << "Please input the second number you would like to use\n";
		cin >> num2;
		std::cout << "Please Input What Mathmatical operation you would like to use \n [1] = +, [2] = -, [3] = *, [4] = / \n";
		int sum;
		cin >> sum;
		if (sum == 1) {
			std::cout << "Your first number Add your Second Number Is " << num1 + num2;
		}
		else if (sum == 2) {
			std::cout << "Your first number Subtract your Second Number Is " << num1 - num2;
		}
		else if (sum == 3) {
			std::cout << "Your first number Mulitplied by your Second Number Is " << num1 * num2;
		}
		else if (sum == 4) {
			std::cout << "Your first number Divided by your Second Number Is " << num1 / num2;
		}
		system("pause");
}
