#include <iostream>
#include <iomanip>
#define NS 5
#define NC 3
using namespace std;

struct Date {int year, month, day; };
struct Stu 
{
	int num; string name; int score[NC];
	double avr()
	{
		double sum = 0;
		for (int i = 0; i < NC; i++)
			sum += score[i];
		return sum / NC;
	}
	int list_inf()
	{
		cout << setw(10) << num  
			 << setw(10) << name 
			 << setw(10) << score[0] 
			 << setw(10) << score[1] 
			 << setw(10) << score[2]
			 << setw(10) << avr() << endl;
		return 0;
	}
};

bool is_leap(int year)
{
	return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

template<typename T>
int my_sort(T arr[], int len)
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
int my_sort(int index[], T arr[], int len)
{
	for (int i = 0; i < len; i++)
		index[i] = i;
	for (int i = 0; i < len-1; i++)
	{
		int min_index = i;
		for (int j = i+1; j < len; j++)
		{
			if (arr[index[j]] < arr[index[min_index]])
				min_index = j;
		}
		swap(index[i], index[min_index]);
	}
	return 0;
}

int main(void)
{
	// 算日子
	Date today{2025, 10, 29};
	int days = today.day;
	for (int m = 1; m < today.month; m++)
	{
		switch (m)
		{
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:
				days += 31;
				break;
			case 4:
			case 6:
			case 9:
			case 11:
				days += 30;
				break;
			case 2:
				days += is_leap(today.year) ? 29 : 28;
				break;
			default:
				return -1;
		}
	}
	cout << days << endl;

	// 平均成绩
	Stu stus[NS]{
		{101, "Zhou", 93, 89, 87}, 
		{102, "Yang", 85, 80, 78}, 
		{103, "Chen", 77, 70, 83}, 
		{104, "Qian", 70, 67, 60}, 
		{105, "Li", 72, 70, 69}};
	cout << setw(10) << "No" 
	     << setw(10) << "name" 
	     << setw(10) << "score1" 
	     << setw(10) << "score2" 
	     << setw(10) << "score3" 
	     << setw (10) << "average" << endl;
	for (int i = 0; i < NS; i++)
		stus[i].list_inf();

	// 排序成绩
	double score[NS] = {};
	int index[NS] = {};
	for (int i = 0; i < NS; i++)
		score[i] = stus[i].avr();
	my_sort(index, score, NS);
	cout << setw(10) << "No" 
	     << setw(10) << "name" 
	     << setw(10) << "score1" 
	     << setw(10) << "score2" 
	     << setw(10) << "score3" 
	     << setw (10) << "average" << endl;
	for (int i = 0; i < NS; i++)
		stus[index[i]].list_inf();
}
