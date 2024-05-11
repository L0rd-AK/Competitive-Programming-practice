
# Online Python - IDE, Editor, Compiler, Interpreter
def func(l):
    odd=[]
    even=[]
    for i in l:
        if i%2==1:
            odd.append(i)
        else:
            even.append(i)
    print("Odd: ",odd)
    print("Evev: ",even)
        

lis=[1,2,3,4,5,6,7,8,9]
func(lis)