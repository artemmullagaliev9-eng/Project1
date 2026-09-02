#include <iostream>
#include <string>
using namespace std;
int main() {
    int GG;
    cout << "Enter 1 if you want to see what capital is i Ukraine" << endl;
    cout << "Enter 2 to see in Moldova" << endl;
    cout << "Enter 3 to see in Poland" << endl;
    cout << "Enter 4 to see in Japan" << endl;
    cout << "Enter 5 to see in UK" << endl;
    cin >> GG;
    switch (GG) {
    case 1:
        cout << "Kyiv";
        break;
    case 2:
        cout << "Kiseniv";
        break;
    case 3:
        cout << "Warsaw";
        break;
    case 4:
        cout << "Tokio";
        break;
    case 5:
        cout << "London";
        break;
    default:
        cout << "Sorry we just have 5 countris";
        break;
    }
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    int GG1;
    cout << "Enter 1 if you want to Enter is Monday is weekend" << endl;
    cout << "Enter 2 to see is Tuesday" << endl;
    cout << "Enter 3 to see in Wendsday" << endl;
    cout << "Enter 4 to see in Thursday" << endl;
    cout << "Enter 5 to see in Friday" << endl;
    cout << "Enter 6 to see in Saturday" << endl;
    cout << "Enter 7 to see in Sunday" << endl;
    cin >> GG1;
    if (GG1 == 1 || GG1 == 2 || GG1 == 3 || GG1 == 4 || GG1 == 5) {
        cout << "NO" << endl;
    }
    else if (GG1 == 6 || GG1 == 7) {
        cout << "YES" << endl;
    }
    else {
        cout << "ERROR DAY";
    }
    switch (GG1) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
        cout << "NO" << endl;
        break;
    case 6:
    case 7:
        cout << "YES" << endl;
        break;
    default:
        cout << "Error day" << endl;
        break;
    }
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    int GG2;
    std::cout << "Who are you?-" << endl;
    cout << "Enter 1(Secret):" << endl;
    cout << "Enter 2(Secret):" << endl;
    cout << "Enter 3(Secret):" << endl;
    cout << "Enter 4(Secret):" << endl;
    cout << "Enter 5(Secret):" << endl;
    cout << "Enter 6(Secret):" << endl;
    cout << "Enter 7(Secret):" << endl;
    cin >> GG2;
    if (GG2 == 1) {
        cout << "Mouse" << endl;
        cout << "Hunter" << endl;
    }
    else if (GG2 == 2) {
        cout << "Dog" << endl;
        cout << "Hunter" << endl;
    }
    else if (GG2 == 3) {
        cout << "Giraffe" << endl;
        cout << "Hunter" << endl;
    }
    else if (GG2 == 4) {
        cout << "Elephant" << endl;
        cout << "Grasseater" << endl;
    }
    else if (GG2 == 5) {
        cout << "Panda" << endl;
        cout << "Grasseater" << endl;
    }
    else if (GG2 == 6) {
        cout << "Monkey" << endl;
        cout << "Grasseater" << endl;
    }
    else if (GG2 == 7) {
        cout << "Rat" << endl;
        cout << "Hunter" << endl;
    }
    else {
        cout << "Sorry we just have 7 animals";
    }
    switch (GG2) {
    case 1:
        cout << "Mouse" << endl;
        cout << "Hunter" << endl;
        break;
    case 2:
        cout << "Dog" << endl;
        cout << "Hunter" << endl;
        break;
    case 3:
        cout << "Giraffe" << endl;
        cout << "Hunter" << endl;
        break;
    case 4:
        cout << "Elephant" << endl;
        cout << "Grasseater" << endl;
        break;
    case 5:
        cout << "Panda" << endl;
        cout << "Grasseater" << endl;
        break;
    case 6:
        cout << "Monkey" << endl;
        cout << "Grasseater" << endl;
        break;
    case 7:
        cout << "Rat" << endl;
        cout << "Hunter" << endl;
        break;
    default:
        cout << "Sorry we just have 7 animals" << endl;
        break;
    }
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    int GG3;
    cout << "Enter 1 if you go to east:" << endl;
    cout << "Enter 2 if you go to west:" << endl;
    cout << "Enter 2 if you go to west:" << endl;
    cout << "Enter 2 if you go to west:" << endl;
    cout << "Enter 3 if you go to south:" << endl;
    cout << "Enter 4 if you go to north:" << endl;
    cin >> GG3;
    if (GG3 == 1) {
        cout << "You are going to west" << endl;
    }
    else if (GG3 == 2) {
        cout << "You are going to east" << endl;
    }
    else if (GG3 == 3) {
        cout << "You are going to north" << endl;
    }
    else if (GG3 == 4) {
        cout << "You are going to south" << endl;
    }
    else {
        cout << "BRUH" << endl;
    }
    switch (GG3) {
    case 1:
        cout << "You are going to west" << endl;
        break;
    case 2:
        cout << "You are going to east" << endl;
        break;
    case 3:
        cout << "You are going to north" << endl;
        break;
    case 4:
        cout << "You are going to south" << endl;
        break;
    default:
        cout << "BRUH" << endl;
        break;
    }
}