def solveProblem(str):
    for s in str.split(" "):
        cur = ""
        for c in s:
            if c.isupper():
                cur += "1"
            else:
                cur += "0"
        print(chr(int(cur, 2)), end="")
    print("")

if __name__ == "__main__":
    while True:
        inp = input("Please enter woof encoded string: ")
        solveProblem(inp)