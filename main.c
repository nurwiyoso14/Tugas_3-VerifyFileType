#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* KAMUS */
    char FILE_NAME[] = "TestImage.jpg";
    char CC;
    FILE *myfile;
    int retval, i;
    unsigned char bytes[3];

    /* ALGORITMA */
    myfile = fopen(FILE_NAME, "r");
    fread(bytes, 3, 1, myfile);


    /* Pengecekan Signature */
    if (bytes[0] == 0xff && bytes[1] == 0xd8){
        printf("This is JPG/JPEG file");
    }
    else if (bytes[0] == 0x25 && bytes[1] == 0x50){
        printf("This is PDF file");
    }
    else {
        printf("Cannot verify file signature");
    }

    return 0;
}
