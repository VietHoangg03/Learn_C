#include <iostream>
#include <cmath>
using namespace std;

int sum(int x, int n) {
   if (n == 0) {
      return 0;
   } else {
      return pow(x, n) + sum(x, n-1);
   }
}

int main() {
   int x, n;
   cout << "Enter x: ";
   cin >> x;
   cout << "Enter n: ";
   cin >> n;
   cout << "Sum = " << sum(x, n);
   return 0;
}
