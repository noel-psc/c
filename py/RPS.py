import random
import os
import time

#修改控制台窗口标题
os.system("title 石头剪刀布")

#用字典实现字符串和整型的转换
iToS = {0 : '石头', 1 : '剪刀', 2 : '布'}

#一个没用的开场awa
print('石头剪刀布的小游戏：')

#游戏循环体
while True:
    #开始新的一局游戏前刷新屏幕
    print("\n"*28)
    
    #接收电脑随机和玩家输入的信息
    computer = iToS[random.randint(0, 2)]
    player = input('请输入石头/剪刀/布：')

    #进行判断并储存结果
    if (computer == player):
        result = '--哦吼，平局！--'
    elif ((computer == '石头' and player == '剪刀') or (computer == '剪刀' and player == '布') or (computer == '布' and player == '石头')):
        result = '--很遗憾，你输了（太菜啦~）--'
    elif ((computer == '石头' and player == '布') or (computer == '剪刀' and player == '石头') or (computer == '布' and player == '剪刀')):
        result = '--恭喜你，打败了电脑！--'
    else:
        result = '这什么玄学错误给我整我不会了'

    #输出游戏结果
    print('你：' + player + '\n' + '电脑：' + computer)
    time.sleep(0.5)
    print(result)
    time.sleep(0.5)
        
    input('\n按回车继续游戏')
