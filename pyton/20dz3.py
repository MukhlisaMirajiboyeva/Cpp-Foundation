with open("draft.txt", "r", encoding="utf-8") as draft, \
     open("clean_copy.txt", "w", encoding="utf-8") as clean:

    for line in draft:
        if not line.startswith("Удалить"):
            clean.write(line)

print("Чистовик готов!")
