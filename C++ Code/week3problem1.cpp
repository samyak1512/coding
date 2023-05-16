// C++ program palindrome by swapping
// only one character
#include <bits/stdc++.h>
using namespace std;

bool isPalindromePossible(string input)
{
 int len = input.length();

 // counts the number of differences
 // which prevents the string from
 // being palindrome.
 int diffCount = 0, i;

 // keeps a record of the characters
 // that prevents the string from
 // being palindrome.
 char diff[2][2];

 // loops from the start of a string
 // till the midpoint of the string
 for (i = 0; i < len / 2; i++)
 {

  // difference is encountered preventing
  // the string from being palindrome
  if (input[i] != input[len - i - 1])
  {
   
   // 3rd differences encountered and
   // its no longer possible to make
   // is palindrome by one swap
   if (diffCount == 2) return false;

   // record the different character
   diff[diffCount][0] = input[i];

   // store the different characters
   diff[diffCount++][1] = input[len - i - 1];
  }
 }
 
 switch (diffCount)
 {
  // its already palindrome
  case 0:
   return true;

  // only one difference is found
  case 1:
  {
   char midChar = input[i];

   // if the middleChar matches either of
   // the difference producing characters,
   // return true
   if (len % 2 != 0 and
   (diff[0][0] == midChar or
    diff[0][1] == midChar))
    return true;
  }
  
  // two differences are found
  case 2:

   // if the characters contained in
   // the two sets are same, return true
   if ((diff[0][0] == diff[1][0] and
    diff[0][1] == diff[1][1]) or
    (diff[0][0] == diff[1][1] and
    diff[0][1] == diff[1][0]))
    return true;
 }
 return false;
}

// Driver Code
int main()
{
 cout << boolalpha
  << isPalindromePossible("bbg") << endl;
 cout << boolalpha
  << isPalindromePossible("bdababd") << endl;
 cout << boolalpha
  << isPalindromePossible("gcagac") << endl;

 return 0;
}

// This code is contributed by
// sanjeev2552
