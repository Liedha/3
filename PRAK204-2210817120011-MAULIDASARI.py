r =float(input("Masukkan jari-jari : "))
tinggi =float(input("Masukkan tinggi : "))

phi =3.142857
volume =phi*(r*r)*tinggi
luas =(phi*(r*r))+(phi*(r*r))+(2*phi*r*tinggi)
keliling =2*phi*r

print("\nVolume = ", end="")
print("%.2f"%volume)
print("Luas    = ", end="")
print("%.2f"%luas)
print("Keliling = ", end="")
print("%.2f"%keliling)
