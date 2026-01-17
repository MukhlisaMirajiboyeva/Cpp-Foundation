/* Задача 5: Комбо (Всё вместе)
Задание: Напиши «Детектор отличника». 
Пользователь вводит свою оценку за тест (score от 0 до 100) 
и количество выполненных доп. заданий (extraTasks).

Если score больше 90 ИЛИ (score больше 80 И extraTasks больше 0),
 выведи "Grade: A".

Иначе выведи "Keep studying". */



#include <iostream>
using namespace std;

int main() {
    int score, extraTasks;
    cout << "Enter score: ";
    cin >> score;
    cout << "Enter extra tasks count: ";
    cin >> extraTasks;

    if (score > 90 || (score > 80 && extraTasks > 0)) {
        cout << "Grade: A" << endl;
    } else {
        cout << "Keep studying" << endl;
    }
    return 0;
}