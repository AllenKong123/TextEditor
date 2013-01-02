#include <stdio.h>
#include <iostream>
#include <string.h>
#include <cstring>
#include <string>



using namespace std;
string sentence("See spot run.");
char* word;
string word_1;
string letters;

int w=0;

int main()
{
    //printf("type something\n");
    //scanf("%s", sentence);
    for(int i=0; i<sentence.length();i++)
        {
            letters.append(sentence,i,1);
            if(sentence.compare(i,1," "))
            {
                cout << letters << "\n";
                //strcpy(word,letters.c_str());
                //letters.clear();
                printf("%s", letters.c_str());
                printf("%s\n", word[w]);
                w++;

            }
        }


    return 0;
}


