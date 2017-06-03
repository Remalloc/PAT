# -*- coding: utf-8 -*-
y, x, min, max, repl = input().strip().split(" ")

def judge_num(num, min=int(min), max=int(max), repl=int(repl)):
    num=int(num)
    if num >= min and num <= max:
        return str(repl).zfill(3)
    else:
        return str(num).zfill(3)

for i in range(int(y)):
    cin=input().strip().split(' ')
    re=[]
    for j in cin:
        re.append(judge_num(j))
    print(" ".join(re))

