
#include <iostream>

using namespace std;

int main()
{
   int n;
   double sum = 0.0;
   cout <<"Enter a positive integer: "; //nhap so nguyen duong
   cin >> n;
   for (int i=0 ; i<=n; i++) {
       sum +=1.0/(2*i+1);
   }
   
   cout << "Sum = "<< sum;
   return 0;
}
