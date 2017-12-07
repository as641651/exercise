from random_walk import *

d1 = UsualDrunk()
f = Field()
f.addDrunk(d1,Location(0,0))
print(f.drunks[d1].getLoc())
f.moveDrunk(d1)
print(f.drunks[d1].getLoc())
f.moveDrunk(d1)
print(f.drunks[d1].getLoc())
f.moveDrunk(d1)
print(f.drunks[d1].getLoc())
f.moveDrunk(d1)
print(f.drunks[d1].getLoc())
