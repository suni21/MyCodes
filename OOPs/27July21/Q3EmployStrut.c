#include<stdio.h>
struct employee{
    int id;
    char name[20];
    int age;
    float salary;
};

int main(){
    int i_243,n_243;
    printf("Enter the no of employes: ");
    scanf("%d",&n_243);

    struct employee emp[n_243];
    float gross_sal_243, hra_243, da_243;
    
    printf("\nEnter info of employees:\n");
    for(i_243=0;i_243<n_243;i_243++)
    {
        printf("enter emp id:");
        scanf(" %d", &emp[i_243].id);
        printf("enter emp name:");
        scanf(" %[^\n]",emp[i_243].name);
        printf("enter emplyee age:");
        scanf(" %d", &emp[i_243].age);
        printf("enter the basic salary:");
        scanf(" %f", &emp[i_243].salary);
    }   
    printf("\n");
    printf("Employees details:");
    for(i_243=0;i_243<n_243;i_243++)
    {
        
        printf("\nId:%d",emp[i_243].id);
        printf("\nName:%s",emp[i_243].name);
        printf("\nAge:%d",emp[i_243].age);
        printf("\nSalary:%.2f",emp[i_243].salary);

        da_243 =.8* emp[i_243].salary;
        hra_243 = .1*emp[i_243].salary;

        gross_sal_243= emp[i_243].salary+da_243+hra_243;
         printf("\nGross salary: %.2f", gross_sal_243);
     }  
        printf("\n");
        return 0;

}