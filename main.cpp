#include <iostream>

class Calculator {
    public:
        Calculator() {
            this->num1 = 0;
            this->num2 = 0;
        }
        Calculator(double num1, double num2) {
            this->num1 = num1;
            this->num2 = num2;
        }
        double add() {
            return num1 + num2;
        }
        double multiply() {
            return num1 * num2;
        }
        double subtract_1_2() {
            return num1 - num2;
        }
        double subtract_2_1() {
            return num2 - num1;
        }
        double divide_1_2() {
            return num1 / num2;
        }
        double divide_2_1() {
            return num2 / num1;
        }
        bool set_num1(double num1) {
            this->num1 = num1;
            if (this->num1 == num1) {
                return true;
            }
            else {
                return false;
            }
        }
        bool set_num2(double num2) {
            this->num2 = num2;
            if (this->num2 == num2) {
                return true;
            }
            else {
                return false;
            }
        }
    private:
        double num1;
        double num2;
};

int main() {
    Calculator calc = Calculator();

    while (true) {
        double num1 = 0;
        double num2 = 0;
        bool setnum = false;

        std::cout << "Введите num1: ";
        std::cin >> num1;
        setnum = calc.set_num1(num1);
        while (std::cin.fail() || setnum == false) {
            std::cout << "Неверный ввод! \nВведите num1: ";
            std::cin.clear();
            std::cin >> num1;
            setnum = calc.set_num1(num1);
        }

        std::cout << "Введите num2: ";
        std::cin >> num2;
        setnum = calc.set_num2(num2);
        while (std::cin.fail() || setnum == false) {
            std::cout << "Неверный ввод! \nВведите num2: ";
            std::cin.clear();
            std::cin >> num2;
            setnum = calc.set_num2(num2);
        }

        std::cout << "num1 + num2 = " << calc.add() << "\n";
        std::cout << "num1 - num2 = " << calc.subtract_1_2() << "\n";
        std::cout << "num2 - num1 = " << calc.subtract_2_1() << "\n";
        std::cout << "num1 * num2 = " << calc.multiply() << "\n";
        std::cout << "num1 / num2 = " << calc.divide_1_2() << "\n";
        std::cout << "num2 / num1 = " << calc.divide_2_1() << "\n";
    }

    return 0;
}