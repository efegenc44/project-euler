revN_ n x =
    if n == 0 then x else
    revN_ (n `div` base) ((x * base) + (n `mod` base))
    where
        base = 10

revN n = revN_ n 0

isPalindrome n = revN n - n == 0

main =
    print $ foldl max 0 $
        filter isPalindrome [x * y | x <- [100..1000], y <- [100..1000]]