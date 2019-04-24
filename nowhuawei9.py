def solve(m):
    issolved=False
    isfind=False
    for x in range(8,-1,-1):
        for y in range(8,-1,-1):
            if m[x][y]==0:
                isfind=True
                break
        if isfind:
            break
    if isfind:
        for num in range(9,0,-1):
            isnum=False
            for j in range(9):
                if m[x][j]==num or m[j][y]==num:
                    isnum=True
                    break
            for i in range(3):
                for j in range(3):
                    if m[int(x/3)*3+i][int(y/3)*3+j]==num:
                        isnum=True
                        break
            if not isnum:
                m[x][y]=num
                issolved=issolved or solve(m)
                if issolved:
                    break
                else:
                    m[x][y]=0
    else:
        issolved=True
    return issolved
            
# =============================================================================
# while True:
#     try:
#         rawm=[]
#         for i in range(9):
#             rawm.append(list(map(int,input().split())))
#         solve(rawm)
#         for i in range(9):
#             for j in range(9):
#                 print(rawm[i][j],end=' ')
#             print('')
#     except:
#         break
# =============================================================================
    


rawm=[[7,2,6,9,0,4,0,5,1],
[0,8,0,6,0,7,4,3,2],
[3,4,1,0,8,5,0,0,9],
[0,5,2,4,6,8,0,0,7],
[0,3,7,0,0,0,6,8,0],
[0,9,0,0,0,3,0,1,0],
[0,0,0,0,0,0,0,0,0],
[9,0,0,0,2,1,5,0,0],
[8,0,0,3,0,0,0,0,0],]

rawm=[[0,0,8,7,1,9,2,4,5],
[9,0,5,2,3,4,0,8,6],
[0,7,4,8,0,6,1,0,3],
[7,0,3,0,9,2,0,0,0],
[5,0,0,0,0,0,0,0,0],
[8,6,1,4,0,3,5,2,9],
[4,0,0,0,2,0,0,0,8],
[0,0,0,0,0,0,0,7,0],
[1,0,7,0,6,8,0,5,0],]

print(solve(rawm))

