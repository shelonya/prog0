/*
   File: prog0.cpp

   Author: Selby Onyango
   C.S.1428.301
   Lab Section: L32
   Program: #0
   Due Date: 01/24/18

   This program
     - writes the student's full name on the 1st line of output,
       First Name Middle Initial Last Name. 'N' is used for those without
       a legal middle name. e.g. John L. Smith
     - writes 'C.S.1428.?' (without quotation marks) on the 2nd line of
       output with the student's lecture section number in place of the
       question mark
     - writes 'Lab Section: L?' (without quotation marks) on the 3rd line of
       output with the student's lab section number in place of the question
       mark
     - writes this program's due date on the fourth line of output
     - leaves line five blank
     - writes 'I am majoring in ? with a minor in ?.'(without quotation marks)
       on the 6th line of output with the student's major and minor in place
       of the question marks
       Note: the keyword 'minor' might be replaced with a keyword
       'specialization' or 'concentration' depending on the student

   Input: none
   Constants: none
   Output (screen): Sample Output:

                 Betty M. Boop
                 C.S.1428.?        // '?' represents student's lecture section #
                 Lab Section: L?   // '?' represents student's lab section #
                 --/--/--          // dashes represent due date, month/day/year
                    blank line
                 I am majoring in Pig Latin with a minor in Underwater Polo.
*/

#include <iostream>

using namespace std;

int main ( )
{
   cout << "Selby A Onyango" << endl
        << "C.S.1428.301" << endl
        << "Lab Section: L32" << endl
        << "01/24/18" << endl << endl;

   cout << "I am majoring in Computer Science with a minor in Applied Mathematics." << endl;

  return 0;
}
