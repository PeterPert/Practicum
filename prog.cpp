#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int numbers[n];
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        numbers[i] = a;
    }
    int min = numbers[0];
    for (int i = 1; i < 5; i++) {
        if (numbers[i] < min) min = numbers[i];
    }

    cout << min << endl;
    return 0;
}