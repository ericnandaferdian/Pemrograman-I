a = int(input(''))

if a >=1 and a <=9:
    b = ('Satuan')
elif a == 0:
    b = ('Nol')
elif a > 99:
    b = ('Anda Menginput Melebihi Limit Bilangan')
elif a >=20 and a <=99:
    b = ('Puluhan')
elif a >=11 and a <=19:
    b = ('Belasan')
print('%s'% b)
