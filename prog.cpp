#include <iostream>
using namespace std;

int main() {
    int numbers[] = { 12, 45, 7, 89, 23 };
    int max = numbers[0];

    for (int i = 1; i < 5; i++) {
        if (numbers[i] > max) max = numbers[i];
    }

    cout << max << endl;
    return 0;
}