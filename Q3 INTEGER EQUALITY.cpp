#include <iostream>

int main() 
{
    int a, b, c;

    std::cout << "Enter three integers separated by spaces: ";
    std::cin >> a >> b >> c;

    // Check if a equals b AND b equals c
    if (a == b && b == c) 
    {
        std::cout << "Equal" << std::endl;
    } 
    else 
    {
        std::cout << "Not equal" << std::endl;
    }

    return 0;
}
