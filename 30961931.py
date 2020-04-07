# cook your dish here
MOD = 1000000007

t = eval(input())
for _ in range(t):
    n = eval(input())
    arr = [int(x) for x in input().split()]

    add = 2*arr[0]
    count = 2
    ans = 0
    for i in range(1, n + 1):
        ans = (2 * ans) + (arr[i] * add)
        add = add + arr[i] * count
        count = (count * 2) % MOD

    print(ans%1000000007)