#ifndef PAROLA_FUNCTIONS_H
#define PAROLA_FUNCTIONS_H

#endif

/*  Function that checks if a string "to_check" has a digit in it.
 *      in: string
 *      out: 0 - if "to_check" does not contain a digit
 *           1 - if "to_check: does contains a digit
 */
int hasDigit(std::string to_check);


/*  Function that checks if a string "to_check" has an upper case character in it.
 *      in: string
 *      out: 0 - if "to_check" does not contain an upper case char
 *           1 - if "to_check: does contains an upper case char
 */
int hasUpper(std::string to_check);


/*  Function that checks if a string "to_check" has a lower case character in it.
 *      in: string
 *      out: 0 - if "to_check" does not contain a lower upper case char
 *           1 - if "to_check: does contains a lower case char
 */
int hasLower(std::string to_check);


/*  Function that return the number of character pairs that are made of identical characters on consecutive indexes.
 *  Example of pair: aaa
 *      in: string
 *      out: pair - int variable that stores the number of pairs with the required criteria
 */
int hasRepeatedChar(std::string to_check);


/*  Function that takes a string "s" and return the MINIMUM number of changes that need to be made for it to be safe.
 *      in: string
 *      out: nr of changes required <int>
 *
 */
int pwStrengthChecker(std::string s);


/*  Function that reads an input from the user (string "s") and validates it's length.
 *      in: string
 *      out: -
 *  Throws an error message if the length of s is not in [6,20] and asks the user to enter another string.
 */
void readConsole(std::string &to_read);


/*  Function that writes a message in the console with one fo the messages:
 *      Safe password! <- if pw does not require changes.
 *      Unsafe password. <- and the number of changes that need to be made for the password to be safe.
 */
void writeConsole(int r);