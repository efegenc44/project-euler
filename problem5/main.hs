myLcm_ big small inc =
    if big `mod` small == 0 then
        big
    else
        myLcm_ (big+inc) small inc

myLcm a b = myLcm_ (max a b) (min a b) (max a b)

main =
    print $ foldl myLcm 1 [1..20]
    -- print $ foldl lcm 1 [1..20]