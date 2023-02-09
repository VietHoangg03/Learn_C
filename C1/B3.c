
#include <iostream>

using namespace std;

int main()
{
   int n;
   double sum = 0.0;
   cout <<"Enter a positive integer: "; //nhap so nguyen duong
   cin >> n;
   for (int i=1 ; i<=n; i++) {
       sum +=1.0/i;
   }
   
   cout << "Sum = "<< sum;
   return 0;
}
