#include <iostream>
using namespace std;

class Complex {
    int real, imaginary;

public:
    Complex(int r, int i) {
        real = r;
        imaginary = i;
    }

    Complex operator+(Complex obj) {
        return Complex(real + obj.real,
                       imaginary + obj.imaginary);
    }

    void display() {
        cout << real << " + " << imaginary << "i" << endl;
    }
};

int main() {
    Complex c1(5, 3);
    Complex c2(4, 2);

    Complex c3 = c1 + c2;

    cout << "First Complex Number: ";
    c1.display();

    cout << "Second Complex Number: ";
    c2.display();

    cout << "Addition: ";
    c3.display();

    return 0;
}
