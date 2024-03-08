#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    int i;
    int cryptotext;
    string plaintext;
    int key;
    cout << "Insert word: ";
    getline(cin, plaintext);
    cout << "Insert key: ";
    cin >> key;
    int length = plaintext.length();
    for(i = 0; i < length; i++)
    {
        char currentChar = plaintext[i];

        // Check if the character is an alphabet letter
        if (isalpha(currentChar))
        {
            // Encrypt alphabetic characters
            if (isupper(currentChar))
            {
                // Encrypt uppercase letters
                currentChar = ((currentChar - 'A') + key) % 26 + 'A';
            }
            else
            {
                // Encrypt lowercase letters
                currentChar = ((currentChar - 'a') + key) % 26 + 'a';
            }
        }
        // Print non-alphabet characters unchanged
        cout << currentChar;
    }
}