#include <iostream>
#include <string>

using namespace std;

bool ispalindrome(string s, int i, int j)
{
    while (i < j)
    {
        if (s.at(i) == s.at(j))
        {
            i++;
            j--;
        }
        else
            return false;
    }
    return true;
}
bool validPalindrome(string s)
{
    int i = 0;
    int j = s.size() - 1;
    while (i < j)
    {
        if (s.at(i) == s.at(j))
        {
            i++;
            j--;
        }
        else
        {
            return ispalindrome(s, i + 1, j) || ispalindrome(s, i, j - 1);
        }
    }
    return true;
}
int main()
{
    string s;
    cout << "Enter the string: ";
    getline(cin, s);
    if (validPalindrome(s))
        cout << "Valid Palindrome" << endl;
    else
        cout << "Not Valid Palindrome" << endl;
    return 0;
}