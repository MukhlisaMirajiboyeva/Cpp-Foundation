with open("data.txt", "w+") as f:
    f.write("python")
    f.seek(0)
    content = f.read()
    print(content)