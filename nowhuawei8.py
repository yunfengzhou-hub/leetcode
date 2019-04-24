while True:
    try:
        x=input()
        i=1
        while i<len(x):
            print(x)
            if x[i] in x[:i]:
                x=x[:i]+x[i+1:]
            else:
                i+=1
        print(x)
    except:
        break