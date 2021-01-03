#include <stdio.h>
#include <string.h>
#define LINE 256
#define WORD 30
int getLine(char s[]);
int getword(char word[]);
int substring(char *str1, char *str2);
int similar(char *s, char *t, int n);
void print_lines(char *str);
void print_similar_words(char *str);
int size(char *s);

int main(){
	char str[WORD];
	scanf(" %s",str);
	char c;
	scanf(" %c",&c);
	if(c == 'a'){
		print_lines(str);
	}
       if(c == 'b'){
		print_similar_words(str);
	}
	return 0;
}
int getLine(char s[]){
	char c;
	int i = 0;
	 while((c = getchar()) != '\n' && c != EOF){
		 s[i++] = c;
	 }
	  s[i] = '\0';  
	return i;
}
int getword(char word[]){
	char c;
	int i = 0;
        c = getchar();
	while(c != EOF && c!=' ' && c!='\t' && c!='\n'){
	     word[i++] = c;
	     c = getchar();
	     }
		word[i] = '\0';
		return i;
}

int substring(char *str1, char *str2){
	
	while(*str1){
		if(*str1 == *str2){
		   str2++;
		}
	         if(!*str2){ 
	         return 1;
		}
		*str1++;
	}
	return 0;
}
int size(char *t){
     int count = 0;
     while(*t != '\0' && *t != '\r'){
         count++;
         t++;
     }
     return count;
}
int similar(char *s, char *t, int n){
	if(substring(s,t)==0){
		return 0;
		}
	if(size(s)-size(t) == n){
	  return 1;
	}
	return 0;
}
void print_lines(char *str){
	char line[LINE];
	while(getLine(line)){
		if(substring(line,str)){
			printf("%s\n",line);
		}
	}
}
void print_similar_words(char *str){
	char w[WORD];
	while(getword(w)){
	     if(similar(w,str,1) || similar(w,str,0)){
		printf("%s\n",w);
		}
	}
}

