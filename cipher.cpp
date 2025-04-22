#include <iostream>
#include <string>
using namespace std;

int main() {
    string cypher;
    getline(cin, cypher);

    string temp = "";

    for (char ch : cypher) {
        if (ch != ' ') {
            temp += ch;
        } else if (!temp.empty()) {
            cout << "0x" << temp << ", ";
            temp = "";
        }
    }
    if (!temp.empty()) {
        cout << "0x" << temp;
    }

    return 0;
}

//Input:
//B6 4B 27 BB 16 15 A6 F5 32 18 6C C5 FA 94 B5 5E
//Output:
//0xB6, 0x4B, 0x27, 0xBB, 0x16, 0x15, 0xA6, 0xF5, 0x32, 0x18, 0x6C, 0xC5, 0xFA, 0x94, 0xB5, 0x5E