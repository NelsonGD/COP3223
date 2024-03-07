#include <stdio.h>
#include <ctype.h> // library to use tolower() function

int main(void)
{

    int c[26] = {0}, total = 0; // We make it 0 so ALL spots are equal to 0 instead of garbage.
    char ch;
    ch = getchar(); // very similar to scanf("%c", &ch)

    while(ch != '0') // You make it character 0 because when you input 0 it will come as a char thanks to getchar()
    {
        // if(ch >= 'A' && ch <= 'Z')
        // {
        //     ch = tolower(ch);
            // ch += 32; // converting that into lower case
        // }

        if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
        {
            ch = tolower(ch); // doesn't affect lower case, only upper case letters and give lower case
            c[ch - 'a']++;
            total++;
        }
        ch = getchar();
    }

    for(int i = 0; i < 26; i++)
    {
        printf("%c %d %.2f\n", 'a' + i, c[i], c[i]*100.0/total); // The last part just calculates the percentage
    }
    
    return 0;
}