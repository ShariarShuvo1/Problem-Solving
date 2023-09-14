class Solution:
    def bestClosingTime(self, customers: str) -> int:
        array = []
        x = 0
        for char in customers:
            if char == 'Y':
                x += 1
            else:
                x -= 1
            array.append(x)
        max_val = array[0]
        for i in range(1, len(customers)):
            if array[i] > max_val:
                max_val = array[i]
        x = 0
        for integer in array:
            if integer == max_val:
                break
            x += 1
        if max_val <= 0:
            return 0
        else:
            return x + 1

