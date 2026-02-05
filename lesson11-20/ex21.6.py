words = ["apple", "banana", "kiwi", "pineapple", "pear"]
new_words = list(filter(lambda word: len(word)>5, words))
print(new_words)