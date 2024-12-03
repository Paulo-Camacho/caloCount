#include <iostream>

class Calculator
{
public:
    int protein{};
    int calories{};
    Calculator(int nm ,int nm2) : protein(nm), calories(nm2) {} 

    void show()
    {
        std::cout << "Protein " << protein << "\nCalories " << calories << std::endl;
    }
};

int main()
{
    Calculator genericCalculator(69, 69);   
    genericCalculator.show();
}
