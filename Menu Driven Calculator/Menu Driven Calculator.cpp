#include <iostream>
using namespace std;

//structure 
struct calculate
{
	double result = 0;
};

//functions for the different available calculations
calculate addition(double num1, double num2);

calculate subtraction(double num1, double num2);

calculate multiplication(double num1, double num2);

calculate division(double num1, double num2);

calculate power(double num1, double num2);

calculate modulus(int num1, int num2);

int main()
{
	int choice = 0;
	double num1, num2 = 0;
	int mod_num1, mod_num2 = 0;

	//Menu Overlay
	cout << "================== Menu Calculator ==================" << endl
		<< "  0- Close Program" << endl
		<< "  1- Addition\t2- Subtraction\t 3- Multiplication" << endl
		<< "  4- Division\t5- Power      \t 6- Modulus" << endl;

	//looping the code until user ends it
	do
	{ 
		cout << "-----------------------------------------------------" << endl << endl;
		choice = 0;
		num1, num2 = 0;
		mod_num1, mod_num2 = 0;

		cin >> choice;
	
		switch (choice)
		{
			//case for closing program
			case 0:
			{
				cout << "Closing program..." << endl;
				return 0;
				break;
			}
			//case for addition
			case 1:
			{
				cout << "Addition: " << endl;
				cout << "First Number- ";
				cin >> num1;
				cout << "Second Number- ";
				cin >> num2;

				calculate calc = addition(num1, num2);

				cout << calc.result;
				break;
			}
			//case for subtraction
			case 2:
			{
				cout << "Subtraction: " << endl;
				cout << "First Number- ";
				cin >> num1;
				cout << "Second Number- ";
				cin >> num2;

				calculate calc = subtraction(num1, num2);

				cout << calc.result;
				break;
			}
			//case for multiplication
			case 3:
			{
				cout << "Multiplication: " << endl;
				cout << "First Number- ";
				cin >> num1;
				cout << "Second Number- ";
				cin >> num2;

				calculate calc = multiplication(num1, num2);

				cout << calc.result;
				break;
			}
			//case for division
			case 4:
			{
				cout << "Division: " << endl;
				cout << "First Number- ";
				cin >> num1;
				cout << "Second Number- ";
				cin >> num2;

				if (num2 == 0)
				{
					cout << "Cannot divide by 0. ";
					break;
				}

				calculate calc = division(num1, num2);

				cout << calc.result;
				break;
			}
			//case for power
			case 5:
			{
				cout << "Power: " << endl;
				cout << "First Number- ";
				cin >> num1;
				cout << "Second Number- ";
				cin >> num2;

				calculate calc = power(num1, num2);

				cout << calc.result;
				break;
			}
			//case for modulus
			case 6:
			{
				cout << "Modulus (numbers must be integers): " << endl;
				cout << "First Number- ";
				cin >> mod_num1;
				cout << "Second Number- ";
				cin >> mod_num2;

				calculate calc = modulus(mod_num1, mod_num2);

				cout << calc.result;
				break;
			}
			//case for invalid input
			default:
			{
				cout << "Invalid Input. Use a number 0-6." << endl << endl;
			}
		}

		cout << endl << endl;
	} while (choice != 0);
}

calculate addition(double num1, double num2)
{
	calculate  calc;

	calc.result = num1 + num2;
	return calc;
}


calculate subtraction(double num1, double num2)
{
	calculate  calc;

	calc.result = num1 - num2;
	return calc;
}

calculate multiplication(double num1, double num2)
{
	calculate  calc;

	calc.result = num1 * num2;
	return calc;
}

calculate division(double num1, double num2)
{
	calculate  calc;
	
	calc.result = num1 / num2;
	return calc;
}

calculate power(double num1, double num2)
{
	calculate  calc;

	calc.result = pow(num1, num2);
	return calc;
}

calculate modulus(int num1, int num2)
{
	calculate calc;

	calc.result = num1 % num2;
	return calc;
}

