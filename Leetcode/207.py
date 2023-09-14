class Solution:
    def topSortBFS(self, graph) -> list:
        sortedArray = []
        queue = list()
        for node in graph.keys():
            if graph[node][2] == 0:
                queue.append(node)
        while len(queue) != 0:
            currentNode = queue.pop(0)
            sortedArray.append(currentNode)
            for node in graph[currentNode][1]:
                graph[node][2] -= 1
                if graph[node][2] == 0:
                    queue.append(node)

        return sortedArray

    def canFinish(self, numCourses: int, prerequisites) -> bool:
        graph = dict()
        for i in range(numCourses):
            graph[i] = [False, [], 0]
        for i in range(len(prerequisites)):
            a, b = prerequisites[i]
            graph[a][1].append(b)
            graph[b][2] += 1
        array = self.topSortBFS(graph)
        for i in range(numCourses):
            if i not in array:
                return False
        return True