#include <iostream>

long int Fib(int n) {
    if (n <= 1) {
        return n;
    }
    return (Fib(n - 1) + Fib(n - 2));
}

int main()
{
    setlocale(LC_ALL, "Russian");
    int n;
    do {
        std::cout << "Введите число: ";
        std::cin >> n;
    } while (n < 0);
    std::cout << "Число Фибоначчи под номером " << n << " равно " << Fib(n) << std::endl;
    return 0;
}