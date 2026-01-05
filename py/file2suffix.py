import filetype
import os

jpg, gif = 35, 3
i = 0
path = './pics/'
pics = os.listdir(path)
leng = len(pics)

while i < leng:
    type = filetype.guess(f'{path}{pics[i]}').extension
    if type=='jpg' or type=='png':
        os.rename(f'{path}{pics[i]}', f'{path}{jpg}.jpg')
        jpg += 1
    elif type == 'gif':
        os.rename(f'{path}{pics[i]}', f'{path}{gif}.gif')
        gif += 1
    # print(type)
    i += 1

# print(pics)
