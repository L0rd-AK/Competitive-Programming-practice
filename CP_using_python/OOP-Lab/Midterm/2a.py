# object oriented programming
def func(str):
    v=0
    for i in range(0,len(str)):
        if str[i]=='a' or str[i]=='e' or str[i]=='i' or str[i]=='o' or str[i]=='u':
            v+=1
        elif str[i]=='A' or str[i]=='E' or str[i]=='I' or str[i]=='O' or str[i]=='U':
            v+=1
    
    print(f'The Number of Volels in the sentance is {v}')

str=input()
func(str)