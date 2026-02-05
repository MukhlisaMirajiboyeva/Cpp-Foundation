agent_data = ("007", "Джеймс Бонд", ["Пистолет", "Часы"], 35)

print(agent_data[1])     # имя
print(agent_data[-1])    # возраст

short_data = agent_data[:2]
print(short_data)


agent_data[2].append("Гаджет-ручка")
print(agent_data[2])