isPrime 0 = False
isPrime 1 = False
isPrime n =
    all (\x -> n `mod` x /= 0) [2..floor $ sqrt $ fromIntegral n]

nthPrime n = nthPrime_ n 2
nthPrime_ 0 i = i - 1
nthPrime_ n i =
    if isPrime i then
        nthPrime_ (n - 1) (i + 1)
    else
        nthPrime_ n (i + 1)

main =
    print $ nthPrime 10001