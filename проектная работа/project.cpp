#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <cstdlib>
#include <windows.h>
using namespace std;

int getSimilarity (const char* word1, const char* word2) {
    int count = 0;
    while ( *word1 != '\0' && *word2 != '\0'){
        if (*word1 == *word2){
            count ++;
        }
        word1 ++;
        word2 ++;
    } 
    return count;    
}

int main(){
    SetConsoleOutputCP(65001);
    srand(time(0));

    const char* wordList[] = {"HEAT", "HELL", "HELP", "HERE", "HALO"};
    const char* secret = wordList[rand() % 5];

    int attempts = 4;
    vector<string> history;

    cout << "--- ТЕРМИНАЛ ВЗЛОМАН. ВВЕДИТЕ ПАРОЛЬ ---" << endl;

    while (attempts > 0) {
        cout << "\nПопыток осталось: " << attempts << endl;
        for (const char* w : wordList) cout << w << " ";

        cout << "Проход (или 'HELP' для подсказки): ";
        string input;
        cin >> input;

        if (input == secret) {
            cout << "ДОСТУП РАЗРЕШЕН\n" ;
            break;
        }

        if (input == "HELP"){
            int* garbage = new int[2];
            int found = 0;
            
            for (int i = 0; i < 5 && found < 2; i++){
                if (string(wordList[i]) !=string(secret)) {
                    garbage[found++] = i;
                }
            
            }

            cout << "Удалены ложные вариант: ";
            for (int i = 0; i < found; i++)
            cout << wordList[garbage[i]] << " ";
            cout << endl;
            
            delete[] garbage;
            continue;
        }

        cout << "Совпадений: " << getSimilarity(input.c_str(), secret) << endl;

        attempts--;
    }

    if (attempts == 0)
    cout << "\nДОСТУП ЗАПРЕЩЕН\n";

    return 0 ;
}