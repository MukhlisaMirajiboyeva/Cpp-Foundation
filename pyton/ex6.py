salaries = [800, 1200, 500, 2000, 900, 1500]

low_paid = list(filter(lambda s: s < 1000, salaries))
increased = list(map(lambda s: s * 1.15, low_paid))

print(increased)