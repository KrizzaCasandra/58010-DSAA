#include <iostream>
using namespace std;

int main() {
    int numbers[] = {5, 4, 3, 2, 1};
    int length = sizeof(numbers) / sizeof(numbers[0]);

    // Swap elements to reverse the array
    for (int i = 0; i < length / 2; i++) {
        int temp = numbers[i];
        numbers[i] = numbers[length - 1 - i];
        numbers[length - 1 - i] = temp;
    }

    // Display the reversed array
    cout << "Reversed array: ";
    for (int i = 0; i < length; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}
