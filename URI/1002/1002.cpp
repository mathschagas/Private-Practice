#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
    double pi = 3.14159;
    double raio = 0.0;
    double area = 0.0;

    cin >> raio;

    area = pi * raio * raio;
    
    cout << fixed;
    cout.precision(4);
    cout << "A=" << area << endl;

    return 0;
}