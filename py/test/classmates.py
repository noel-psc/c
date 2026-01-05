import random
import os


class Person():
	def __init__(self, name, age, gender):
		self.name = name
		self.age = age
		self.gender = gender
		self.health = 100
		self.breath = 100
		self.stress = 5
		self.hunger = 80
		self.expression = {'eat': ['！好吃，好吃！吃进肚子！', '太美味了！！！', '简直是人间美味！！！'],
					 	'sleep': ['睡觉睡觉！', '呼噜呼噜！', '呼噜呼噜呼噜呼噜！'],
						'work': ['今天也要努力工作！', '这个b班爱谁上谁上！'],
						'stressful': ['好想哭啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊！', '好想死啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊！', '我要起飞咯！芜——————————————', '草！！！！！啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊！！！', '你马，啊啊啊啊啊啊啊啊']}
		
	def express_say(self, event):
		print(f'{self.name}：“{self.expression[f"{event}"][random.randint(0, len(self.expression[f"{event}"])-1)]}”')

	def effect(self, event, item):
		if self.stress >= 80:
			self.express('stressful', None)
		if event == 'eat':
			if self.hunger+item.satiety > 100:
				self.hunger = 100
			else:
				self.hunger += item.satiety
			if item.name == '奥里给':
				self.health -= 20
			self.express('eat', item)
		elif event == 'sleep':
			if self.health+10 > 100:
				self.health = 100
			else:
				self.health += 10
			if self.stress-10 < 0:
				self.stress = 0
			else:
				self.stress -= 10
			self.express('sleep', None)
		elif event == 'work':
			if self.stress+10 > 100:
				self.stress = 100
			else:
				self.stress += 10
			self.express('work', None)

	def express(self, event, item):
		if event == 'eat':
			if item.tastiness > 9:
				print(f'{self.name}：“{item.name}{self.expression[f"{event}"][random.randint(0, len(self.expression[f"{event}"])-1)]}”')
			else:
				print('入不了我的法眼，勉强吃了吧。')
		elif event == 'sleep':
			self.express_say('sleep')
		elif event == 'work':
			self.express_say('work')
		elif event == 'stressful':
			self.express_say('stressful')

	def eat(self, food):
		self.effect('eat', food)

	def sleep(self):
		self.effect('sleep', None)

	def work(self):
		self.effect('work', None)

	def play(self):
		self.name = 'play'

class Food():
	def __init__(self, name, satiety, nutrition, tastiness):
		self.name = name
		self.satiety = satiety
		self.nutrition = nutrition
		self.tastiness = tastiness 
		
foods = {'掉渣饼':1, '脆皮鸡米饭':2, '挂面':3, '粥':4, '鸡蛋灌饼':5, '奥利给':6}
diao_zha_bing = Food("掉渣饼", 70, 6, 7)
cui_pi_ji_mi_fan = Food("脆皮鸡米饭", 9, 7, 7)
gua_mian = Food("挂面", 55, 5, 5)
zhou = Food("粥", 20, 4, 6)
ji_dan_guan_bing = Food("鸡蛋灌饼", 50, 6, 7)
ao_li_gei = Food("奥利给", 100, 0, 10)
ao_li_gei.special = 'shit'

liu_song_lin = Person('刘松林', 16, '男')
liu_song_lin.expression['work']+['我不要啊啊啊啊啊啊！！！', '不是怎么又让我学习啊，你m', '哼，哼，哼，啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊，啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊！！！！！']
liu_song_lin.name = input('给你朋友起个名字：')
while True:
	os.system('cls')
	print(f'{liu_song_lin.name}健康：{liu_song_lin.health}；\n呼吸：{liu_song_lin.breath}；\n压力：{liu_song_lin.stress}；\n饱腹：{liu_song_lin.hunger}\n')
	try:
		do0 = int(input("""
操作：1.吃；2.睡；3.学\n"""))
	except:
		print('请输入正确的整数')
	if do0 == 1:
		try:
			do1 = int(input("""
1.掉渣饼；2.脆皮鸡米饭；3.挂面；4.粥；5.鸡蛋灌饼；6.奥里给\n"""))
		except:
			print('请输入正确的整数')
		if do1 == 1:
			liu_song_lin.eat(diao_zha_bing)
		elif do1 == 2:
			liu_song_lin.eat(cui_pi_ji_mi_fan)
		elif do1 == 3:
			liu_song_lin.eat(gua_mian)
		elif do1 == 4:
			liu_song_lin.eat(ji_dan_guan_bing)
		elif do1 == 5:
			liu_song_lin.eat(zhou)
		elif do1 == 6:
			liu_song_lin.eat(ao_li_gei)
		else:
			print('请输入正确的整数')
	elif do0 == 2:
		liu_song_lin.sleep()
	elif do0 == 3:
		liu_song_lin.work()
	os.system('pause')
