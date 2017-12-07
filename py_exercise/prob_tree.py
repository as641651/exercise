from graphs.graphlib import *
import pprint

g = Digraph()

root = Node("Root")
door1 = Node("Door1")
pd1 = Node("pd1")
pd2 = Node("pd2")
pd3 = Node("pd3")
door2 = Node("Door2")
qd1 = Node("qd1")
qd2 = Node("qd2")
qd3 = Node("qd3")
door3 = Node("Door3")
rd1 = Node("rd1")
rd2 = Node("rd2")
rd3 = Node("rd3")

g.addNode(root)
g.addNode(door1)
g.addNode(pd1)
g.addNode(pd2)
g.addNode(pd3)
g.addNode(door2)
g.addNode(qd1)
g.addNode(qd2)
g.addNode(qd3)
g.addNode(door3)
g.addNode(rd1)
g.addNode(rd2)
g.addNode(rd3)

g.addEdge(Edge(root,door1,1/3.))
g.addEdge(Edge(door1,pd1,1/3.))
g.addEdge(Edge(door1,pd2,1/3.))
g.addEdge(Edge(door1,pd3,1/3.))

g.addEdge(Edge(root,door2,1/3.))
g.addEdge(Edge(door2,qd1,1/3.))
g.addEdge(Edge(door2,qd2,1/3.))
g.addEdge(Edge(door2,qd3,1/3.))

g.addEdge(Edge(root,door3,1/3.))
g.addEdge(Edge(door3,rd1,1/3.))
g.addEdge(Edge(door3,rd2,1/3.))
g.addEdge(Edge(door3,rd3,1/3.))


graph = {"Root": [{('door1',1/3.):[{('p1',1/3.):1
                                    }]
                  },
                  ('door2',1/3.),
                  ('door3',1/3.)]

        }

pprint.pprint(graph,depth=None)
