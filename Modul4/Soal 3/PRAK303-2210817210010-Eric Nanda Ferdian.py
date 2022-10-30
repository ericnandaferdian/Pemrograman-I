N = int(input(''))

if N > 0 :
    bil = ('positif')
elif N < 0 :
    bil = ('negatif')
elif N == 0 :
    bil = ('nol')

print ('%s' % bil)