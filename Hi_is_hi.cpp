#include <iostream> 

#include <string> 

#include <cctype>

using namespace std;

int compare_strings (string word_1, string word_2)
{

    if(word_1.length() == 0)
    {
        cout << endl << "error no input for word one";
        return 0;
    }
    if(word_2.length() == 0)
    {
        cout << endl << "error no input for word two";
        return 0;
    }// just checking for errors first

    char current_char_1;
    char current_char_2;

        int i = 0;
        while (i < word_1.length() && i < word_2.length())
        {
            current_char_1 = (word_1[i]);
            current_char_2 = (word_2[i]);

            current_char_1 = tolower(current_char_1);
            current_char_2 = tolower(current_char_2);


            if(current_char_1 < current_char_2)
            {
                return -1;

            }else if(current_char_1 > current_char_2)
            {
                return 1;

            }

            i++;
        }

    if (word_1.length() == word_2.length())
    {
        return 0;
    }
    else if (word_1.length() > word_2.length())
    {
        return -1;
    }
    else
    {
        return 1;
    }
}

int main()
{


    string string_test_1 = "abcd"; 

    string string_test_2 = "abcd";
 
    cout << "test: " << compare_strings(string_test_1, string_test_2);

}