# -*- coding: utf-8 -*-
cin=input().strip().split(' ')
m,n,s=map(int,cin)
user={}
cnt=0
for i in range(m):
    cin=input().strip()
    if i >= s-1:
        if cnt%n ==0:
            if cin not in user:
                print(cin)
                user[cin]=cin
            else:
                cnt-=1
        cnt += 1

if not user:
    print("Keep going...")