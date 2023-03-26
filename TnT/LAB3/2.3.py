test_list = [ (25, 47, 66), (30, 18, 11)]
print("Previous list : " + str(test_list))

add_ele = 4
res = [tuple(j + add_ele for j in sub ) for sub in test_list]
print("After Modifying : " + str(res))