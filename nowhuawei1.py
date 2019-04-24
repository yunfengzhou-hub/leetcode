# =============================================================================
# import sys   
# 
# try:
#     x = sys.stdin.readline().strip()
#     stunum=x[0]
#     openum=x[1]
#     stunum=int(stunum)
#     openum=int(openum)
#     x = sys.stdin.readline().strip()
#     grade=x
#     grade=list(map(int, grade)) 
#     while True:
#         x = sys.stdin.readline().strip()  
#         if x=='':
#             break
#         x1,x2,x3=x[0:3]
#         x2=int(x2)
#         x3=int(x3)
#         if(x1=='Q'):
#             #print(grade)
#             print(max(grade[min(x2,x3)-1:max(x2,x3)]))
#             temp=max(grade[min(x2,x3)-1:max(x2,x3)])
#             print(temp)
#         else:
#             grade[x2-1]=x3
# except:
#     pass
# =============================================================================
while True:
    try:
        N, M = [int(each) for each in input().split()]
        scores = [int(each) for each in input().split()]
        for i in range(M):
            x=input().split()
            x[1]=int(x[1])
            x[2]=int(x[2])
            if(x[0]=='Q'):
                print(max(scores[min(x[1],x[2])-1:max(x[1],x[2])]))
            else:
                scores[x[1]-1]=x[2]
    except:
        break

# =============================================================================
# while True:
#     try:
#         N, M = [int(each) for each in input().split()]
#         scores = [int(each) for each in input().split()]
#         operations = []
#         for i in range(M):
#             operations.append(input().split())
#             results = []
#             for each in operations:
#                 if each[0] == 'U':
#                     scores[int(each[1]) - 1] = int(each[2])
#                     continue
#                 else:
#                     front = min(int(each[1]), int(each[2]))
#                     back = max(int(each[1]), int(each[2]))
#                     max_ = 0
#                     for j in range(front-1, back):
#                          if scores[j] > max_:
#                             max_ = scores[j]
#                     results.append(max_)
#             for each in results:
#                 print(each)
#     except:
#         break
# =============================================================================
