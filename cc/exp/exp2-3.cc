#include <iostream>
#include <print>
#define MAX 256
using namespace std;

template<typename T>
int sort(T arr[], int len)
{
	for (int i = 0; i < len-1; i++)
	{
		int min_index = i;
		for (int j = i+1; j < len; j++)
		{
			if (arr[j] < arr[min_index])
				min_index = j;
		}
		swap(arr[i], arr[min_index]);
	}

	return 0;
}

template<typename T>
int get_index(T target, T arr[], int len)
{
	int index = 0;
	for (index = 0; index < len && target > arr[index]; index++) ;
	return index;
}

template<typename T>
int insert(T target, int index, T arr[], int len)
{
	for (int i = index; i < len; i++)
	{
		swap(arr[i], target);
	}
	return 0;
}

int main(void)
{
	// 大写、小写、数字、空格、逗号
	int count[5] = {};
	char s[] = "C is a general purpose, procedural, imperative computer   programming language  developed in 1972 by Dennis Ritchie at the Bell Telephone  Laboratories for use with the Unix operating system.";
	for (int i = 0; s[i] != '\0'; i++)
	{
		if ('A' <= s[i] && s[i] <= 'Z')
			count[0]++;
		else if ('a' <= s[i] && s[i] <= 'z')
			count[1]++;
		else if ('0' <= s[i] && s[i] <= '9')
			count[2]++;
		else if (s[i] == ' ')
			count[3]++;
		else if (s[i] == ',')
			count[4]++;
	}
	print("大写字母{}个，小写字母{}个，数字{}个，空格{}个，逗号{}个\n", 
		count[0], count[1], count[2], count[3], count[4]);

	// 数组排序、插入
	int len = 0;
	double arr[MAX] = {};
	cout << "输入一组数据（非数字结束）：";
	for (len = 0; cin >> arr[len]; len++) ;
	cin.clear();
	cin.ignore(10000, '\n');

	sort(arr, len);
	for (int i = 0; i < len && cout << arr[i] << ' '; i++) ;
	cout << endl;
	double target;
	cin >> target;
	insert(target, get_index(target, arr, len), arr, ++len);
	for (int i = 0; i < len && cout << arr[i] << ' '; i++) ;
	cout << endl;
}
