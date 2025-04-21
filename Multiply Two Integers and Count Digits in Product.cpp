#include <iostream>
using namespace std;

int countDigits(int num) {
    int count = 0;
    while (num > 0) {
        count++;
        num /= 10;
    }
    return count;
}

int main() {
    int num1, num2, product;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    
    product = num1 * num2;
    cout << "Product - " << product << endl;
    cout << "Count of digits - " << countDigits(product) << endl;

    return 0;
}
