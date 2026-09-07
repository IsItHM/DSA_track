class Solution:
    def findMissingAndRepeatedValues(self, grid: List[List[int]]) -> List[int]:
        ans = []
        seen = set()
        n = len(grid)
        a = -1                      # the repeated value

        actual_sum = 0
        for i in range(n):
            for j in range(n):
                val = grid[i][j]
                actual_sum += val
                if val in seen:
                    a = val
                    ans.append(a)
                seen.add(val)

        m = n * n
        exp_sum = m * (m + 1) // 2
        b = exp_sum + a - actual_sum
        ans.append(b)
        return ans