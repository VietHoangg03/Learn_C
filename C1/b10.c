#include <iostream>

using namespace std;

int main() {
    int n;
    double x, result = 1;
    cout << "Enter x: ";
    cin >>x;
    cout << "Enter n: ";
    cin >> n;
    for(int i = 1; i<=n; ++i) {
        result *=x;
    }
    cout <<"result = "<< result;
    return 0;
}
