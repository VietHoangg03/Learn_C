#include <iostream>
using namespace std;

int Sum(int n) {
    if (n == 1) {
        return 1;
    }else {
        return n + Sum(n-1); // de quy
    }
}

int main() {
   int n;
   cout << "Nhap so n : ";
   cin >>n;
   cout << "Sum = "<< Sum(n);
    return 0;
}
