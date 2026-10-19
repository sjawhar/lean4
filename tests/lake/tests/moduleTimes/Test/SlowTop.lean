import Test.Slow
#eval IO.FS.withFile "order.txt" .append (·.putStrLn "Test.SlowTop")
