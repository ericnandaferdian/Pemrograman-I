x,y = input().split()
x = int(x)
y = int(y)
for i in range(1, x+1):
    jarak = i
    while jarak > 1:
        print("(%d * %d)+"%(jarak,y),end='')
        jarak -= 1
    z = 1
    hasil = (i*y)
    while z < i:
        hasil +=(z*y)
        z += 1
    print("(%d*%d)=%d"%(jarak,y,hasil))
a = 1
b = 1
c = 0
while a <= x:
    c += b*y
    b += a+1
    a += 1
print("%d"%(c))