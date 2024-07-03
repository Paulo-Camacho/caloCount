#include <iostream>

class Meal
{
	int calorie, protein, day;
public:
	meal(int &calorie, int &protein, int &day)
{
	std::cout << "WORKS" << std::endl;
{

}

int main(int argc, char* argv[])
{
	int calorie, protein, day;
	day = 69;
	std::cout << "Enter calorie for food, then hit enter" << std::endl;
	std::cin >> calorie;
	std::cout << "Now, enter the grams of protein of entered food." << std::endl;
	std::cin >> protein;
	std::cout << "Meal - " << day << "\ncalories: " << calorie << "\nprotein: " << protein << std::endl;
}
