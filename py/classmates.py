#查询
class Classmates(object):
    #属性
    def __init__(self, name, age, weight, height):
        self.name, self.age, self.weight, self.height = name, age, weight, height
    #方法
    def info(self):
        print('姓名：', self.name, '\n年龄：', self.age, '\n身高：', self.height, '\n体重：', self.weight, '\n', sep='')
        
#创建对象
郭鑫昊 = Classmates('郭鑫昊', 15, 175, 90)

曲世腾 = Classmates('曲世腾', 14, 166, 50)

郭鑫昊.info()
曲世腾.info()

input('\n按任意键退出')
