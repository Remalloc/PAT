# -*- coding: utf-8 -*-
code, maxinput = input().strip().split(' ')
cnt = 0
maxinput = int(maxinput)
while True:
    cin = input()
    if cin == "#":
        break
    cnt += 1
    if cnt<=maxinput and cin == code:
        print("Welcome in",end='')
        break
    elif cnt<=maxinput and cin != code:
        print("Wrong password: {}".format(cin))
        if cnt == maxinput:
            print("Account locked", end='')
            break