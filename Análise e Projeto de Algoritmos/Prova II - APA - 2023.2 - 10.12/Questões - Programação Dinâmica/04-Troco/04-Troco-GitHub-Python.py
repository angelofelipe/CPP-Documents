total, moedas = map(int, input().split())
val = [0] + list(map(int, input().split()))

dp = [[0] * (total + 1) for _ in range(2)]
dp[0][0] = 1

for pos in range(1, moedas + 1):
    for troco in range(total + 1):
        dp[pos % 2][troco] = dp[(pos - 1) % 2][troco]

        if troco >= val[pos]:
            dp[pos % 2][troco] |= dp[(pos - 1) % 2][troco - val[pos]]

print('S' if dp[moedas % 2][total] else 'N')
