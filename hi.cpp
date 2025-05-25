//contributed by Seema Sharma
#include <iostream>
int add(int x, int y) 
{
    return x + y;
}
int main() {
    int a, b;
    std::cout << "Enter two numbers: ";
    if (!(std::cin >> a >> b)) {
        std::cout << "Invalid input!" << std::endl;
        return 1;
    }
    std::cout << "Sum is: " << add(a, b) << std::endl;
    return 0;
}
