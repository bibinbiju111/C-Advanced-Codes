/*#include<stdio.h>
int main(int argc, char *argv[]){
    int i;
    if(argc<=1){
        printf("only 1 cmd line arg");
        return -1;
    }
    else{
        for(i=0;i<argc;i++){
            printf("%s  ",argv[i]);
        }
    }
} */

#include<stdio.h>
int main(int argc, char *argv[])

{

    while (argc--)

        printf("%s\n", argv[argc]);

    return 0;
}