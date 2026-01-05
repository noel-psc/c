import requests

def get_words(url):
    res = requests.get(url=url)
    return res.text

f = open(r'D:/Temp/nmsl.txt', 'a', encoding = 'utf-8')
for i in range(0, 128):
    line = get_words('https://fun.886.be/api.php?level=min')
    f.write(line)
    print(line})
f.close()
