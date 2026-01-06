#include<iostream> 
#include<string>
#include<cmath>
using namespace std;

class Complex
{
    public:
        double real = 0;
        double imaginary = 0;
    public:
        Complex() {};
        Complex(double rP, double iP) : real{rP}, imaginary{iP} {};
        Complex(const Complex &target) : real{target.real}, imaginary{target.imaginary} {};
        ~Complex() { cout << "析构函数" << endl; }
        void show() const;
        double model();
        Complex add(const Complex com);
};

void Complex::show() const
{
    cout << real << '+' << imaginary << 'i' << endl;
}
double Complex::model() 
{
    return sqrt(pow(real, 2) + pow(imaginary, 2));
}
Complex Complex::add(const Complex com)
{
    return Complex(real + com.real, imaginary + com.imaginary);
}

int main()
{
    //无参构造函数
    Complex com = Complex();
    com.real = 2;
    com.imaginary = 2;
    //输出函数
    com.show();
    //求模函数
    cout << "复数的模"<<com.model() << endl;
    //有参构造函数
    Complex other = Complex(1, 3);
    other.show();
    //加法函数
    Complex res = com.add(other);
    res.show();
    return 0;
}
