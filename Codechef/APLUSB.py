for run in range(int(input())):
    n = int(input())
    arr1 = list(map(int, input().split()))
    arr2 = list(map(int, input().split()))
    total = sum(arr1) + sum(arr2)
    total = total/n
    if (total != int(total)):
        print(-1)
    else:
        total = int(total)
        newList = []
        valid = True
        for ele in arr1:
            if (total-ele in arr2):
                newList.append(total-ele)
                arr2.remove(total-ele)
            else:
                valid = False
                break
        if not valid:
            print(-1)
        else:
            for ele in arr1:
                print(ele, end=" ")
            print()
            for ele in newList:
                print(ele, end=" ")
            print()
