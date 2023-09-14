import collections


class Solution:
    def findItinerary(self, tickets: list[list[str]]) -> list[str]:
        graph = collections.defaultdict(list)
        for from_node, to_node in tickets:
            graph[from_node].append(to_node)
        for node in graph:
            graph[node].sort(reverse=True)
        result = []
        stack = ["JFK"]
        while stack:
            while graph[stack[len(stack)-1]]:
                stack.append(graph[stack[len(stack)-1]].pop())
            result.append(stack.pop())
        result.reverse()
        return result
