import random

class Monty(object):

    def __init__(self,num_doors):
        self.num_doors = num_doors #3
        self.door_list = list(range(1,self.num_doors+1))#[1,2,3]
        self.prize = random.choice(self.door_list)#2
        self.door_list.remove(self.prize)#[1,3]
        self.player_choice = None
        self.revealed = None

    def choose_door(self,door):
        self.player_choice = door#1
        if self.player_choice != self.prize:
            self.door_list.remove(self.player_choice)#[3]
        self.revealed = random.choice(self.door_list)
        return self.revealed #3

    def switch(self,door):
        self.player_choice = door

    def finalize(self):
        return self.player_choice == self.prize


    def __str__(self):
        return "Monty Hall with " + str(self.num_doors) + " doors"

    def reset(self):
        self.__init__(self.num_doors)


def MonteCarlo(numDoors,numTrials,switch = True):
    win = 0
    game = Monty(numDoors)

    for i in range(numTrials):
        doors = list(range(1,numDoors+1))
        choice = random.choice(doors)
        doors.remove(choice)
        rev = game.choose_door(choice)
        print("choice" ,choice, "revealed:",rev)
        doors.remove(rev)
        if switch:
            game.switch(random.choice(doors))
        final = game.finalize()
        if final:
            win +=1
        game.reset()

    return win/numTrials


winProb = MonteCarlo(3,1000,True)

print(winProb)
