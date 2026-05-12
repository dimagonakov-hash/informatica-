#include <iostream>
#include <string>

using namespace std;

string GetTextFromUser()
{
    string text;

    cout << "Podaj ciag znakow: ";
    getline(cin, text);

    return text;
}

string ReverseString(string text)
{
    string reversed = "";

    for (int i = text.length() - 1; i >= 0; i--)
    {
        reversed += text[i];
    }

    return reversed;
}

void DisplayResult(string text)
{
    cout << "Odwrocony ciag: " << text;
}

int main()
{
    string text = GetTextFromUser();

    string reversed = ReverseString(text);

    DisplayResult(reversed);

    return 0;
}