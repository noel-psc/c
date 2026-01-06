#include <stdio.h>

int main(void)
{
	int days[] = {31, 30, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int day1, day2, month1, month2, year1, year2;
	long count = 0;

	printf("请输入你的生日（如1988-05-20）：");
	scanf("%d-%d-%d", &year1, &month1, &day1);
	printf("请输入今年日期（如2016-03-28）：");
	scanf("%d-%d-%d", &year2, &month2, &day2);

	while (year1 <= year2)
	{
		days[1] = (year1 % 400 == 0 || (year1 % 4 == 0 && year1 % 100 != 0)) ? 29 : 28;
		while (month1 <= 12)
		{
			while (day1 <= days[month1 - 1])
			{
				if (year1 == year2 && month1 == month2 && day1 == day2)
				{
					goto FINISH;
				}
				count++;
				day1++;
			}
			month1++;
			day1 = 0;
		}
		year1++;
		month1 = 0;
	}

FINISH: printf("你在这个世界上总共生存了%ld天\n", count);

	return 0;
}
