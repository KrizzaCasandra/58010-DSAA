#include <iostream>

int main() 
{
    int numbers[] = {5, 4, 3, 2, 1};
    int length = sizeof(numbers) / sizeof(numbers[0]);
    std::cout << "Original array: ";
    for (int i = 0; i < length; i++) 
	{
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;
    for (int i = 0; i < length / 2; i++)
	{
        int temp = numbers[i];
        numbers[i] = numbers[length - i - 1];
        numbers[length - i - 1] = temp;
    }
    std::cout << "Reversed array: ";
    for (int i = 0; i < length; i++) 
	{
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}

