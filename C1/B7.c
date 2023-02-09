
#include <iostream>

using namespace std;

int main()
{
   int n;
   double sum = 0.0;
   cout <<"Enter a positive integer: "; //nhap so nguyen duong
   cin >> n;
   for (int i=1 ; i<=n; i++) {
       sum +=(double)i/(i+1); //phai chuyen doi ep kieu int sang double vs i
   }
   
   cout << "Sum = "<< sum;
   return 0;
}
