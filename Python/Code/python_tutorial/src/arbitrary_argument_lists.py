
def concat(*args, seq = "/"):
    return seq.join(args)


print(concat("earth", "mars", "venus", seq = "."))