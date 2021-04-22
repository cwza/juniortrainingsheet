from sys import stdin

tmp = 0
x = 1
y = 1
for line in stdin:
    if line == '':
        break
    tmp += 1
    if(tmp%2==1):
        x = int(line)
    else:
        y = int(line)
        print(x*y)
