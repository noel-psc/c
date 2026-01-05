d, b=[], []
res = 0

#生成整型列表
maxn = int(input("请输入小于9的牌数："))
max_b = "1"*maxn
max_d = int(max_b, 2)
# print(max_b, max_d)

#转化为二进制列表
d = range(1, max_d+1)
for d_ in d:
    a = f"{d_:b}"
    b.append(f"{a:0>8}")
# print(b)

#将b中原数据筛选分类加入ls
ls = [list() for i in range(8)]
for b_ in b:
    i = 0
    n = 0
    while n < 8 and n < len(b_):
        if b_[n] == "1":
            ls[i].append(b_)
        n += 1
        i += 1
# print(ls)
h = 1
for i in ls:
    print(f"第{h}张牌：", end='')
    for j in i:
        print(f"{int(j, 2)}", end=' ')
    print()
    h += 1

resp = 0
j = 1
k = 7
for i in range(8):
    print(f"第{j}张牌有你想的数字吗？")
    resp = int(input("有(1)或无(0)："))
    if resp == 1:
        res += resp*2**k
    j += 1
    k -= 1
    
print(res)
