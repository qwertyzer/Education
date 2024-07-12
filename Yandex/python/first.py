s = input()
result = 0
sign = 1
num = 0
for i in s:
    if i.isdigit():
        num = num * 10 + int(i)
    elif i == '+':
        result += sign * num
        num = 0
        sign = 1
    elif i == '-':
        result += sign * num
        num = 0
        sign = -1
result += sign * num
print(result)
