'''
Задача 6. «Детектор длинных слов» (Filter)
Задание: У тебя есть список слов. Оставь в нём только те слова, 
длина которых больше 5 символов. 
words = ["apple", "banana", "kiwi", "pineapple", "pear"]
'''

words = ["apple", "banana", "kiwi", "pineapple", "pear"]
# Решение
long_words = list(filter(lambda word: len(word) > 5, words))
print(long_words)  # ['banana', 'pineapple']
