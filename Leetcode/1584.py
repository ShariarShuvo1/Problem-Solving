import heapq


class Solution:
    def minCostConnectPoints(self, points: list[list[int]]) -> int:
        total = 0
        heap_element = [(0, *points[0])]
        mst = set()
        while len(mst) < len(points):
            distance, xi, yi = heapq.heappop(heap_element)
            if (p := (xi, yi)) in mst:
                continue
            mst.add(p)
            total += distance
            for x, y in points:
                if (x, y) not in mst:
                    distance = abs(x - xi) + abs(y - yi)
                    heapq.heappush(heap_element, (distance, x, y))

        return total
    