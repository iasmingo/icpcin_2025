n = input()
m = 0
ans = 0

while len(n) > 1:
    for i in range(0, len(n)):
        m += int(n[i])
    n = str(m)
    m = 0
    ans += 1

print(ans)