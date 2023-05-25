class Solution:
    def numRescueBoats(self, people, limit):
        count = 0
        people.sort()
        left = 0
        right = len(people)-1
        while left<=right:
            if people[left]+people[right]<=limit:
                left+=1
                right-=1
                count+=1
            else:
                right-=1
                count+=1
        return count

obj = Solution()
ret = obj.numRescueBoats([6,3,5,6,2,3],6)
print(ret)