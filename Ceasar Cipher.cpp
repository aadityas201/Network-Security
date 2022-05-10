#include<stdio.h>
void Encrypt(char *message, int key);
void Decrypt(char *message, int key);
int main()
{	
	printf("Roll no : 32103\n");
	char message[100], ch;
	int i, key;
	printf("Enter a message to encrypt: ");
	gets(message);
	printf("Enter key: ");
	scanf("%d", &key);
	Encrypt(message, key);
	printf("\n");
	Decrypt(message, key);
	return 0;
}
void Encrypt(char *message, int key){
	char  ch; int i;	
	for(i = 0; message[i] != '\0'; ++i){
		ch = message[i];
		if(ch >= 'a' && ch <= 'z'){
			ch = ch + key;
			if(ch > 'z'){
				ch = ch - 'z' + 'a' - 1;
			}
			message[i] = ch;
		}
		else if(ch >= 'A' && ch <= 'Z'){
			ch = ch + key;
			if(ch > 'Z'){
				ch = ch - 'Z' + 'A' - 1;
		}
			message[i] = ch;
	}
}
printf("Encrypted message: %s", message);
}
void Decrypt(char *message, int key){
	char ch; int i;
	for(i = 0; message[i] != '\0'; ++i){
	



 


ch = message[i];
	if(ch >= 'a' && ch <= 'z'){
		ch = ch - key;
		if(ch < 'a'){
			ch = ch + 'z' - 'a' + 1;
		}
		message[i] = ch;
	}
	else if(ch >= 'A' && ch <= 'Z'){
		ch = ch - key;
		if(ch < 'A'){
			ch = ch + 'Z' - 'A' + 1;
			}
		message[i] = ch;
		}
	}
	printf("Decrypted message: %s", message);
}

