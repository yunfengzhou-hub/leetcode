order=['3','4','5','6','7','8','9','10','J','Q','K','A','2']

while True:
    try:
        x=input()
        car1=x[:x.find('-')]
        car2=x[x.find('-')+1:]
        card1=car1.split()
        card2=car2.split()
        if len(card1)==2 and card1[0]=="joker":
            print(car1)
        elif len(card2)==2 and card2[0]=="joker":
            print(car2)
        elif len(card1)==4 or len(card2)==4:
            if len(card1)==4 and len(card2)==4:
                if order.index(card1[0])>order.index(card2[0]):
                    print(car1)
                else:
                    print(car2)
            elif len(card1)==4:
                print(car1)
            else:
                print(car2)
        elif len(card1)!=len(card2):
            print('ERROR')
        elif order.index(card1[0])>order.index(card2[0]):
            print(car1)
        else:
            print(car2)
    except:
        break
