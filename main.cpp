#include <iostream>

struct Meal {
    int calorie;
    int protein;
    int day = 1;

    void meal() {
        std::cout << " " << std::endl;
        std::cout << "Enter calorie for food, then hit enter: " << std::endl;
        std::cin  >> calorie;
        std::cout << "Now, enter the grams of protein of entered food: " << std::endl;
        std::cin  >> protein;
        std::cout << " " << std::endl;
        std::cout << "Meal - " << day << "\ncalories: " << calorie << "\nprotein: " << protein << std::endl;
        day++;
    }
};

class Menu {
public:
    Meal entry;
    int question = 0;
    int pass = 0;
    void display(bool& program) {  // Pass by reference
        if(pass == 0) {
            std::cout << "Hello! Would you like to count? 1/yes 0/no" << std::endl; 
            pass ++;
            std::cin >> question;
        }
        if(question == 0) {
            std::cout << "Have a good day! " << std::endl;
            program = false;
        }
        if(question == 1) {
            entry.meal();
            program = false;
        }
    }
};

class Loop {
public:
    Menu start;
    bool program = true;

    void suma() {
        while(program) {
            start.display(program);
        }
    }
};

int main(int argc, char* argv[]) {
    Loop test;
    test.suma();
}

