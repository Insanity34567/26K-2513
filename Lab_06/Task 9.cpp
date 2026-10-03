#include <stdio.h>
#include <stdlib.h>
int main(){
	char word[100];
	char reverse[100];
	char val;
	int len=0;
	int i=0;
	int x=0;
	int alen;
	int pal=1;
	int vow=0, cont=0;
	printf("Please enter a word: \n");
	scanf("%s", &word);
	printf("\n%s \n\n", word);
	val= word[0];
	while (val !='\0'){
		len++;
		val = word[i++];
	}
	len--;
	i=0;
	printf("The total length of the word is: %d\n\n", len);
	alen= len-1; //Actual length of the word
	for (i=alen; i>=0; i-- ){
		reverse[x]= word[i];
		x++;
	}
	len++;
	reverse[len]= '\0';
	printf("The reverse is: %s\n\n", reverse);
	for (i=0; i<(alen/2);i++){
	if (word[i]== reverse[i]){
		pal=1;
}else{
	pal=0;
}

}
if (pal==1){
	printf("It is a palindrome\n\n");
}else {
	printf("It is not a palindrome\n\n");
}
	i=0;
	while (i<len){
		val = word[i];
		if (val != '\0'){
		
			switch(val){
			
				case 'a' : vow++;
						break;
				case 'e' : vow++;
						break;
				case 'i' : vow++;
						break;
				case 'o' : vow++;
						break;
				case 'u' : vow++;
						break;
				case 'A' : vow++;
						break;
				case 'E' : vow++;
						break;
				case 'I' : vow++;
						break;
				case 'O' : vow++;
						break;
				case 'U' : vow++;
						break;
				default: cont++;
}
	}
	i++;
	}
	
	printf("Consonants: %d\n\n", cont);
	printf("Vowels: %d\n", vow);
	
	return 0;
}
