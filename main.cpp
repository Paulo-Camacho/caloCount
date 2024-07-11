#include <iostream>

struct Meal {
    int calorie = 0;
    int protein = 0;
    int totalProtein = 0;
    int totalCalorie = 0;
    int day = 1;

    void mealInput() {
        std::cout << " " << std::endl;
        std::cout << "Enter calorie for food, then hit enter: " << std::endl;
        std::cin  >> calorie;
        std::cout << "Now, enter the grams of protein of entered food: " << std::endl;
        std::cin  >> protein;
        std::cout << " " << std::endl;
        std::cout << "Meal - " << day << "\ncalories: " << calorie << "\nprotein: " << protein << std::endl;
        day++;

    std::vector<Diary> diary;
        
    }
};

class Menu {
public:
    Meal entry;
    int prompt = 0;
    int pass   = 0;
    int resume = 0;
    void display(bool& program) {  // Pass by reference
        if(prompt == 0) {
            std::cout << "Hello! Would you like to count? 1/yes 0/no " << std::endl; 
            std::cin >> pass;
            prompt = 1;
        }
        if(pass == 0) {
            std::cout << " " << std::endl;
            std::cout << "Have a great day! " << std::endl;
            program = false;
        } else if(pass == 1) {
            entry.mealInput();
        } else {
            std::cout << "Make sure to enter EITHER 1 or 0 " << std::endl;
            program = false;
        }

        if(pass == 1) { 
            std::cout << " " << std::endl;
            std::cout << "Continue to add? 1/yes 0/no " << std::endl;
            std::cin >> pass; 
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

