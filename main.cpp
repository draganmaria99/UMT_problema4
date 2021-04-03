#include <iostream>
#include "functions.h"
#include "tests.h"
#include "main.h"


int main() {
    std::string s;
    int result;

    readConsole(s);
    result = pwStrengthChecker(s);
    writeConsole(result);

    //test();

    return 0;
}
