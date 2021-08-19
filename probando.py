def main():
    x = 0
    for i in range(0, 100000):
        for j in range(0, 100000):
            x += 0.2

    print("{}".format(x))

main()
