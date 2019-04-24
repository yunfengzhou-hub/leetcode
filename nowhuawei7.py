while True:
    try:
        x=int(input())
        x=[i for i in range(x)]
        i=0
        while len(x)>1:
            i+=2
            if(i>=len(x)):
                i%=len(x)
            print(x)
            x.remove(x[i])
        print(x[0])
    except:
        break

# =============================================================================
# for y in range(2,50):
#     x=[i for i in range(y)]
#     i=0
#     while len(x)>1:
#         i+=2
#         if(i>=len(x)):
#             i%=len(x)
#         #print(x)
#         x.remove(x[i])
#     print(y,x[0])
# =============================================================================
