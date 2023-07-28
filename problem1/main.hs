multipleOf3Or5 n =
    n `mod` 3 == 0 || n `mod` 5 == 0

main =
    print $ sum $ filter multipleOf3Or5 [1..1000 - 1]
