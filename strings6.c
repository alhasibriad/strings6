//1  input & output

#include <stdio.h>

int main() {
    char str[100];

    gets(str);
    puts(str);

    return 0;
}
// 2  String length 
#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    gets(str);

    while(str[i] != '\0') {
        i++;
    }

    printf("Length = %d", i);

    return 0;
}

// 3 Reverse string
#include <stdio.h>

int main() {
    char str[100];
    int i, len = 0;

    gets(str);

    while(str[len] != '\0') {
        len++;
    }

    for(i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    return 0;
}
// 4. Vowel count
#include <stdio.h>

int main() {
    char str[100];
    int i = 0, count = 0;

    gets(str);

    while(str[i] != '\0') {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||
           str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U') {
            count++;
        }
        i++;
    }

    printf("Vowels = %d", count);

    return 0;
}
// 5 String copy (manual)
#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int i = 0;

    gets(str1);

    while(str1[i] != '\0') {
        str2[i] = str1[i];
        i++;
    }
    str2[i] = '\0';

    puts(str2);

    return 0;
}
//6 String compare (manual)
#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int i = 0, flag = 0;

    gets(str1);
    gets(str2);

    while(str1[i] != '\0' || str2[i] != '\0') {
        if(str1[i] != str2[i]) {
            flag = 1;
            break;
        }
        i++;
    }

    if(flag == 0)
        printf("Equal");
    else
        printf("Not Equal");

    return 0;
}
