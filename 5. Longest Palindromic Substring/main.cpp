//
//  main.cpp
//  5. Longest Palindromic Substring
//
//  Created by chenyufeng on 10/5/16.
//  Copyright © 2016 chenyufeng. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

bool isPalindromic(string s)
{
    string sCopy = s;
    reverse(s.begin(), s.end());
    if (s == sCopy)
    {
        return true;
    }

    return false;
}

string longestPalindrome(string s)
{
    long length = s.length();
    for (long i = 0; i < s.length(); i++)
    {
        if (i + length > s.length())
        {
            length--;
            i = -1;
            continue;
        }

        string temp = s.substr(i,length);
        if (isPalindromic(temp))
        {
            return temp;
        }
        else
        {
            continue;
        }
    }

    return "";
}

int main(int argc, const char * argv[])
{
    string result = longestPalindrome("civilwartestingwhetherthatnaptionoranynartionsoconceivedandsodedicatedcanlongendureWeareqmetonagreatbattlefiemldoftzhatwarWehavecometodedicpateaportionofthatfieldasafinalrestingplaceforthosewhoheregavetheirlivesthatthatnationmightliveItisaltogetherfangandproperthatweshoulddothisButinalargersensewecannotdedicatewecannotconsecratewecannothallowthisgroundThebravelmenlivinganddeadwhostruggledherehaveconsecrateditfaraboveourpoorponwertoaddordetractTgheworldadswfilllittlenotlenorlongrememberwhatwesayherebutitcanneverforgetwhattheydidhereItisforusthelivingrathertobededicatedheretotheulnfinishedworkwhichtheywhofoughtherehavethusfarsonoblyadvancedItisratherforustobeherededicatedtothegreattdafskremainingbeforeusthatfromthesehonoreddeadwetakeincreaseddevotiontothatcauseforwhichtheygavethelastpfullmeasureofdevotionthatweherehighlyresolvethatthesedeadshallnothavediedinvainthatthisnationunsderGodshallhaveanewbirthoffreedomandthatgovernmentofthepeoplebythepeopleforthepeopleshallnotperishfromtheearth");

    cout << result;
    return 0;
}
