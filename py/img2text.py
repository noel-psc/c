import cv2

img_path = input("请输入图片路径：")
file_name = input("请输入转化后的文件名：")
#读取图片
try:
    img = cv2.imread(img_path, -1)
    img_shape = img.shape
    height, width = img_shape[0], img_shape[1]
except:
    print("发生异常，请检查图片路径")
else:
    print(f"图片读取成功，图片大小为{img_shape}")
    
#创建转化后的文件
try:
    f = open(file_name, "w")
except:
    print("无法创建文件，请检查文件名是否合法")
else:
    for h in range(height):
        print(f"正在读取第{h+1}行")
        for w in range(width):
            f.write(str(img[h,w]))
        f.write("\n")
finally:
    f.close()

input("\n按任意键退出")
