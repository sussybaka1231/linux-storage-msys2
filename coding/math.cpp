#include <iostream>
#include <cstdlib>

int main(int argc, char *argv[]) {
    if (argc != 4) {
        std::cout << "Invalid number of arguments. Usage: <operand1> <operator> <operand2>\n";
        return 1;
    }

    double first = std::stod(argv[1]);
    char op = argv[2][0];
    double second = std::stod(argv[3]);
    double result = 0.0;

    if (op == '+') {
        result = first + second;
    }
    else if (op == '-') {
        result = first - second;
    }
    else if (op == '*') {
        result = first * second;
    }
    else if (op == '/') {
        if (second == 0) {
            std::cout << "Error: Division by zero\n";
            return 1;
        }
        result = first / second;
    }
    else {
        std::cout << "Invalid operator. Try again.\n";
        return 1;
    }

    std::cout << "Result: " << result << "\n";
    return 0;
}
