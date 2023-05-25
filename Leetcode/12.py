class Solution:
    def intToRoman(self, num: int) -> str:
        dct={1:'I',2:'II',3:'III',4:'IV',5:'V',6:'VI',7:'VII',8:'VIII',9:'VX'}
        roman=''
        if num>1000:
            roman+= 'M' *(num//1000)
            num-=1000*(num//1000)
            print(num)
        if num>500:
            roman+= 'D' *(num//500)
            num-=500*(num//500)
            print(num)
        if num>100:
            roman+= 'C' *(num//100)
            num-=100*(num//100)
            print(num)
        if num>50:
            roman+= 'L' *(num//50)
            num-=50*(num//50)
            print(num//50)
        if num>10:
            roman+= 'X' *(num//10)
            num-=10*(num//10)
        if num>0:
            roman+= dct[num]
        return roman

a=Solution()
print(a.intToRoman(1994))