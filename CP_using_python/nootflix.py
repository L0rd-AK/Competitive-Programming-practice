
# Online Python - IDE, Editor, Compiler, Interpreter
def calculate_fee(a):
    for i in a:
        x=a[i]['Plan']
        print(x)
        if x=='basic':
            print(f"{a[i]['Name']} has to pay $9.99")
        elif x=='standard':
            print(f"{a[i]['Name']} has to pay $15.99")
        else:
            print(f"{a[i]['Name']} has to pay $19.99")
            

users=dict()
n=int(input("How many user you want to input"))
for i in range(n):
    usr=dict()
    name=input("enter name")
    plan=input("enter plan")
    usr.update({"Name":name})
    usr.update({"Plan":plan})
    users.update({i+1:usr})
print(users)
calculate_fee(users)