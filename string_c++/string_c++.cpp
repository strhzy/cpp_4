#include <Windows.h>
#include <iostream>
#include <string>
#include <random>
using namespace std;
string removeConsonants(string word) {
    char vowels[] = { 'а', 'А', 'е', 'Е', 'ё', 'Ё', 'и', 'И', 'о', 'О', 'у', 'У', 'ы', 'Ы', 'э', 'Э', 'ю', 'Ю', 'я', 'Я' };
    string result;
    for (int i = 0; i < word.length(); i++) {
        for (int j = 0; j < 19; j++) {
            if (word[i] == vowels[j]) {
                result += word[i];
            }
        }
    }
    return result;
}
string removeVowels(string word) {
    char consonants[] = { 'б', 'В', 'г', 'Г', 'д', 'Д', 'ж', 'Ж', 'з', 'З', 'й', 'Й', 'к', 'К', 'л', 'Л', 'м', 'М', 'н', 'Н', 'п', 'П', 'р', 'Р', 'с', 'С', 'т', 'Т', 'ф', 'Ф', 'х', 'Х', 'ц', 'Ц', 'ч', 'Ч', 'ш', 'Ш', 'щ', 'Щ' };
    string result;
    for (int i = 0; i < word.length(); i++) {
        for (int j = 0; j < 45; j++) {
            if (word[i] == consonants[j]) {
                result += word[i];
            }
        }
    }
    return result;
}
string shffl(string word) {
    shuffle(word.begin(), word.end(), default_random_engine(0));
    return word;
}
int main()
{
    setlocale(LC_ALL, "Rus");
    SetConsoleCP(1251);
    cout << "Введите слово\n";
    string word;
    cin >> word;
    cout << "Выберите действие\n";
    cout << "1-Перевернуть слово\n";
    cout << "2-Вывести слово без согласных\n";
    cout << "3-Вывести слово без гласных\n";
    cout << "4-Перемешать слово\n";
    cout << "5-Выйти из программы\n";
    int choice;
    cin >> choice;
    switch (choice)
    {
        case 1:
            reverse(word.begin(), word.end());
            cout << word << endl;
            main();
            break;
        case 2:
            cout << removeConsonants(word) << endl;
            main();
            break;
        case 3:
            cout << removeVowels(word) << endl;
            main();
            break;
        case 4:
            cout << shffl(word) << endl;
            main();
            break;
    }
}

