with open("output.txt", "a") as file:

    rows = 4
    cols = 10

    s = ""

    for x in range(rows):
        s += "[\n"
        for y in range(cols):
            #s = "{\"matrix\": [" + str(x) + ", " + str(y) + "], \"x\": " + str(y) + ", \"y\": " + str(x) + "},\n"
            s += "\t\"" + str(x) + "," + str(y) + "\",\n"
            if y == 9:
                s += "],\n"
            file.write(s)
            s = ""