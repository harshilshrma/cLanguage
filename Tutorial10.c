// #include <stdio.h>

// int main()
// {
//     int age;
//     printf("Enter your age: ");
//     scanf("%d",&age);
//     printf("You have entered %d as your age.\n", age);

//     if (age>=18){
//         printf("You can vote.");
//     }
//     else
//         printf("You cannot vote.");

//     return 0;
// }


// Quiz
#include <stdio.h>
int main()
{
    int minput, sinput;
    printf("Have you passed maths exam? Enter 1 for yes or 0 for no: ", minput);
    scanf("%d",&minput);
    printf("Have you passed science exam? Enter 1 for yes or 0 for no: ", sinput);
    scanf("%d",&sinput);

    if (minput == 1 && sinput == 1){
        printf("\nSince you've passed both of the exams, your prize money is: $45.");
    }

    else if (minput == 1 && sinput == 0){
        printf("\nSince you've passed only one subject i.e., maths, your prize money is: $15.");
    }

    else if (minput == 0 && sinput == 1){
        printf("\nSince you've passed only one subject i.e., science, your prize money is: $15.");
    }

    else if (minput == 0 && sinput == 0){
        printf("\nSince you've failed in both the subjects, your prize money is: $0.");
    }

    else{
        printf("\nINVALID ENTRY!");
    }
    
    return 0;
}
