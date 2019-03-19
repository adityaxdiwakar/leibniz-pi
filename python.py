pi_real = 3.141592653589793238462643383279502884

pi = 4
count = 0
while True:
    denominator = 3 + 2*count
    if count % 2 == 0:
        pi -= (4/denominator)
    else:
        pi += (4/denominator)
    count += 1
    print(abs(pi - pi_real), end="\r")