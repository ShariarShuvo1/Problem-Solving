class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        if len(digits)==0:
            digits.append(1)
            return digits
        if len(digits)==1:
            if digits[0]==9:
                digits[0]=1
                digits.append(0)
                return digits
            else:
                digits[0]+=1
                return digits
        digits.reverse()
        for i in range(len(digits)):
            if digits[i]<9:
                digits[i]+=1
                break
            elif digits[i]>9:
                digits[i]=0
                try:
                    digits[i+1]+=1
                    if digits[i+1]==10:
                        continue
                    else:
                        break
                except:
                    digits.append(1)
            else:
                digits[i]=0
                try:
                    digits[i+1]+=1
                    if digits[i+1]==10:
                        continue
                    else:
                        break
                except:
                    digits.append(1)
        digits.reverse()
        return digits