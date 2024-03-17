db=dict()
admin = {'imadmin': '123'}
print(list(admin.keys())[0])
user=['healthMin', 'reliefMin', 'FoodMin']
user_pass=['123health', '456relief', '789food']
for i in range(len(user)):
    db.update({user[i]:user_pass[i]})
while True:
    name=input("enter your name: ")
    password=input("enter your pass: ")
    for i,j in db.items():
        print(i,j)
        if i==name and j==password:
            print("user loged in!!!")
        elif name==list(admin.keys())[0] and password==admin[name]:
            print("Wellcome admin!!!")
            print("""1.add user2.quit/n""")
            x=input('enter choice')
            if x=='1':
                n=input("enter your name: ")
                p=input("enter your pass: ")
                db.update({n:p})
            elif x=='2':
                break
                