import random
import pylab

dist, numSamples = [], 1000000
for i in range(numSamples):
    #dist.append(random.gauss(0, 100))
    dist.append(random.random())
#weights = [1/numSamples]*len(dist)
weights = [1]*len(dist)
print(len(weights))
v = pylab.hist(dist, bins = 100, weights = weights)
pylab.xlabel('x')
pylab.ylabel('Relative Frequency')
print(v)
print('Fraction within ~200 of mean =',
sum(v[0][30:70]))
pylab.show()
