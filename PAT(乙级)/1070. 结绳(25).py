# -*- coding: utf-8 -*-
from functools import reduce
input()
node=input().strip().split(' ')
node=list(map(int,node))
node.sort()
result=reduce(lambda x,y:x/2+y/2,node)
print(int(result))