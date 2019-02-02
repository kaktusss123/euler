#include <iostream>
using namespace std;

bool can_be_divided(int n) {
    for (int i = 1; i <= 20; i++) {
        if (n % i) { return false; }
    }
    return true;
}

int main() {
    for (int i = 20; i < 1000000000; i++) {
        if (can_be_divided(i)) {
            cout << i;
            break;
        }
    }
    return 0;
}
