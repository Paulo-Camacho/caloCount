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

class Loop{
public:
	int userStart;
	bool program = true;
	Meal entry;

	void suma() {
		while(program) {
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
};

class Prompt{
public:
	Loop test1;
	int start = 1;
	
	void display() {
	if(start = 1) {
		std::cout << "1 to start/continue or 0 to quit " << std::endl;
		std::cin >> userStart;
		test1.suma();
		} else {
			test1.suma();
		}
	}
};

int main(int argc, char* argv[]) {
	Prompt test;
	test.display();
}
