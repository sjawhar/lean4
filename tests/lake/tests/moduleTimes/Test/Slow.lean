#eval IO.FS.withFile "order.txt" .append (·.putStrLn "Test.Slow")
#eval (IO.sleep 4000 : IO Unit)
