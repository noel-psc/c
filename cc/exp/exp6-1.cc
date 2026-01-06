#include <iostream>
using namespace std;

class Vector
{
	private:
		double x{0}, y{0};
	public:
		Vector() = default;
		Vector(double x, double y) : x{x}, y{y} {}
		void print() const
		{
			cout << '(' << x << ", " << y << ')' << endl;
		}
		Vector operator + (const Vector &v) const
		{
			return Vector(x + v.x, y + v.y);
		}
};

int main(void)
{
	double x1, x2, y1, y2;
	cout << "请输入向量a的x、y：";
	cin >> x1 >> y1;
	Vector a(x1, y1);
	cout << "请输入向量b的x、y：";
	cin >> x2 >> y2;
	Vector b(x2, y2);
	cout << "a、b向量和：";
	(a + b).print();
}
