n, k, l, c, d, p, nl, np =map(int,input().split())
totalDrink=k*l
drinkToast=totalDrink//nl
limeToast=c*d
saltToast=p//np
print((min(drinkToast,saltToast,limeToast))//n)