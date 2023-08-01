#include <iostream>
using namespace std;
 
int main()
{
    int x, y;
    int sum, subtraction, product, modulo;
    float quotient;
     
    cout << "Enter First Number\n";
    cin >> x;
    cout << "Enter Second Number\n";
    cin >> y;
      
    sum = x + y; 
    subtraction = x - y;
    product = x * y;
    quotient = (float)x / y;
    modulo = x % y;
     
    cout << "\nSum = " << sum;
    cout << "\nsubtraction  = " <<subtraction;
    cout << "\nMultiplication = " << product;
    cout << "\nDivision = " << quotient;
    cout << "\nRemainder = " << modulo;
     
    return 0;
}