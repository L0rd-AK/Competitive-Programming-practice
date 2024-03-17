def func(l):
    if l=='friday':
        return 'holiday'
    else:
        return 'working day'


ls=['statarday','sunday','tuesday','thusday','friday']
ls.insert(2,'monday')
ls.insert(4,'wednesday')


x=list(map(func,ls))
print(x)