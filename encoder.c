#include<stdio.h>
#include<stdbool.h>

bool isUppercase(char s){
	if(s>='A'&&s<='Z') return true;
	else return false;
}

bool isLowercase(char s){
	if(s>='a'&&s<='z') return true;
	else return false;
}

bool isAlphabet(char s){
	if(isUppercase(s)||isLowercase(s)) return true;
	else return false;
}

int main(){
	int key=0;
	int cnt=0;
	
	while(true){
		cnt=0;
		char str[10000]={};
		char res[10000]={};
		while(true){
			printf("Input the key: ");
			scanf("%d", &key);
			if(key>0) break;
			else{
				printf("Please put positive integer.\n");
			}
		}
		
	
		printf("Input the sentence(10000 letters at most): ");

		while(true){
			fgets(str, sizeof(str), stdin);
			if(str[0]!='\n') break;
		}
		
		for(int i=0; ; i++){
			if(str[i]=='\0') break;
			else{
				if(isAlphabet(str[i])){
					if(isUppercase(str[i])){
						res[i]='A'+(str[i]-'A'+(cnt%key))%26;
					}
					else{
						res[i]='a'+(str[i]-'a'+(cnt%key))%26;
					}
					cnt++;
				}
				else{
					res[i]=str[i];
				}
			}
		}
		
		printf("The result: %s\n", res);
	}
	return 0;
}
