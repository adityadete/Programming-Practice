//      5. Accept on character from user and check whether that character is vowel
//      (a,e,i,o,u) or not.

#include<stdio.h>
#include<stdbool.h>

bool ChkVowel(char Cvalue)
{
    if (Cvalue == 'a' || Cvalue == 'e' || Cvalue == 'i' || Cvalue == 'o' || Cvalue == 'u' || Cvalue == 'A' || Cvalue == 'E' || Cvalue == 'I' || Cvalue == 'O' || Cvalue == 'U')
    {
        return true;
    }

    else
    {
        return false;
    }
} 

int main()
{

    char cValue;
    bool bRet = false;

    printf("Enter Your Charachter: ");
    scanf("%c",&cValue);

    
    bRet = ChkVowel(cValue);

    if(bRet == true )
    {
        printf("This is Vowel");
    }
    else
    {
        printf("This is Not a Vowel");
    }

}