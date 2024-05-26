# include<stdio.h>

int bmr(float height, float weight, int age);

struct details
{
    char name[30];
    char email[100];
    float height;
    float weight;
    int age;
    char gender[30];
    char goal[30];
    char activity_level[30];
};

int main()
{
    struct details d[100];
    int i,num;
    printf("Enter the total number of entries:");
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        printf("Enter the name:");
        scanf("%s",&d[i].name);
        printf("\n Enter the email:");
        scanf("%s",&d[i].email);
        printf("\n Enter the height(in cm):");
        scanf("%f",&d[i].height);
        printf("\n Enter the weight(in kg):");
        scanf("%f",&d[i].weight);
        printf("\n Enter the age:");
        scanf("%d",&d[i].age);
        printf("\n Enter the gender:");
        scanf("%s",&d[i].gender);
        printf("\n Enter the goal:");
        scanf("%s",&d[i].goal);
        printf("\n Enter the activity_level:");
        scanf("%s",&d[i].activity_level);
    }
    for(i=0;i<num;i++)
    {
        printf("Name:",d[i].name);
        printf("Email:",d[i].email);
        printf("Height:",d[i].height);
        printf("Weight:",d[i].weight);
        printf("Age:",d[i].age);
        printf("Gender:",d[i].gender);
        printf("Goal",d[i].goal);
        printf("Activity_level",d[i].activity_level);
    }
    return 0;
}