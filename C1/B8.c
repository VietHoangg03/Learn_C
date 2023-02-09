
#include <iostream>

using namespace std;

int main()
{
   int n;
   double sum = 0.0;
   cout <<"Enter a positive integer: "; //nhap so nguyen duong
   cin >> n;
   for (int i=0 ; i<=n; i++) {
       sum +=(double)(2*i+1)/(2*i+2); //ep kieu int qua double
       
   }
   
   cout << "Sum = "<< sum;
   return 0;
}
