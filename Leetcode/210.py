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

    def findOrder(self, numCourses, prerequisites):
        graph = dict()
        for i in range(numCourses):
            graph[i] = [False, [], 0]
        for i in range(len(prerequisites)):
            a, b = prerequisites[i]
            graph[b][1].append(a)
            graph[a][2] += 1
        array = self.topSortBFS(graph)
        for i in range(numCourses):
            if i not in array:
                return []
        return array