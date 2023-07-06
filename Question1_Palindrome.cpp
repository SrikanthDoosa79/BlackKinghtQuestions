// Palindrome.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cctype>

bool IsStringPalindrome(std::string strInput) {
    bool bResult = true;
    size_t nLength = strInput.length();
    size_t nMidPoint = nLength / 2;

    for (size_t i = 0; i < nMidPoint; i++)
    {
        size_t nIndexFromBeginning = i;
        size_t nIndexFromLast = nLength - i - 1;
        char ch1 = tolower(strInput[nIndexFromBeginning]);
        char ch2 = tolower(strInput[nIndexFromLast]);
        if (tolower(ch1) != tolower(ch2) ) {
            bResult = false;
            break;
        }
    }
   
    return bResult;
}

int main()
{
    std::string sInput1 = "1881";
    std::cout << sInput1 << "-" << IsStringPalindrome(sInput1) << std::endl;
    
    std::string sInput2 = "Dad";
    std::cout << sInput2 << "-" << IsStringPalindrome(sInput2) << std::endl;;
    
    std::string sInput3 = "Step on no pets";
    std::cout << sInput3 << "-" << IsStringPalindrome(sInput3) << std::endl;;

    getchar();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
