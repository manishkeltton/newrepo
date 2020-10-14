#include <stdio.h>

int main() {
    int myArray[] = {1,2,3,4};
    int myArrayLength = sizeof(myArray)/sizeof(*myArray);
    int i, j;
    for(j=i=0;i<myArrayLength;++i){
        if(myArray[j]!=myArray[i]){
        printf("(%d,%d)", myArray[j], myArray[i]);
        if(i == myArrayLength -1){
            i = j++;//++j - 1;
            printf("\n");
        }
    }
  }
    return 0;
}
