import math
A =int(input("Masukkan A : "))
B =int(input("Masukkan B : "))
C =round(math.sqrt(B*B-A*A))
tinggi =A
keliling =A+B+C
luas =round(0.5*C*A)

print("\nAlas\t\t= ", C,"cm")
print("Tinggi\t\t= ", tinggi,"cm")
print("Keliling\t= ", keliling,"cm")
print("Luas\t\t= ", luas,"cm^2")
