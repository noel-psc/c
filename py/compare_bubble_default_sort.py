import time
import numpy as np
import bubble_sort

def rand_num_ls(leng, a, b):
    ls = list()
    for i in range(leng):
        n = random.randint(a, b)
        ls.append(n)
    return ls

ls = np.random.rand(64)
print(ls)

a = time.time()
sorted(ls)
b = time.time()
print(b-a)
bubble_sort.bubble_sort(ls)
c = time.time()
print(c-b)

