
# Here we are importing random moduel to randomly generate numbers
import random
n = []
# Here we are adding 10 numbers between 0 to 100 to list -> n=[]
for v in range(0, 11):
    n.append(random.randint(0, 100))

# here the first for-loop will go from 50 to 99. ANd for every number the 2nd for-loop will check if the number is in list n. if it's present in list n then, it will simply just print that number.
for i in range(50, 100):
    for j in n:
        if j == i:
            print(j, end=" ")
# Comprehension:
# First, we are importing random moduel to randomly generate numbers. Then we are adding 10 numbers between 0 to 100 to list -> n=[]. the first for-loop will go from 50 to 99. ANd for every number the 2nd for-loop will check if the number is in list n. if it's present in list n then, it will simply just print that number.
# if we assume the list n is equal to [64, 19, 100, 6, 68, 92, 62, 5, 15, 98, 55].
# then the output will be -> 55 62 64 68 92 98