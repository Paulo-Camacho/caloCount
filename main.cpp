#include <iostream>

class Meal {

public:
	int calorie, protein, day;

	void meal() {
	std::cout << "Enter calorie for food, then hit enter" << std::endl;
	std::cin >> calorie;
	std::cout << "Now, enter the grams of protein of entered food." << std::endl;
	std::cin >> protein;
	std::cout << "Meal - " << day << "\ncalories: " << calorie << "\nprotein: " << protein << std::endl;
	}
};

int main(int argc, char* argv[]) {
	Meal s;
	s.meal();
}
