#include <iostream>
using namespace std;

int main() {
    int numbers[] = {5, 4, 3, 2, 1};

    // Calculate the length of the array
    int length = sizeof(numbers) / sizeof(numbers[0]);

    // Display the length
    cout << "Length of the array: " << length << endl;

    return 0;
}

