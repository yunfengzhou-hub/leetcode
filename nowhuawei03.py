while True:
    try:
        numdic={'x':'six','s':'seven','u':'four','g':'eight','h':'three','w':'two','z':'zero','v':'five','o':'one','e':'nine'}
        numind='xsughwzvoe'
        ind=[6,7,4,8,3,2,0,5,1,9]
        x=input()
        x=x.lower()
        letter=[0 for i in range(26)]
        for i in range(len(x)):
            letter[ord(x[i])-97]+=1
        times=[0 for i in range(10)]
        for i in range(len(numind)):
            num=letter[ord(numind[i])-97]
            times[i]=num
            for j in range(len(numdic[numind[i]])):
                letter[ord(numdic[numind[i]][j])-97]-=num
        result=[]
        for i in range(len(times)):
            for j in range(times[i]):
                result.append(ind[i])
        result.sort()
        for i in range(len(result)):
            print(result[i],end='')
        print('')
    except:
        break