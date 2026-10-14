/-!
The kernel caches recursor rules' right-hand sides per recursor constant, universe levels included.
One declaration reduces the same recursors at several universe instantiations, so a cache keyed on the
rule alone would hand back a right-hand side at the wrong level and the kernel check would fail.
-/

theorem lens : List.length.{0} [1, 2, 3] = 3 ∧ List.length.{1} [Nat, Int] = 2 ∧
    List.length.{2} [Type, Type, Type, Type] = 4 ∧ List.length.{0} ([] : List Nat) = 0 :=
  ⟨rfl, rfl, rfl, rfl⟩

theorem folds : List.foldr.{0, 0} (· + ·) 0 [1, 2, 3] = 6 ∧
    List.foldr.{1, 0} (fun _ n => n + 1) 0 [Nat, Int] = 2 :=
  ⟨rfl, rfl⟩

theorem decided : (List.range 50).foldl (· + ·) 0 = 1225 := by decide +kernel
