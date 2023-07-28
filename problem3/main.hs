trialDivision n = trialDivision_ n 2
trialDivision_ n f =
    if n <= 1 then [] else
        if n `mod` f == 0 then
            f : trialDivision_ (n `div` f) f
        else
            trialDivision_ n (f + 1)

main =
    print $ last $ trialDivision 600851475143
