#include<stdio.h>
#include<stdlib.h>
 
char data[50], temp;
int key, count;
 
void getmessage()
{ 
      printf("Enter a String:\t");
      scanf("%[^\n]s", data);
}
 
void key_input()
{
      printf("Enter a Key:\t");
      scanf("%d", &key);
}
void caesar_cipher_encryption()
{
      for(count = 0; data[count] != '\0'; count++)
      {
            temp = data[count];
            if(temp >= 'a' && temp <= 'z')
            {
                  temp = temp + key;
                  if(temp > 'z')
                  {
                        temp = temp - 'z' + 'a' - 1;
                  }
                  data[count] = temp;
            }
            else if(temp >= 'A' && temp <= 'Z')
            {
                  temp = temp + key;
                  if(temp > 'Z')
                  {
                        temp = temp - 'Z' + 'A' - 1;
                  }
                  data[count] = temp;
            }
      }
      printf("\nEncrypted Message:\t%s\n", data);
}
