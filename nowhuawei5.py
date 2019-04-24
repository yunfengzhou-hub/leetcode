# =============================================================================
# import sys
# try:
#     while True:
#         raw=list(map(int,input().split()))
#         #x=input().split()
#         #x = sys.stdin.readline().strip()
#         #print(x)
# # =============================================================================
# #         if len(x)!=int(x[0])+1:
# #             break
# # =============================================================================
# # =============================================================================
# #         test=x[1]
# #         x=x[1:]
# # =============================================================================
#         if len(raw)<1:
#             break
#         while len(raw)>0:
#             x=[]
#             for i in range(raw[0]):
#                 x.append(raw[i])
#             raw=raw[raw[0]+1:]
#             x=sorted(x)
#             i=0
#             while i<len(x)-1:
#                 if x[i]==x[i+1]:
#                     x.remove(x[i])
#                 else:
#                     i+=1
#             for i in range(len(x)):
#                 print(x[i])
# except:
#     pass
# =============================================================================

while True:
    try:
        x=int(input())
        num=[]
        for i in range(x):
            num.append(int(input()))
        num.sort()
        i=0
        while i<len(num)-1:
            if num[i]==num[i+1]:
                num.remove(num[i])
            else:
                i+=1
        for i in num:
            print(i)
    except:
        break

# =============================================================================
# while True:
#     try:
#         nums_count = int(input())
#         nums = set()
#         for i in range(nums_count):
#             nums.add(int(input()))
#             nums = sorted(list(nums))
#             for each in nums:
#                 print(each)
#     except:
#         break
# =============================================================================


# =============================================================================
# try:
#     while True:
#         x=input().split()
#         if(len(x)<1):
#             break
#         for i in range(len(x)):
#             if x[i][0:2]=='0x':
#                 x[i]=x[i][2:]
#             num=0;
#             for j in range(len(x[i])):
#                 num*=16
#                 if ord(x[i][j])>64:
#                     num+=ord(x[i][j])-55
#                 else:
#                     num+=ord(x[i][j])-48
#             print(num)
# except:
#     pass
# =============================================================================
