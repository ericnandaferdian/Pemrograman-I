bil = int(input(''))

if bil  >= 80:
   nilai = ('A')
elif bil >= 70 :
   nilai = ('B')
elif bil >= 60 :
   nilai = ('C')
elif bil >= 50 :
   nilai = ('D')
elif bil <50:
   nilai = ('E')

print('%s' % nilai)