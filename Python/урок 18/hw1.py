guests = ['Алишер', 'Бекзод', 'Сардор']

guests.append('Давид') 
guests.insert(0, 'Мария') 
new_friends = ['Елена', 'Фаррух']
guests.extend(new_friends)

guests.remove('Сардор')
guests.sort() 

print(f"Итоговый список: {guests}")
print(f"Количество гостей: {len(guests)}")