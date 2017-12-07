def change(x):
#	x.append(7)
	x = x + [7]
x = [5,6]
change(x)
print(x)

def f(x):
	 #y = y+1 #unbounded local error
	print("In the function : ", y+1) # picks y from global scope

y = 5
f(x)
print(y)
