
# with lambda
def make_increment(n):
    return lambda x: x + n

# without lambda
x = 0
def make_incrementor(n):
    return x + n

f1 = make_increment(42)


print(f1(0))
x = make_incrementor(0)
print(make_incrementor(0))

print(f1(1))
x = make_incrementor(1)
print(make_incrementor(1))


