#include <iostream>

class meal()
{

}

int main(int argc, char* argv[])
{
	int calorie;
	int protein;
	int meal = calorie + protein;
	std::cout << "Enter calorie for food, then hit enter" << std::endl;
	std::cin >> calorie;
	std::cout << "Now, enter the grams of protein of entered food." << std::endl;
	std::cin >> protein;
	std::cout << "First entry calorie:" << calorie << " protein " << protein << std::endl;
	std::cout << meal << std::endl; 

}
