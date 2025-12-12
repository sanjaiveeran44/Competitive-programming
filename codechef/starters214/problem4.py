t = int(input())
for _ in range(t):
    n, k = map(int, input().split())
    s = input().strip()
    k -= 1

    left = [(i - 1) % n for i in range(n)]
    right = [(i + 1) % n for i in range(n)]
    removed = [False] * n
    order = []

    pos = k
    score = 0
    good = True

    for step in range(n):
        digit = int(s[pos])
        if step % 2 == 0:
            score += digit
        else:
            score -= digit

        if score <= 0:
            good = False
            break

        order.append(pos + 1)
        removed[pos] = True

        L = left[pos]
        R = right[pos]
        left[R] = L
        right[L] = R

        if L == pos and step != n - 1:
            good = False
            break

        seek_zero = ((step + 1) % 2 == 1)
        nxt = -1

        if seek_zero:
            if not removed[L] and s[L] == '0':
                nxt = L
            elif not removed[R] and s[R] == '0':
                nxt = R
        else:
            if not removed[L] and s[L] == '1':
                nxt = L
            elif not removed[R] and s[R] == '1':
                nxt = R

        if nxt == -1:
            if not removed[L]:
                nxt = L
            elif not removed[R]:
                nxt = R
            else:
                if step != n - 1:
                    good = False
                break

        pos = nxt

    if not good or len(order) != n:
        print(-1)
    else:
        print(*order)