import random

a=random.randint(1,100)
b=int(input("请输入你猜的数（1-100）:"))
count=1

while(a!=b):
  if a>b:
      print("猜小了")
  elif a<b:
      print("猜大了")
      
  b=int(input("请输入你猜的数（1-100）:"))
  count=count+1
  
print("恭喜，猜对了")
print("您一共猜了",count,"次")
input("感谢参与,Bye")
