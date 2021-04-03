#include <assert.h>
#include "string"
#include "functions.h"

void test(){
    std::string s;
    s = "";  assert(hasDigit(s) == 0);
    s = "a"; assert(hasDigit(s) == 0);
    s = "9"; assert(hasDigit(s) == 1);

    s = "";  assert(hasUpper(s) == 0);
    s = "a"; assert(hasUpper(s) == 0);
    s = "A"; assert(hasUpper(s) == 1);

    s = "";  assert(hasLower(s) == 0);
    s = "A"; assert(hasLower(s) == 0);
    s = "a"; assert(hasLower(s) == 1);

    s = "abcdef"; assert(hasRepeatedChar(s) == 0);
    s = "aabccd"; assert(hasRepeatedChar(s) == 0);
    s = "aaaaaa"; assert(hasRepeatedChar(s) == 2);
    s = "aaabbb"; assert(hasRepeatedChar(s) == 2);

    s = "Banana99";  assert(pwStrengthChecker(s) == 0); // no change
    s = "aaaBBbaa9"; assert(pwStrengthChecker(s) == 1); // 1 change: aaa
    s = "aaaBBBaa9"; assert(pwStrengthChecker(s) == 2); // 2 changes: aaa and BBB
    s = "aabbaabb";  assert(pwStrengthChecker(s) == 2); // 2 changes: Upper case letter and digit
    s = "aaabbaa";   assert(pwStrengthChecker(s) == 2); // 2 changes: aaa that can turn into aaA and a digit for example
    s = "aaammcccmmdddmmeee";
    assert(pwStrengthChecker(s) == 4); // 4 changes: aaa, ccc, ddd, eee. Replace aaa -> aAa and ccc -> c9c for example


}

