
#include <iostream>

using namespace std;

int main()
{
   int n, sum = 0;
   cout <<"Enter a positive integer: "; //nhap so nguyen duong
   cin >> n;
   for (int i=1 ; i<=n; i++) {
       sum +=i*i;
   }
   
   cout << "Sum = "<< sum;
   return 0;
}
