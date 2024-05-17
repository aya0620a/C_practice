#include <stdio.h>

int str_compare( char s1[], char s2[] ){

	for( int i=0; s1[i] != '\0' || s2[i] != '\0'; i++ ){
		int diff = (unsigned char)s1[i] - (unsigned char)s2[i];
		if( diff != 0 )
			return diff;
	}
	return 0;
}

int main(void)
{
    char txt1[256];
    char txt2[256];
    

    printf("文字列１を入力してください >>> ");
    fgets(txt1, sizeof(txt1), stdin);

    printf("文字列２を入力してください >>> ");
    fgets(txt2, sizeof(txt2), stdin);

    printf("戻り値;%d\n", str_compare(txt1, txt2));

    if (str_compare(txt1, txt2) == 0)
    {
        printf("%s", txt1);
    }
    else
    {
        if(str_compare(txt1, txt2) < 0){
            printf("%s  %s", txt1, txt2);
        }

        else if(str_compare(txt1, txt2) > 0){
            printf("%s ,%s", txt2, txt1);
        }
    }

    return 0;
}