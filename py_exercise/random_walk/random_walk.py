import math
import random

class Location(object):
    def __init__(self,x,y):
        assert(isinstance(x,(int,float)))
        assert(isinstance(y,(int,float)))

        self.x = x
        self.y = y

    def move(self,delX,delY):
        """Changes the coordinates X and Y by delta
            assert(isinstance(delX,(int,float)))
            assert(isinstance(delY,(int,float)))

            Return : Void"""

        assert(isinstance(delX,(int,float)))
        assert(isinstance(delY,(int,float)))
        self.x += delX
        self.y += delY

    def distanceFrom(self,other):
        """Computes euclidean distance from the other location
           assert(isinstance(other,Location))

           Return : Float"""

        assert(isinstance(other,Location))
        return math.sqrt((self.x - other.x)**2 + (self.y - other.y)**2)

    def getLoc(self):
        """Returns a tuple (X,Y)"""
        return (self.x,self.y)

    def __str__(self):
        """Prints (X,Y)"""
        return "(" + str(self.x) +" ," + str(self.y) + ")"


class Drunk(object):
    """docstring for Drunk."""
    def __init__(self,name=None):
        self.name = name

    def takeStep(self):
        """Returns a tuple having change of coordinates for next step"""

        return NotImplementedError

    def __str__(self):
        return self.name

class UsualDrunk(Drunk):
    """docstring fo UsualDrunk."""

    def takeStep(self):
        stepChoices = [(0,1),(0,-1),(1,0),(-1,0)]
        return random.choice(stepChoices)

class MDrunk(Drunk):
    """docstring fo UsualDrunk."""

    def takeStep(self):
        stepChoices = [(0,1.1),(0,-0.9),(1,0),(-1,0)]
        return random.choice(stepChoices)

class Field(object):
    def __init__(self):
        self.drunks = {}

    def addDrunk(self,drunk,loc):
        assert(isinstance(drunk,Drunk))
        assert(isinstance(loc,Location))

        self.drunks[drunk] = loc

    def moveDrunk(self,drunk):
        assert(isinstance(drunk,Drunk))

        x,y = drunk.takeStep()
        self.drunks[drunk].move(x,y)
