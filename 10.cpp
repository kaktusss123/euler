#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

bool prime(int n, vector<int> &primes) {
  for (int i = 2; i <= sqrt(n); i++)
    if (n % i == 0)
      return false;
  primes.push_back(n);
  return true;
}

bool is_prime(int num, vector<int> &primes) {
  for (int i: primes) {
    if (!(num % i)) {
      return false;
    }
  }
  primes.push_back(num);
  return true;
}

int find_sum(int limit, vector<int> &primes) {
  int num = 6;
  while (num < limit) {
    prime(num++, primes);
  }
  int sum = 0;
  for (int prime: primes)
    sum += prime;
  return sum;
}

int main() {
  vector<int> primes;
  primes.push_back(2);
  primes.push_back(3);
  primes.push_back(5);
  cout << find_sum(2000000, primes);
  return 0;
}
