#include <stdio.h>
#include <stdlib.h>

int i;
int numberOfStudents;
float grades[100];
int contorGradesUnderTheMin = 0;
int contorGradesUnderEight = 0;
float procentage;
float gradeMin;

int main()

{  printf("enter the grades:\n");
   printf("(if you want to finish, enter the number 111)\n");

   for( i=1; ; i++ )
    { scanf("%f", &grades[i]);
        numberOfStudents = i-1;
        if ( grades[i] == 111 )
              break ;
    }

    printf("enter the minimum grade to pass the exam:");
        scanf("%f", &gradeMin);


    for ( i=1; i<= numberOfStudents; i++ )
       {if( grades[i] < gradeMin )
            contorGradesUnderTheMin++;
        if( grades[i] < 8 )
            contorGradesUnderEight++;
       }

    if ( contorGradesUnderTheMin == 0)
        printf( "\n All the students pass the exam!\n" );


    procentage = (float) ( contorGradesUnderEight*100 ) / numberOfStudents;
        printf("\n The percentage of students that obtained grades smaller than 8 is %.2f\n", procentage );



    printf("\n Hello world!\n");
    return 0;
}
