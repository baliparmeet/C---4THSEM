#include <iostream>
using namespace std;

class Complex {
private:
    
    float real;
    float imag;
public:
    void setValues(float r, float i) {//
        real = r;
        imag = i;
    }
    Complex multiply(Complex c) {
        Complex temp;
        temp.real = (real * c.real) - (imag * c.imag);
        temp.imag = (real * c.imag) + (imag * c.real);
        return temp;
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1, c2, result;
    float r1, i1, r2, i2;

    cout << "Enter real and imaginary part of first number: ";
    cin >> r1 >> i1;
    c1.setValues(r1, i1);

    cout << "Enter real and imaginary part of second number: ";
    cin >> r2 >> i2;
    c2.setValues(r2, i2);
    result = c1.multiply(c2);

    cout << "\nFirst Complex Number: ";
    c1.display();
    cout << "Second Complex Number: ";
    c2.display();
    cout << "Product: ";
    result.display();

    return 0;
}
