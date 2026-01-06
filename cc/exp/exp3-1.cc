#include <iostream>
#define MAX 256
using namespace std;

size_t getlen(const char *s)
{
	if (s == NULL) return 0;
	int len = 0;
	for(len = 0; s[len] != '\0'; len++) ;
	return len;
}

template <typename T>
int swap_ptr(T *p1, T *p2)
{
	T t = *p1;
	*p1 = *p2;
	*p2 = t;
	return 0;
}

template <typename T>
int swap_ref(T &r1, T &r2)
{
	T t = r1;
	r1 = r2;
	r2 = t;
	return 0;
}

int main(void)
{
	// 指针倒序输出
	int len = 0, arr[MAX] = {};
	for (len = 0; len < MAX && cin >> arr[len]; len++) ;
	int *p_arr = &arr[len-1];
	for (int i = len-1; i >= 0 && cout << *(arr + i) << ' '; i--) ;
	cout << endl;

	// 字符串长度
	cout << "字符串长度为：" << getlen("abc") << endl;

	// 互换
	int a = 1, b = 2;
	cout << a << ' ' << b << endl;
	swap_ptr(&a, &b);
	cout << a << ' ' << b << endl;
	swap_ref(a, b);
	cout << a << ' ' << b << endl;
}
