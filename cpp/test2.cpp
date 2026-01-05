#include <cstdio>
using namespace std;

//判断一个数是否属于该数组
bool isInArray(int target, int arr[], int size) {
	for (int i = 0; i < size; i++) {
		if (arr[i] == target) {
			return true;
		}
	}
	return false;
}