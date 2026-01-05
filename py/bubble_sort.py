# import random
def bubble_sort(ls):
    length = len(ls)
    n, num = 0, 0 # n为列表下标, num为计数器
    a=1
    # 冒泡排序循环趟数为元素数-1
    while num < length - 1:
        n = 0 # 每次循环前列表下标清0
        while n < length - 1: # 防止数组越界
            if ls[n] > ls[n+1]:
                # n是第一个数, n+1是第二个数
                ls[n], ls[n+1] = ls[n+1], ls[n]
            # print(n, ls, length)
            n += 1
            a += 1
        # 一趟完成后计数器+1
        num += 1
    return ls

def input_num_ls():
    ls = list() # 声明ls为列表

    print("请输入要排序的数字(支持浮点数, 输入完一个数字后回车)：")
    while True:
        n = input()
        # n = random.randint(1000, 9999)
        # i += 1

        # if i == 1000:
        #     break

        if n == '':
            # 检测到输入为空时结束输入循环
            break
        else:
            # 否则将输入数字转换为float并添加到数组(异常处理懒得搞了)
            ls.append(float(n))
            continue
    return ls

def __main__():
    print("----------冒泡排序算法----------")
    ls = input_num_ls()
    print(bubble_sort(ls))

    input("按任意键退出")

if __name__ == '__main__':
    __main__()