#include <iostream>
#include <limits>
#include <vector>

struct Meal {

    int calorie = 0;
    int protein = 0;
    int day     = 1;

    int totalCalories = 0;
    int totalProtein  = 0;

    void mealInput() {
        std::cout << " " << std::endl;
        std::cout << "Enter calorie for food, then hit enter: " << std::endl;
        while (!(std::cin >> calorie) || calorie < 0) {
            std::cout << "Invalid input. Please enter a positive integer for calories: " << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }

        std::cout << "Now, enter the grams of protein of entered food: " << std::endl;
        while (!(std::cin >> protein) || protein < 0) {
            std::cout << "Invalid input. Please enter a positive integer for protein: " << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }

        std::cout << " " << std::endl;
        std::cout << "Meal - " << day << "\ncalories: " << calorie << "\nprotein: " << protein << std::endl;

        day++;
        totalCalories += calorie;
        totalProtein += protein;
        std::cout << " " << std::endl;
        std::cout << "Total protein: " << totalProtein << "\nTotal calories: " << totalCalories << std::endl;
    }
};

class Menu {
public:
    Meal entry;

    int prompt = 0;
    int pass   = 0;

    void display(bool& program) {  
        if(prompt == 0) {
            std::cout << "Hello! Would you like to count? 1/yes 0/no " << std::endl;
            while (!(std::cin >> pass) || (pass != 0 && pass != 1)) {
                std::cout << "Invalid input. Please enter 1 for yes or 0 for no: " << std::endl;
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            }
            prompt = 1;
        }
        if(pass == 0) {
            std::cout << " " << std::endl;
            std::cout << "Have a great day! " << std::endl;
            program = false;
        } else if(pass == 1) {
            entry.mealInput();
            std::cout << " " << std::endl;
            std::cout << "Continue to add? 1/yes 0/no " << std::endl;
            while (!(std::cin >> pass) || (pass != 0 && pass != 1)) {
                std::cout << "Invalid input. Please enter 1 for yes or 0 for no: " << std::endl;
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            }
            if (pass == 0) {
                program = false;
                std::cout << "Have a great day! " << std::endl;
            }
        } else {
            std::cout << "Make sure to enter EITHER 1 or 0 " << std::endl;
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

int main() {
    Loop test;
    test.suma();
}
