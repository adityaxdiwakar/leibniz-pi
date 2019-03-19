counter = 0
pi = 4.0

loop do
    denominator = 3.0+ 2*counter
    if counter % 2 == 0
        pi -= (4/denominator)
    end
    if counter % 2 == 1
        pi += (4/denominator)
    end

    counter += 1
    puts pi

end