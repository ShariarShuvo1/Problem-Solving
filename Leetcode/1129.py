class Solution:
    def shortestAlternatingPaths(self, n: int, redEdges: list[list[int]], blueEdges: list[list[int]]) -> list[int]:
        red = dict()
        blue = dict()
        for pair in redEdges:
            node_from, node_to = pair
            if node_from not in red:
                red[node_from] = [[node_to, False]]
            else:
                red[node_from].append([[node_to, False]])
            if node_to not in red:
                red[node_to] = []
        for pair in blueEdges:
            node_from, node_to = pair
            if node_from not in blue:
                blue[node_from] = [[node_to, False]]
            else:
                blue[node_from].append([[node_to, False]])
            if node_to not in blue:
                blue[node_to] = []
        result: list[int] = []

        for i in range(n):
            if i == 0:
                result.append(0)
                continue
            
