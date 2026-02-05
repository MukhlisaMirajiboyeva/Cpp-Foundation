# 1. задача

guests = ['алишер', 'бекзод', 'сардор']
guests.append('давид')
guests.insert(0, 'мария')
new_friends = ['елена', 'фаррух']
guests.extend(new_friends)

guests.remove('сардор')
guests.sort()

print("итоговый список гостей:", guests)
print("количество гостей:", len(guests))

# 2. задача

agent_data = ("007", "джеймс бонд", ["пистолет", "часы"], 35)

print("имя агента:", agent_data[1])
print("возраст агента:", agent_data[-1])
agent_short = agent_data[:2]
print("код и имя:", agent_short)

agent_data[2].append("гаджет-ручка")
print("обновлённое оружие:", agent_data[2])

# 3. задача

laptop = {
    "brand": "macBook",
    "model": "air M2",
    "ram": 8,
    "price": 1200
}

laptop["ram"] = 16
laptop["color"] = "silver"
sold_price = laptop.pop("price")
print(f"товар продан за {sold_price} долларов")

for key, value in laptop.items():
    print(f"характеристика: {key} | значение: {value}")

# 4. задача

students = ["алина", "тимур", "жасмин", "руслан"]
grades = [5, 3, 4, 5]

grade_book = dict(zip(students, grades))
print("журнал оценок:", grade_book)

best_student = max(grade_book, key=grade_book.get)
print("лучший студент:", best_student)

grade_list = list(grade_book.items())
print("экспорт в список кортежей:", grade_list)

# 5. задача 

text = input("введите строку: ")
words = text.split()
word_count = {}

for word in words:
    if word in word_count:
        word_count[word] += 1
    else:
        word_count[word] = 1

print("частота слов:", word_count)