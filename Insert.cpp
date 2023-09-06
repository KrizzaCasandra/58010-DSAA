#include <iostream>
using namespace std;

int main() {
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int new_item = 99;  
    int position = 0;   

    
    int current_size = sizeof(numbers) / sizeof(numbers[0]);
    int new_numbers[current_size + 1];

    for (int i = 0; i <= position; i++) {
        new_numbers[i] = numbers[i];
    }

    new_numbers[position + 1] = new_item;

    for (int i = position + 1; i < current_size; i++) {
        new_numbers[i + 1] = numbers[i];
    }

    cout << "Updated array: ";
    for (int i = 0; i < current_size + 1; i++) {
        cout << new_numbers[i] << " ";
    }
    cout << endl;

    return 0;
}
