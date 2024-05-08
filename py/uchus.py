n = int(input())
count = 0
out = True
while n != 0:
    last = n % 10
    if last >= count:
        count = last
    else:
        out = False
        break
    n = n // 10
if out == False:
    print('NO')
elif out == True:
    print("YES")