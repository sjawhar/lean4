@[export push_hello]
def helloImpl (_ : Unit) := "precompiled world"

@[extern "push_hello"]
opaque getHello : Unit → String

def hello := getHello ()
