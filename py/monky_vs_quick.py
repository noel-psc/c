import random
import time
import numpy as np
import multiprocessing
import copy

def is_sorted(arr):
    for i in range(1, len(arr)):
        if arr[i] < arr[i-1]:
            return False
    return True

def monkey_sort(arr0):
    arr = copy.deepcopy(arr0)
    while not is_sorted(arr):
        random.shuffle(arr)
    return arr

def quick_sort(arr0,i,j):
    lists = copy.deepcopy(arr0)
    if i >= j:
        return list
    pivot = lists[i]
    low = i
    high = j
    while i < j:
        while i < j and lists[j] >= pivot:
            j -= 1
        lists[i]=lists[j]
        while i < j and lists[i] <=pivot:
            i += 1
        lists[j]=lists[i]
    lists[j] = pivot
    quick_sort(lists,low,i-1)
    quick_sort(lists,i+1,high)
    return lists

array = np.random.randint(2147483647, size=int(input("请输入元素个数：")))
#print(array)
pool = multiprocessing.Pool(multiprocessing.cpu_count())

t=time.perf_counter()
#sorted_arrayq = quick_sort(array,0,len(array)-1)
t0 = time.perf_counter()
print(f"快排完成！用时{t0-t}s")
sorted_arraym = pool.apply_async(func=monkey_sort,args=(array))
t1 = time.perf_counter()
print(f"多线程猴子排序完成！用时{t1-t0}s")
if len(array) > 9:
    print("元素个数大于9，单线程猴子排序耗时将超过1分钟，跳过该项")
else:
    sorted_arrays = monkey_sort(array)
t2 = time.perf_counter()

print(f"单线程猴子排序完成！用时{t2-t1}s")
pool.close()
pool.join

#print(f"原数组：{array}\n排序后：{sorted_arrayq}")
print(f"多线程猴子用时：{t1-t0}s\n单线程猴子用时：{t2-t1}s\n快排用时：{t0-t}s")
