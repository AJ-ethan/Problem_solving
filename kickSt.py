i = int(input())
for j in range(i):
    n = int(input())
    nn = str(n)
    di = 9-n%9
    t = 1
    if (di==0):
        t = 2
    s = nn[:t-1]+str(di)+nn[t-1:]
    l = [int(s)]
    #print(di)
    for k in range(t,len(s)):
        l.append(int(nn[:k]+str(di)+nn[k:len(s)-1]))
        #print(l[k]
    print("Case #{}: {}".format(j+1,min(l)))
