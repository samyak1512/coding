#include<stdio.h>
void display(int [][3], int , int);
int main()
{
    int n_students= 3;
    int n_subjects= 3;
    int marks[3][3];
    for(int i=0; i<n_students; i++){
        for(int j=0; j<n_subjects; j++){
            printf("Enter the marks of student %d in subject %d\n", i+1, j+1);
            scanf("%d", &marks[i][j]);
        }
    }
    display(marks,3,3);

   
    return 0;
}
void display(int arr[][3],int x,int y){
     for(int i=0; i<x; i++){
        for(int j=0; j<y; j++){
            printf("%d", arr[i][j]);
           
        }
        printf("\n");
    }
}