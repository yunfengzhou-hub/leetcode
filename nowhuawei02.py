while True:
    try:
        x=list(map(int,input().split()))
        planum=x[0]
        busnum=x[1]
        busline=[[0 for i in range(x[0]+1)] for i in range(x[0]+1)]
        for i in range(busnum):
            x=list(map(int,input().split()))
            busline[x[1]][x[2]]=x[3]
            busline[x[2]][x[1]]=x[3]
        x=list(map(int,input().split()))
        price={x[0]:0}
        
        while True:
            isfound=False
            minprice=1100
            minplace=x[0]
            for i in range(1,planum+1):
                if i in price:
                    continue
                
                for j in price:
                    
                    if busline[i][j]!=0:
                        tempprice=busline[i][j]+price[j]
                        if j!=x[0] and i!=x[0]:
                            tempprice-=1
                        #print(i,j,busline[i][j],price[j],tempprice,minprice)
                        if tempprice<minprice:
                            isfound=True
                            minprice=tempprice
                            minplace=i
            if isfound:
                #print('found',minplace,minprice)
                price[minplace]=minprice
            else:
                break
        
        if x[1] not in price:
            print('NA')
        else:
            print(price[x[1]])
    except:
        break