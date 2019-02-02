#include <iostream>
#include <vector>

using namespace std;

bool is_prime(int num, vector<int> &primes) {
  for (int i: primes) {
    if (!(num % i)) {
      return false;
    }
  }
  primes.push_back(num);
  return true;
}

int find_prime(int num, vector<int> &primes) {
  int counter = 6;
  int number = 14;
  while (counter < num) {
    if (is_prime(number, primes)) { counter++; }
    number++;
  }
  return primes[primes.size() - 1];
}

int main() {
  vector<int> primes;
  primes.push_back(2);
  primes.push_back(3);
  primes.push_back(5);
  primes.push_back(7);
  primes.push_back(11);
  primes.push_back(13);
  cout << find_prime(10001, primes);
  return 0;
}