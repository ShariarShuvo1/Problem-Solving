class Solution:
    def isNumber(self, s: str) -> bool:
        if(len(s)==0):
            return False
        arr = ['0','1','2','3','4','5','6','7','8','9','e','E','+','-']
        if '.' not in s:
            valid = True
            for st in s:
                if st not in arr:
                    valid = False
                    break
            if(s.count('+')>1 or s.count('-')>1 or s.count('E')>1 or s.count('e')>1):
                valid =False
            if ('+' in s and '-' in s):
                valid = False
            if '+' in s and s.index('+')!=0:
                valid = False
            if '-' in s and s.index('-')!=0:
                valid = False
            if 'e' in s and 'E' in s:
                valid = False
            if s.index('e')==0:
                valid = False
            if s.index('E')==0:
                valid = False
            if s.index('e')>0 or s.index('E')>0:
                if 'e' in s:
                    if s[s.index('e')-1] =='+' or s[s.index('e')-1] =='-':
                        valid = False
                else:
                    if s[s.index('E')-1] =='+' or s[s.index('E')-1] =='-':
                        valid = False
            return valid

        else:
            pass