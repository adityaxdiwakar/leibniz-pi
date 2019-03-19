let pi_real = 3.141592653589793238462643383279502884

let pi = 4
counter = 0
while(true) {
    denominator = 3 + 2*counter
    if(counter % 2 == 0) {
        pi -= (4/denominator)
    }
    else {
        pi += (4/denominator)
    }
    counter++;
    process.stdout.write(Math.abs(pi_real-pi).toExponential() + "\r");
}