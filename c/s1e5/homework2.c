#include <stdio.h>

#define FANQIE 3.7
#define JIELAN 7
#define XIQIN 1.3
#define KONGXINCAI 8
#define YANGCONG 2.4
#define YOUCAI 9
#define HUANGGUA 6.3
#define BAILUOBO 0.5

int main()
{
	float xiaoMing = (2 * FANQIE + KONGXINCAI + YOUCAI) * 0.5;
	float xiaoHong = (3 * XIQIN + 0.5 * YANGCONG + 5 * HUANGGUA) * 0.5;
	float xiaoJiaYv = (10 * HUANGGUA + 20 * BAILUOBO) * 0.5;

	printf("小明需要支付%.2f元\n小红需要支付%.2f元\n小甲鱼需要支付%.2f元\n", xiaoMing, xiaoHong, xiaoJiaYv);

	return 0;
}
