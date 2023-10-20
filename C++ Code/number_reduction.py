t = int(input().strip())

for _ in range(t):
    s = input()
    x = input()
    x = int(x)
    st = []
    i = 0

    while i < len(s):
        if not st or (s[i] == '0' and len(st) == 1):
            st.append(s[i])
            i += 1
            continue

        if len(st) >= 2 and st[1] == '0' and st[-1] == '0' and '0' < s[i] < st[0]:
            if x >= len(st):
                x -= len(st)
                st.clear()
                st.append(s[i])
                i += 1
            else:
                st.append(s[i])
                i += 1
            continue

        if s[i] >= st[-1]:
            st.append(s[i])
            i += 1
            continue

        if x:
            st.pop()
            x -= 1
        else:
            st.append(s[i])
            i += 1

    while x > 0:
        st.pop()
        x -= 1

    print(''.join(st))
