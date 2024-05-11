# part i
n=int(input("Enter the number of books:"))
total=0
for i in range(1,n+1):
    total+=int(input(f'Price of Book-{i}: '))

# part ii
discount=0
if n>=1 and n<=3:
   total # no discount
elif n>3 and n<=10:
    discount=total-(total*0.1)
else:
    discount=total-(total*0.2)

# part iii
print(f'Total cost: {total}Tk')
print(f'Total Payable cost: {discount} Tk')