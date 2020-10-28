#include <iostream>
#include <string>

#include "StringUtils.h"

using namespace std;

int main() {
    string str;
    bool isEmpty;
    bool isBlank;

    /* NULL Test */
    isEmpty = StringUtils::isEmpty(str);
    isBlank = StringUtils::isBlank(str);
    cout << "str=[NULL]\n";
    cout << "isEmpty: " << isEmpty << "\n";
    cout << "isBlank: " << isBlank << "\n";
    cout << "\n";

    /* Has value Test */
    str = "John Doe";
    isEmpty = StringUtils::isEmpty(str);
    isBlank = StringUtils::isBlank(str);
    cout << "str=[" << str << "]\n";
    cout << "isEmpty: " << isEmpty << "\n";
    cout << "isBlank: " << isBlank << "\n";
    cout << "\n";

    /* All space char Test */
    str = "   ";
    isEmpty = StringUtils::isEmpty(str);
    isBlank = StringUtils::isBlank(str);
    cout << "str=[" << str << "]\n";
    cout << "isEmpty: " << isEmpty << "\n";
    cout << "isBlank: " << isBlank << "\n";
    cout << "\n";
}