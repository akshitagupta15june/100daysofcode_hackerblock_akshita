def check(str,n):
	if(str[::1]==str[::-1]):
		return 1
	else:
		return 0

n=int(input())
str=[]
for i in range(n):
    t=int(input())
    str.append(t)

hey=check(str,n)
if(hey==1):
	print("true")
elif(hey==0):
	print("false")
