#include<stdio.h>
#include<string.h>

struct employee {
    int emp_id;
    char emp_name[20];
    float emp_salary;   
};

void main(){
    struct employee emp;
    printf("Enter employee Number:\n");
    scanf("%d",&emp.emp_id);
    printf("Enter Employee Name:\n");
    scanf("%s",emp.emp_name);
    printf("Enter Employee Salary:\n");
    scanf("%f",&emp.emp_salary);
    printf("Employee Number=%d\n",emp.emp_id);
    printf("Employee Name=%s\n",emp.emp_name);
    printf("Employee Salary=%f\n",emp.emp_salary);
    float tax = emp.emp_salary * 0.1;
    printf("Employee Tax=%f\n",tax);    
}
