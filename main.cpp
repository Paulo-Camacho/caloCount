#include <iostream>

struct Meal {

	int calorie, protein, day;

	void meal() {
	std::cout << "Enter calorie for food, then hit enter" << std::endl;
	std::cin >> calorie;
	std::cout << "Now, enter the grams of protein of entered food." << std::endl;
	std::cin >> protein;
	std::cout << "Meal - " << day << "\ncalories: " << calorie << "\nprotein: " << protein << std::endl;
	}
};

class Iterate {
public:
	int userStart;
	bool program = true;
	Meal entry;
	int first = 1;

	void suma() {
		while(program) {
			if(first = 1) {
			std::cout << "enter 1 or 0 " << std::endl;
			std::cin >> userStart;
				if(userStart == 1) {
				entry.meal();
					} else if (userStart == 0) {
					std::cout << "Have a good day! " << std::endl;
					program = false;
						} else {
						std::cout << "Make sure you type either 1 or 0 " << std::endl;
				}
			}
		}
	}
};

int main(int argc, char* argv[]) {
	Iterate test;
	test.suma();
}
