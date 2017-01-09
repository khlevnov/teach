#include <iostream>

using namespace std;

int main() {
    // int 123 -- число
    // bool true/false -- правда или ожь
    // float/double 1.124 -- дробные
    // char w -- символ
    int age = 17;

    // если
    if (age >= 18) {
        cout << "Можно ездить на машине" << endl;
    } else {
        // иначе
        cout << "Нельзя ездить на машине" << endl;
    }

    /*
    выражение (15 > 18) -> утверждение
    может быть правдивым или ложным
    (15 > 18) -- ложь -- false
    (15 < 18) -- правда -- true

    КАКИЕ БЫВАЮТ ВЫРАЖЕНИЯ
    Строгие сравнения
        Сравнения ">"
        2 > 1 -- true
        3 > 4 -- false
        3 > 3 -- false
        Сравнения "<"
        5 < 7 -- true
        6 < 4 -- false
        6 < 6 -- false
        Сравнения "=="
        15 == 15 -- true
        14 == 13 -- false
    Нестрогие сравнения
        Сравнения ">="
        2 >= 1 -- true
        3 >= 4 -- false
        3 >= 3 -- true
        Сравнения "<="
        5 <= 7 -- true
        6 <= 4 -- false
        6 <= 6 -- true
    */
    return 0;
}
