#include <iostream>
#define MAX 256
using namespace std;

void printMatrix(int *p_matrix, const int RAWS, const int COLS);
void swapMatrix(int *p_matrix, const int RAWS, const int COLS);

int main(void)
{
	// 数组顺逆
	double f_arr[MAX] = {};
	int len;
	for (len = 0; len < MAX && cin >> f_arr[len]; len++);
	cin.clear();
	cin.ignore(10000, '\n');
	for (int i = 0; i < len; i++)
		cout << f_arr[i] << ' ';
	cout << '\n';
	for (int i = len-1; i >= 0; i--)
		cout << f_arr[i] << ' ';
	cout << '\n';

	//矩阵互换
	int d_arr[3][3] = {
			{1, 2, 3}, 
			{4, 5, 6}, 
	    		{7, 8, 9}};
	printMatrix(&d_arr[0][0], 3, 3);
	swapMatrix(&d_arr[0][0], 3, 3);
	printMatrix(&d_arr[0][0], 3, 3);

}

void printMatrix(int *p_matrix, const int RAWS, const int COLS)
{
	for (int i = 0; i < RAWS; i++)
	{
		for (int j = 0; j < COLS; j++)
			cout << p_matrix[i * COLS + j] << ' ';
		cout << endl;
	}
	return;
}
void swapMatrix(int *p_matrix, const int RAWS, const int COLS)
{
	for (int i = 0; i < RAWS; i++)
		for (int j = i + 1; j < COLS; j++)
		{
			swap(p_matrix[i * RAWS + j], p_matrix[j * RAWS + i]);
		}
}
