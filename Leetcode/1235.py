from bisect import bisect_right


class Solution:
    def jobScheduling(self, startTime: List[int], endTime: List[int], profit: List[int]) -> int:
        jobs = sorted(zip(endTime, startTime, profit))

        total_jobs = len(profit)

        dp = [0] * (total_jobs + 1)

        for i, (et, st, prof) in enumerate(jobs):
            idx = bisect_right(jobs, st, hi=i, key=lambda x: x[0])
            dp[i + 1] = max(dp[i], dp[idx] + prof)

        return dp[total_jobs]
