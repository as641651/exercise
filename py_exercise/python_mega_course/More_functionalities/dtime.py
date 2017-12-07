from datetime import datetime as dt

print(dt.now())

now = dt.now()
yes = dt(2017,12,6,11)
#yes = dt(2017,12,06,11)#Does not work in python3
print(yes)

print(now - yes)
