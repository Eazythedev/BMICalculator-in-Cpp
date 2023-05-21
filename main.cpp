#include<iostream>
#include <iomanip>

using namespace std;

int main() {

	// weight(kg) / height * height(m)
	// Underweight < 18.5
	// Healthy weight 18.5 - 24.9
	// Overweight > 25

	float userWeight, userHeight, bodyMassIndex; //floating point number for int

	std::cout << "Weight(kg): ";
	std::cin >> userWeight;

	std::cout << "Height (m): ";
	std::cin >> userHeight;
	// BMI calculation
	bodyMassIndex = userWeight / (userHeight * userHeight);

	if (bodyMassIndex < 18.5)
		std::cout << "Underweight" << std::endl;
	else if (bodyMassIndex > 25) // Check if bmi is over 25
		std::cout << "Overweight" << std::endl;
	else
		std::cout << "Healthy weight" << std::endl;
		
	std::cout << "Your Body Mass Index is " << std::fixed << std::setprecision(2) << bodyMassIndex << "." << std::endl;

	// Wait for user input
	std::cin.ignore();
	std::cin.get();

	return 0;
}
