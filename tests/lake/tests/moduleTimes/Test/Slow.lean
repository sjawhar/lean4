#eval IO.FS.withFile "order.txt" .append (·.putStrLn "Test.Slow")
-- 8 s puts its remaining path in priority 3 (8-16 s), above a quick module whose first, cold compile takes a few
-- seconds on a loaded machine.
#eval (IO.sleep 8000 : IO Unit)
