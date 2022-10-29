from operator import __add__
from functools import reduce


class RowState(object):
    def __init__(self, rows, count):
        self.rows = rows
        self.count = count

    def __hash__(self):
        return hash(tuple(reduce(__add__, self.rows)))

    def __eq__(self, that):
        return self.rows == that.rows


def dfs(nmap, rowState, grid, x, M, depth, cur, h):
    if depth == M:
        testState = RowState(cur[:], rowState.count)
        if testState in nmap:
            nmap[testState].count += rowState.count
        else:
            nmap[testState] = testState
    else:
        if grid[x][depth] == '#':
            cur.append((False,) * 3)
            dfs(nmap, rowState, grid, x, M, depth + 1, cur, False)
            cur.pop()
        else:
            v, d, r = False, False, False
            if rowState.rows[depth][0]:
                v = True
            if depth > 0 and rowState.rows[depth - 1][1]:
                d = True
            if depth < M - 1 and rowState.rows[depth + 1][2]:
                r = True
            if not v and not d and not r and not h:
                cur.append((True,) * 3)
                dfs(nmap, rowState, grid, x, M, depth + 1, cur, True)
                cur.pop()
            cur.append((v, d, r))
            dfs(nmap, rowState, grid, x, M, depth + 1, cur, h)
            cur.pop()

def main():
    for _ in range(int(input())):
        N, M = map(int, input().split())
        grid = []
        for line in range(N):
            grid.append(input())

        tmp_map = {}
        rs = RowState([(False, )*3 for _ in range(M)], 1)
        tmp_map[rs] = rs

        for x in range(N):
            nmap = {}
            for state in tmp_map:
                dfs(nmap, state, grid, x, M, 0, [], False)
                tmp_map = nmap
        ans = 0
        for key in tmp_map:
            ans += key.count
        print((ans - 1) % 1000000007)

if __name__ == '__main__':
    main()