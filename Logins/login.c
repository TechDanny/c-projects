#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <linux/kd.h>

struct login{
	char userName[50];
	char Password[50];
	char email[50];
	char mobile[50];
};

int main()
{
	struct login user;
	int opt;
	FILE *fp;
	char fileName[50];
	char name[50];
	char pwd[50];
	int num;
	int result;
	int number;

	printf("Choose below options to proceed");
	printf("\n\n1. Register an Acccount");
	printf("\n2. Login to your Account");

	printf("\n\nSelect: ");
	scanf("%d", &opt);

	switch (opt)
	{
		case 1:
			{
				system("clear");
				printf("Enter Your username:\t");
				scanf("%s", user.userName);
				printf("Enter your phone number: ");
				scanf("%s", user.mobile);
				printf("Enter your Email:\t");
				scanf("%s", user.email);
				printf("Enter your Password:\t");
				scanf("%s", user.Password);

				strcpy(fileName,  user.userName);
				fp = fopen(strcat(fileName, ".dat"), "w");
				fwrite(&user, sizeof(struct login), 1, fp);
				if (fwrite != 0)
				{
					printf("\nYou've successfully created your account\n");
				}
				else
				{
					printf("something went wrong! TRY AGAIN");
				}
				fclose(fp);
			}
		case 2:
			{
				system("clear");
				printf("Enter username:\t");
				scanf("%s", name);
				printf("Enter Password: ");
				scanf("%s", pwd);

				strcpy(fileName, user.userName);
				fp = fopen(strcat(fileName, ".dat"), "r");
				fread(&user, sizeof(struct login), 1, fp);
				fclose(fp);
				if (!strcmp(pwd, user.Password))
				{
					printf("\n======Welcome %s======\n", name);

					printf("Give me a number: ");
					scanf("%d", &number);

					for (num = 1; num <= 10; num++)
					{
					result = number * num;
					
					printf("%d * %d = %d\n", number, num, result);
					}
				}
				else
				{
					printf("\nInvalid Password\n");
				}

	
			}
	}



}
