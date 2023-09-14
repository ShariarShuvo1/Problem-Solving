for run in range(int(input())):
    n = int(input())
    number = input()
    idx = -1
    idx = number.find('1')
    if idx == -1 or idx == n - 1 or idx == n - 2:
        print(number)
    else:
        print(('0' * idx) + '1' + ('0' * (n - idx - 1)))
        