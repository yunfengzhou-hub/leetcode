while True:
    try:
        x=input().split()
        for i in range(len(x)):
            issym=True
            for j in range(len(x[i])):
                if x[i][j]!=x[i][len(x[i])-j-1]:
                    issym=False
                    break
            if len(x[i])%2!=0:
                issym=False
            for j in range(0,len(x[i]),2):
                if x[i][j]!=x[i][j+1]:
                    issym=False
                    break
            if issym:
                res=''
                for j in range(0,len(x[i]),2):
                    res+=x[i][j]
                print(res)
            else:
                print('false')
    except:
        break