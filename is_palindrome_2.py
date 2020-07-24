def check(str):
	if(str[::1]==str[::-1]):
		return 1
	else:
		return 0

str=input()
hey=0
hey=check(str)
if(hey==1):
	print("true")
elif(hey==0):
	print("false")
