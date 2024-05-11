class person:
    def __init__(self,name,id):
        self.name=name
        self.id=id
    def labClass(self):
        print(f'Hi, i am {self.name}, and i am doing Lab class now...')
    def attendance(self):
        print(f'Present Sir, my ID is {self.id}.')

a1=person("Amit",4650)
print(a1.name,a1.id)
a1.labClass()
a1.attendance()