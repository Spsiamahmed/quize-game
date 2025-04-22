#include <stdio.h>

int main() {
    char name[50];
    int score = 0;
    int answer;

    printf("তোমার নাম লিখো: ");
    scanf("%s", name);

    printf("\n%s, কুইজ শুরু হোক!\n", name);

    // প্রশ্ন ১
    printf("\n1. বাংলাদেশের রাজধানী কোনটি?\n");
    printf("1) চট্টগ্রাম\n2) খুলনা\n3) ঢাকা\n4) বরিশাল\n");
    printf("তোমার উত্তর (1-4): ");
    scanf("%d", &answer);
    if(answer == 3) {
        score++;
        printf("সঠিক উত্তর!\n");
    } else {
        printf("ভুল উত্তর!\n");
    }

    // প্রশ্ন ২
    printf("\n2. পৃথিবীর সবচেয়ে বড় মহাসাগর কোনটি?\n");
    printf("1) আটলান্টিক\n2) ভারত মহাসাগর\n3) প্রশান্ত মহাসাগর\n4) আর্কটিক\n");
    printf("তোমার উত্তর (1-4): ");
    scanf("%d", &answer);
    if(answer == 3) {
        score++;
        printf("সঠিক উত্তর!\n");
    } else {
        printf("ভুল উত্তর!\n");
    }

    // স্কোর দেখাও
    printf("\n%s, তোমার স্কোর: %d/2\n", name, score);

    return 0;
}
