class Solution:
    def romanToInt(self, s: str) -> int:
        roman_dict={"I":1,"V":5,"X":10,"L":50,"C":100,"D":500,"M":1000}
        value=0
        #MCMXCIV
        if len(s)==0:
            value+=roman_dict[s]
        else:
            for i in range(len(s)):
                if i==0:
                    value+=roman_dict[s[i]]
                else:
                    if roman_dict[s[i]]>roman_dict[s[i-1]]:
                        value-=roman_dict[s[i-1]]
                        value+=(roman_dict[s[i]] - roman_dict[s[i-1]])
                    else:
                        value+=roman_dict[s[i]]
        return value