class Stack:
    def __init__(self):
        self.st=[]
    def Push(self,x):
        self.st.append(x)
    def Pop(self):
        print(self.st.pop())
    def Show(self):
        n=len(self.st)
        while n!=0:
            print(self.st[n-1],end='')
            n-=1


st=Stack()
st.Push('A')
st.Push('M')
st.Push('I')
st.Push('T')
st.Show()
st.Pop()
st.Show()