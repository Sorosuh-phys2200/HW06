#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include <ctype.h>

void caesar (int key, char *buf)
{
    char c;
    int i;
    
    for (i = 0; i < strlen(buf); i++)
    {
       c = buf[i];
       if (islower(c))
      {
          c = 'a' + (c - 'a' + key)%26;
      }
       else if (isupper(c))
        {
            c = 'A' + (c - 'A' + key)%26;
        }
        printf("%c", c);
    }
    printf("\n");
}

int main(void)
{
    char *message = "Libi imycibqwvm ycwbkcvycm ntcmvbma ycivbqbibma qvdwtdmvbm, ntcfqwvma qvdmvqzm: mb dqkm dmzai";
    int i=18;
    
        caesar(i, message);
    

    return 0;
}
