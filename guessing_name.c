#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char name[20],gName[20];
    printf("Enter a Name : ");
    scanf("%s",&name);
    system("cls");
    for(int i=0;i<3;i++)
    {
        printf("Enter guessing name : ");
        scanf("%s",&gName);
        if(strcmp(gName,name)==0)
        {
            printf("You Win.\n");
            break;
        }
        else{
            printf("You lost.\n");
        }

    }
    printf("\n\nGuessed right name : %s",name);

    return 0;
}
