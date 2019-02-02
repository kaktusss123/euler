#include <iostream>
using namespace std;

bool is_palindrome(int num) {
     string snum = to_string(num);
     for (int i = 0; i < snum.size() / 2; i++) {
         if (snum[i] != snum[snum.size() - i - 1]) {
             return false;
         }
     }
     return true;
}

int main() {
    int max = 0;
    for (int i = 999; i > 0; i--) {
        for (int j = 999; j > 0; j--) {
            if (is_palindrome(i * j) && i * j > max) {
                max = i * j;
            }
        }
    }
    cout << max;
    return 0;
}