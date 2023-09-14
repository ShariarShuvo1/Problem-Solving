class Solution:
    def calculate(self, s) -> int:
        normal = []
        num = ''
        for char in s:
            if char != ' ':
                if char in '0123456789':
                    num += char
                elif char in ['+', '-', '(', ')']:
                    if len(num) > 0:
                        normal.append(int(num))
                        num = ""
                    normal.append(char)
        if len(num) > 0:
            normal.append(int(num))
        s = normal
        for i in range(len(s)):
            if i == 0 and s[i] == '-':
                s.insert(i, 0)
            elif s[i] == '-':
                if s[i-1] == '-':
                    s.insert(i, 0)
            elif s[i] == '(' and s[i+1] == '-':
                s.insert(i + 1, 0)
        postfix = []
        stack = []
        for char in s:
            if char == '(':
                stack.append(char)
            elif char != '+' and char != '-' and char != ')':
                postfix.append(char)
            elif char == ')':
                while True:
                    x = stack.pop()
                    if x == '(':
                        break
                    postfix.append(x)
            elif char == '+' or char == '-':
                if len(stack) > 0:
                    if stack[-1] != '+' and stack[-1] != '-':
                        stack.append(char)
                    else:
                        while True:
                            x = stack.pop()
                            postfix.append(x)
                            if len(stack) == 0:
                                break
                            if stack[-1] != '+' and stack[-1] != '-':
                                break
                        stack.append(char)
                else:
                    stack.append(char)
        while len(stack) != 0:
            postfix.append(stack.pop())
        for char in postfix:
            if type(char) is not str:
                stack.append(char)
            else:
                val2 = stack.pop()
                val1 = stack.pop()
                if char == '+':
                    stack.append(val1 + val2)
                else:
                    stack.append(val1 - val2)
        return stack.pop()


obj = Solution()
x = obj.calculate("1-(     -2)")
print(x)
