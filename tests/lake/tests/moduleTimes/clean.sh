rm -rf .lake lake-manifest.json produced.out order.txt inject.tsv writeFails
# A run that failed mid-way leaves the edited sources moved aside; put them back.
if [ -f Test.lean.bak ]; then mv Test.lean.bak Test.lean; fi
if [ -f Test/Quick3.lean.bak ]; then mv Test/Quick3.lean.bak Test/Quick3.lean; fi
if [ -f Test/Quick1.lean.bak ]; then mv Test/Quick1.lean.bak Test/Quick1.lean; fi
rm -f Test/User.lean Test/Gone.lean
