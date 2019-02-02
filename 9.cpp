#include <iostream>
using namespace std;

int find_triplet() {
  for (int a = 1; a < 500; a++) {
    for (int b = a; b < 500; b++) {
      int c = 1000 - a - b;
      if (a * a + b * b == c * c) {
        return a * b * c;
      }
    }
  }
  return -1;
}

int main() {
  cout << find_triplet();
  return 0;
}