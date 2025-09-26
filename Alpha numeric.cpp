#include <jostream>
#include < cctype > // For isdigit(), isalpha,
isspace()
int main 1
char str[1000];
int digitCount = 0, specialCharCount = 0;
std::cout < "Enter a string: "; std::cin.getline(str, 1000); // Read line including spaces
for (int i = 0; str[i] != 10'; ++i) {
if (isdigit(strO) ‹
digitCount++;
}
else if (lisalpha(str[l) && lisdigit(str[il) &&
lisspace(str[)) i
// Not a letter, not a digit, not a space →
special character specialCharCount++;
}
}
std::cout << "InDigit count:" < digitCount <<
std::endl;
std::cout << "Special character count:" <
specialCharCount << std::endl;
return 0;
}
