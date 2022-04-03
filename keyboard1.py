import keyboard
keyboard.wait('1')
a="""
n=int(input())
x=1
for i in range(1,n+1):
print(x,end=' ')
x=x*2
"""
keyboard.write(a)