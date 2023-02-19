#include <stdio.h>
 #include <string.h>
int main() {
    int i, j, keylen, msglen, k = 0;
    char input[100], key[30],temp[30],quot[100],rem[30],key1[30];
	printf("Enter Codeword: ");
	gets(input);
	printf("Enter Generator Pattern: ");
	gets(key);
	keylen=strlen(key);
	msglen=strlen(input);
	strcpy(key1,key);
	for (i=0;i<keylen-1;i++) {
		input[msglen+i]='0';
	}
	for (i=0;i<keylen;i++)
	 temp[i]=input[i];
	for (i=0;i<msglen;i++) {
		quot[i]=temp[0];
		if(quot[i]=='0')
		 for (j=0;j<keylen;j++)
		 key[j]='0'; else
		 for (j=0;j<keylen;j++)
		 key[j]=key1[j];
		for (j=keylen-1;j>0;j--) {
			if(temp[j]==key[j])
			 rem[j-1]='0'; else
			 rem[j-1]='1';
		}
		rem[keylen-1]=input[i+keylen];
		strcpy(temp,rem);
	}
	strcpy(rem,temp);
	printf("\nQuotient is ");
	for (i=0;i<msglen;i++)
	 printf("%c",quot[i]);
	printf("\nRemainder is ");
	for (i=0;i<keylen-1;i++)
    {
	 printf("%c",rem[i]);
     if(rem[i]=='0')
         k = k + 1;
    }
     if(k==(keylen-1))
          printf("\nRemainder is ZERO No Error in Data reading\n");
          else
          {
          printf("\nRemainder is NOT ZERO There is an Error in Data reading\n");
          }
}