
#include <algorithm> //to use various functions
#include <string>    //for strings
#include <iostream>  //for input output
#include <cstdlib>   //for c libraries

using namespace std;

bool isPalindrome(string s);

int main()
{
    string s = "Race a car";
    cout << "in main function.........";
    isPalindrome(s);
    return 0;
}

bool isPalindrome(string s)
{
    int start = 0;
    int end = s.size() - 1;

    while (start < end)
    {

        if (isalnum(s[start]) && isalnum(s[end]))
        { // checking if its alpha numeric
            if (tolower(s[start]) != tolower(s[end]))
            {

                return false; // once one pair of characters arent set

            } // end of second if
            start++;
            end--;
        }
        else
        {
            // where either or isnt alpha numeric:
            if (!isalnum(s[start]))
            {

                start++;
            }
            else
            {
                end--;
            }
        } // end of else
    }
    return true;
}