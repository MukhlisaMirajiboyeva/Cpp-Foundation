#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);

    int height = 10;
    int width = 20;

    char** map = new char*[height];
    for (int y = 0; y < height; y++)
        map[y] = new char[width];

    for (int y = 0; y < height; y++) {
        for (int x = 0; x < width; x++) {
            if (y == 0 || y == height - 1 || x == 0 || x == width - 1)
                map[y][x] = '#';
            else
                map[y][x] = ' ';
        }
    }

    int playerX = width / 2;
    int playerY = height / 2;
    map[playerY][playerX] = '@';

    bool running = true;
    while (running) {
        system("cls"); 
        for (int y = 0; y < height; y++) {
            for (int x = 0; x < width; x++) {
                cout << map[y][x];
            }
            cout << endl;
        }

        cout << "Введите команду (w/a/s/d - движение, q - выход): ";
        string input;
        cin >> input;

        map[playerY][playerX] = ' ';

        if (input == "w" && map[playerY - 1][playerX] != '#') playerY--;
        else if (input == "s" && map[playerY + 1][playerX] != '#') playerY++;
        else if (input == "a" && map[playerY][playerX - 1] != '#') playerX--;
        else if (input == "d" && map[playerY][playerX + 1] != '#') playerX++;
        else if (input == "q") running = false;

        map[playerY][playerX] = '@';
    }

    for (int y = 0; y < height; y++)
        delete[] map[y];
    delete[] map;

    return 0;
}
