#include <iostream>
using namespace std;

int main() {
    int n;
    int Product = 1;
    cout <<"Nhap so nguyen duong N: ";
    cin >>n;
    for (int i=1; i<= n; i++) {
        Product*=i;
        
    }
    cout <<"Product = "<< Product;
    return 0;
    
}
