/* 1. Написати гру «Вгадай число». 
Програма загадує число в діапазоні від 1 до 500. Користувач намагається його вгадати. 
Після кожної спроби програма видає підказки, чи його число є більшим або меншим за задумане. 
У кінці програма видає статистику: за скільки спроб угадано число, скільки часу це зайняло. 
Передбачити вихід за допомогою 0, у разі, якщо користувачеві набридло вгадувати число.
2. Написати програму — конвертер валют. Реалізувати спілкування з користувачем через меню.*/

#include<iostream>
#include<cstdlib>
using namespace std;
int main() {
    int n, x, a = 0;
    cout << "Vuberite zadachy\n"
        << "1. Gra \"Vgadai chuslo\""
        << "2. Konverter valyt";
    cin >> x;
    switch (x) {
    case 1: {
        srand(time(nullptr));
        int num = 1 + rand() % 500;
        cout << num << endl;
        cout << "VGADAI CHUSLO!\n\nZagasane chislo vid 1 do 500!\nVidgadaite iogo!\n\n";
        do {
            cout << "Vvedste chislo: ";
            cin >> n;
            a++;
            if (num > n && n != 0) {
                cout << "Vase chislo mense zagadanogo!\n\n";
            }
            else if (num < n) {
                cout << "Vase chislo bilse zagadanogo!\n\n";
            }
            else if (n == 0) {
                cout << "\nVUXID Z GRU!\nVU NE VGADALU ZAGADANOGO CHISLA!\n\n"
                    << "Sprob vgadatu bylo " << a - 1 << endl;
                break;
            }
            else if (n == num) {
                cout << "\nVITAIY!\nVU VGADALU ZAGADANE CHISLO!\n\n"
                    << "Sprob vgadatu bylo " << a << endl;
                break;
            }
        } while (true);
    }
          break;
    case 2: {
        cout << "KONVERTER VALYT\n\nOberite svoiy valyty:\n"
            << "1. Doloru\n"
            << "2. Evro\n"
            << "3. Gruvni\n";
        cin >> n;
        float s;
        switch (n) {
        case 1: {
            cout << "Vvedite kilkist doloriv: ";
            cin >> s;
            cout << "\nOberite potribne:\n"
                << "1. Doloru v Evro\n"
                << "2. Doloru v Gruvni\n";
            cin >> a; 
            switch (a) {
            case 1: {
                s *= 0.93f;
                cout << "Otrumaete " << s << " evro";
            }
                  break;
            case 2: {
                s *= 41.44f;
                cout << "Otrumaete " << s << " grn";
            }
                  break;
            }
        }
              break;
        case 2: {
            cout << "Vvedite kilkist evro: ";
            cin >> s;
            cout << "\nOberite potribne:\n"
                << "1. Evro v Doloru\n"
                << "2. Evro v Gruvni";
            cin >> a;
            switch (a) {
            case 1: {
                s *= 1.08f;
                cout << "Otrumaete " << s << " dol";
            }
                  break;
            case 2: {
                s *= 44.76f;
                cout << "Otrumaete " << s << " grn";
            }
                  break;
            }
        }
              break;
        case 3: {
            cout << "Vvedite kilkist grn: ";
            cin >> s;
            cout << "\nOberite potribne:\n"
                << "1. Gruvni v Doloru\n"
                << "2. Gruvni v Evro\n";
            cin >> a;
            switch (a) {
            case 1: {
                s *= 0.022f;
                cout << "Otrumaete " << s << " dol";
            }
                  break;
            case 2: {
                s *= 0.024f;
                cout << "Otrumaete " << s << " evro";
            }
                  break;
            }
        }
              break;
        default:cout << "Ne verno obrana valyta";
        }
    }
          break;
    default:cout << "Ne virno vubranui variant!\n";
    }
}