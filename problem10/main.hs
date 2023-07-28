isPrime 0 = False
isPrime 1 = False
isPrime n =
    all (\x -> n `mod` x /= 0) [2..floor $ sqrt $ fromIntegral n]

main =
    print $ sum $ filter isPrime [0..2000000]