class Solution:
    def isValid(self, s):
        lst=list()
        if ((s.count('(')!= s.count(')')) or (s.count('{')!= s.count('}')) or (s.count('[')!= s.count('[')) or len(s)==1):
            return False
        else:
            for sign in s:
                if (sign=='(' or sign== '{' or sign== '[' ):
                    lst.append(sign)
                else:
                    if len(lst) == 0:
                        return False
                    elif sign==')' and lst[-1] == '(':
                        lst.pop()
                    elif sign=='}' and lst[-1] == '{':
                        lst.pop()
                    elif sign==']' and lst[-1] == '[':
                        lst.pop()
                    else:
                        return False
            if len(lst)==0:
                return True
            else:
                return False