while True:

    #输出前清屏
    print('\n'*28)
    
    print('请输入三角形三边长：')
    #将用户输入的a, b, c变量转换成int类型并分别赋值
    a, b, c = float(input('a = ')), float(input('b = ')), float(input('c = '))
    #判断a, b, c是否为三角形三边(是否符合两边之和大于第三边)
    if (a + b > c) and (b + c > a) and (c + a > b):
        #判断a, b, c是否满足勾股定理的逆定理
        if (a**2 + b**2 == c**2) or (b**2 + c**2 == a**2) or (c**2 + a**2 == b**2):
            print('是直角三角形')
        else:
            print('不是直角三角形') 
    else:
        print('不是三角形')

    input('\n按回车继续')
