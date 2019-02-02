#include <iostream>
using namespace std;

int sq_sum() {
    int sum = 0;
    for (int i = 1; i <= 100; i++) {
        sum += i * i;
    }
    return sum;
}

int sum_sq() {
    int sum = 0;
    for (int i = 1; i <= 100; i++) {
        sum += i;
    }
    return sum * sum;
}

int main() {
    cout << sum_sq() - sq_sum();
    return 0;
}