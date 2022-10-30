sec = int(input(''))
hari = int(sec) / 86000
jam = int(sec) / 3600
sec = int(sec) % 3600
(menit) = int(sec) / 60
sec = int(sec) % 60
if jam > 23:
    jam = int(jam) - 24
    print('%s hari %s : %s : %s' % (int(hari),int(jam),int(menit),sec))
elif jam < 24:
    print('%s : %s : %s' % (int(jam),int(menit),sec))