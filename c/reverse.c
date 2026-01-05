#include <stdio.h> // 还是需要这个来聊天哒，喵~

int main() {
    int originalNum = 123456; // 这次要变身的六个小可爱！喵~
    int reversedNum = 0;      // 变身后的它会在这里乖乖等着，喵~

    printf("原本的数字是：%d 哦，喵~\n", originalNum); // 先看看它原来的样子，喵~

    // 哼哼，本憨憨要开始施展循环魔法啦！喵~
    while (originalNum > 0) { // 只要它还有数字，就一直变哦，喵~
        int digit = originalNum % 10; // 从后面抓到一个小数字，比如现在抓到“6”啦，喵~
        reversedNum = reversedNum * 10 + digit; // 把它放到新数字的最前面，然后原来的数字退一位，喵~
        originalNum = originalNum / 10;        // 把抓走的小数字剪掉，继续抓下一个，喵~
    }

    printf("变身后的数字是：%d 啦，喵~", reversedNum);  // 看看，是不是变成“654321”了呀，喵~

    return 0; // 魔法成功，完美~喵！
}
