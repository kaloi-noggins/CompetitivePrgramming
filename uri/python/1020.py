x=int(input())
a=x//365
x=x%365
m=x//30
x=x%30
d=x//1
print(str(a)+" ano(s)")
print(str(m)+" mes(es)")
print(str(d)+" dia(s)")