#include <iostream>
#define N 3
using namespace std;

class Group
{
	private:
		double score[N] = {};
	public:
		Group() = default;
		Group(double s[]) : score{s[0], s[1], s[2]} {}
		friend ostream& operator<<(ostream &os, const Group &obj)
		{
			for (int i = 0; i < N; i++)
				os << obj.score[i] << ' ';
			return os;
		}
};

int main(void)
{
	double s[] = {66, 77, 88};
	Group a{s};
	cout << a << endl;
}
