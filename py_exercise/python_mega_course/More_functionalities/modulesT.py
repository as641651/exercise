import os

print(os.__file__)

with open(os.__file__,"r") as f:
    print(f.read())

    
