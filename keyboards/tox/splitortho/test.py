with open("output.txt", "a") as file:

    rows = 4
    cols = 10

    s = ""

    for x in range(rows):
        for y in range(cols):
            s = "{\"matrix\": [" + str(x) + ", " + str(y) + "], \"x\": " + str(y) + ", \"y\": " + str(x) + "},\n"
            file.write(s)