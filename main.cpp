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
    int question = 1;
    int iteration;
    void display(bool& program) {  // Pass by reference
        if(question == 1) {
            std::cout << "Enter 1 to start, 0 to quit " << std::endl;
            std::cin >> iteration;
            question = 0;
            }        
            if(iteration == 1) {
                entry.meal();  
            } else if (iteration == 0) {
                std::cout << "Good bye, have a good day! " << std::endl;
                program = false;
            }
    }
};

class Loop {
public:
    Menu start;
    bool program = true;
    bool cont;

    void suma() {
        while(program) {
            start.display(program);
            std::cout << " " << std::endl;
            std::cout << "Continue? 1/0" << std::endl;
            std::cin >> cont;
            if(cont == 1) {
                start.display(program);
            } else {
                std::cout << "Have a good day! " << std::endl;
                program = false;
            } 
        }
    }
};

int main(int argc, char* argv[]) {
    Loop test;
    test.suma();
}

