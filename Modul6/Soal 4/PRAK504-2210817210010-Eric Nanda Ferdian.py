def reverse(a):
    rev = 0
    while a>0:
        rev = (rev*10)+a%10
        a = a//10
    return rev

A,B = map(int,input().split())
A = reverse(A)
B = reverse(B)
C = A + B
print('%d'%reverse(C))