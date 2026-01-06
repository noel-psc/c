#include <iostream>
#include <cmath>

int main(void)
{
	// 求和
	int a, b, c, max;
	std::cin >> a >> b >> c;
	max = (a > b) ? ((a > c) ? a : c)
		      : ((b > c) ? b : c);
	std::cout << "最大值: " << max << std::endl 
		  << "源数据: " << a << ' ' << b << ' ' << c << std::endl;

	// 成绩
	int score;
	char level;
	std::cin.ignore(1000, '\n');
	std::cin >> score;
	// if
	if (score >= 90)
		level = 'A';
	else if (score >= 80)
		level = 'B';
	else if (score >= 70)
		level = 'C';
	else if (score >= 60)
		level = 'D';
	else
		level = 'E';
	std::cout << level << std::endl;
	// switch
	switch (score / 10)
	{
		case 10: 
		case 9: level = 'A'; break;
		case 8: level = 'B'; break;
		case 7: level = 'C'; break;
		case 6: level = 'D'; break;
		default: level = 'E'; break;
	}
	std::cout << level << std::endl;

	// 解方程
	double a1, b1, c1, delta, res;
	std::cin.ignore(1000, '\n');
	std::cin >> a1 >> b1 >> c1;
	if (a1 == 0)
	{
		if (b1 == 0)
		{
			if (c1 == 0)
			{
				std::cout << "有无穷个根\n";
			}
			else
			{
				std::cout << "NULL\n";
			}
		}
		else
		{
			res = -c1 / b1;
			std::cout << res;
		}
		return 0;
	}
	delta = pow(b1, 2) - 4 * a1 * c1;
	if (delta >= 0)
		std::cout << (-b1 + sqrt(delta)) / (2 * a1) << '\n'
		       	  << (-b1 - sqrt(delta)) / (2 * a1) << std::endl;
	else
		std::cout << -b1 / (2 * a1) << '+' << sqrt(-delta) / (2 * a1) << 'i' << '\n'
		       	  << -b1 / (2 * a1) << '-' << sqrt(-delta) / (2 * a1) << 'i' << std::endl;
}
