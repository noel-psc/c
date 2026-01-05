def bubble_sort(ls):
    length = len(ls)
    flag_count = 1
    i, o = 1, 1
    while flag_count != 0:
        #print("outside", ls, o)
        left = 0
        flag_count = 0
        while left < length-1:
            print("inside", ls, i)
            if ls[left] > ls[left+1]:
                flag_count += 1
                #print("exchange", ls)
                ls[left], ls[left+1] = ls[left+1], ls[left]
            left += 1
            i += 1
        #o += 1
    return ls

print(bubble_sort([9, 8, 7, 6, 5, 4, 3, 2, 1, 0]))
