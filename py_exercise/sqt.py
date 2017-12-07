
def sqrt(num,g):
    while(True):
	dif = abs(num - g*g)
	print("diff: ", dif)
	if(dif < 1e-7):
		return g
	#	print(g)
	else:
		g = (g + num/g)/2.
		print(g)

num = int(input("Enter a number:\n"))
g = 40
ans = sqrt(num,g)
print("Ans :",ans)

