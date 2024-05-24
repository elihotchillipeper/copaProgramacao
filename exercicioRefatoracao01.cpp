#include <iostream>
#include <vector>

int multiply(int a, int b) {
    return a * b;
}

int calculateFactorial(int n) {
    if (n <= 1) return 1;
    int result = 1;
    for (int i = 2; i <= n; ++i) {
        result = multiply(result, i);
    }
    return result;
}

int main() {
    int number;

    std::cout << "Entre um número: ";
    std::cin >> number;

    int factorial = calculateFactorial(number);
    std::cout << "O fatorial de " << number << " é " << factorial << std::endl;

    return 0;
}

//O código pede um número e imprime seu fatorial.

/*#include <vector>
void helloFunction() {
    std::cout << "Olá mundo." << std::endl;
}           // não é necessário

void printVector(const std::vector<int>& vec) {
    for (int i = 0; i < vec.size(); ++i) {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;
}           // não é necessário
//std::vector<int> arrayVector = {1, 2, 3, 4, 5};  não é nencessário

for (int i = 0; i < 10; ++i) {
        // Useless loop
    }       //loop inútil

for (int i = 0; i < 5; ++i) {
        // Another useless loop
    }       //loop inútil

    unusedFunction();  // This function is not needed
    printVector(unusedVector);  // This vector is not used meaningfully*/
            //função inútil