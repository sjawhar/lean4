/-!
The kernel caches recursor rules' right-hand sides per recursor constant, universe levels included.
One declaration reduces the same recursor at several universe instantiations. On a variable major
premise an iota step leaves the recursor applied in its result, so a right-hand side cached at the
wrong universe level makes `stuckLevels` and `stuckLevelsPoly` fail to check.
-/

theorem stuckLevels (n : Nat)
    (m₁ : Nat → Type) (z₁ : m₁ 0) (s₁ : ∀ k, m₁ k → m₁ (k + 1))
    (m₂ : Nat → Type 1) (z₂ : m₂ 0) (s₂ : ∀ k, m₂ k → m₂ (k + 1)) :
    @Nat.rec.{1} m₁ z₁ s₁ (n + 1) = s₁ n (@Nat.rec.{1} m₁ z₁ s₁ n) ∧
    @Nat.rec.{2} m₂ z₂ s₂ (n + 1) = s₂ n (@Nat.rec.{2} m₂ z₂ s₂ n) :=
  ⟨rfl, rfl⟩

universe u v in
theorem stuckLevelsPoly (xs : List Nat)
    (m₁ : List Nat → Sort u) (n₁ : m₁ []) (c₁ : ∀ a as, m₁ as → m₁ (a :: as))
    (m₂ : List Nat → Sort v) (n₂ : m₂ []) (c₂ : ∀ a as, m₂ as → m₂ (a :: as)) :
    @List.rec.{u, 0} Nat m₁ n₁ c₁ (1 :: xs) = c₁ 1 xs (@List.rec.{u, 0} Nat m₁ n₁ c₁ xs) ∧
    @List.rec.{v, 0} Nat m₂ n₂ c₂ (1 :: xs) = c₂ 1 xs (@List.rec.{v, 0} Nat m₂ n₂ c₂ xs) :=
  ⟨rfl, rfl⟩

theorem lens : List.length.{0} [1, 2, 3] = 3 ∧ List.length.{1} [Nat, Int] = 2 ∧
    List.length.{2} [Type, Type, Type, Type] = 4 ∧ List.length.{0} ([] : List Nat) = 0 :=
  ⟨rfl, rfl, rfl, rfl⟩

theorem folds : List.foldr.{0, 0} (· + ·) 0 [1, 2, 3] = 6 ∧
    List.foldr.{1, 0} (fun _ n => n + 1) 0 [Nat, Int] = 2 :=
  ⟨rfl, rfl⟩

theorem decided : (List.range 50).foldl (· + ·) 0 = 1225 := by decide +kernel
