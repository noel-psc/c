#include <iostream>
#define PI 3.1415926535

int main(void)
{
	int a1, a2, b1, b2;
	a1 = 1, a2 = 2;
	std::cout << "静态输入求和: " << a1 + a2 << std::endl;
	std::cin >> b1 >> b2;
	std::cout << "用户输入求和: " << b1 + b2 << std::endl;
	
	float r, h, C, S1, S2, V;
	std::cin >> r >> h;
	C = 2 * PI * r;
	S1 = PI * r * r;
	S2 = C * h + 2 * S1;
	V = S1 * h;
	std::cout << "圆周长: " << C 
		  << ", 圆面积: " << S1 
		  << ", 圆柱表面积: " << S2 
		  <<", 圆柱体积: " << V << std::endl; 
}
