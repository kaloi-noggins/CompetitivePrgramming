dentro = 0
fora = 0

for i in range(int(input())):

    if (10 <= int(input()) <= 20):
        dentro += 1
    else:
        fora += 1

print(str(dentro)+" in")
print(str(fora)+" out")
