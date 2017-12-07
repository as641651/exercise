#Exhaustive search
def cube(n):
   guess = 0.0
   eps = 0.1
   inc = 0.01
   while(abs(guess**3 - n) >= eps and guess < n):
	guess = guess + inc
	print(guess**3-n)
   if(abs(guess**3 - n) >= eps):
	guess = "NA"
   return guess

def bisection(n):
   low = 0 
   high = n
   guess = (low+high)/2.
   eps = 0.01
   while(abs(guess**3-n) >= eps):
      print(guess, guess**3-n)
      if(guess**3 < n):
         low = guess
      else:
	 high = guess
      guess = (low+high)/2.
   return guess

n = input("Enter a number :")
#c = cube(n)
c = bisection(n)
print("Cube root is :",c)
