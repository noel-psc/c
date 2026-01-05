num = input('请输入一个整数：')
num, temp = int(num), 1
while num >= temp:
    print(temp)
    temp = temp + 1
