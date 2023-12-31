#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>

struct node
{
    int id;
    int sal;
    char name[20], dept[10], post[20];
    struct node *next;
};
typedef struct node *nodeptr;

nodeptr head = NULL;
nodeptr getnode()
{
    nodeptr p = (nodeptr)malloc(sizeof(nodeptr));
    return (p);
}

void addemp()
{
    system("cls");
    nodeptr new = getnode();
    printf("\n\n\t\t\t================================");
    printf("\n\n\t\t\t INSERT EMPLOYEE RECORD:");
    printf("\n\n\t\t\t================================");
    printf("\n\n EMPLOYEE ID: ");
    scanf("%d", &new->id);
    printf("\n\n EMPLOYEE NAME: ");
    scanf("%s", new->name);
    printf("\n\n EMPLOYEE POST: ");
    scanf("%s", new->post);
    printf("\n\n EMPLOYEE DEPARTMENT: ");
    scanf("%s", new->dept);
    printf("\n\n EMPLOYEE SALARY: ");
    scanf("%d", &new->sal);
    if (head == NULL)
    {
        head = new;
        new->next = NULL;
    }
    else
    {
        nodeptr temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = new;
        new->next = NULL;
    }
    printf("\n\n ***EMPLOYEE RECORD INSERTED***");
}

void display()
{
    nodeptr temp = head;
    if (temp == NULL)
    {
        printf("\n\n ***LINKED LIST IS EMPTY***");
    }
    printf("\n\n\t\t\t=============================");
    printf("\n\n\t\t\t DISPLAY EMPLOYEE RECORD");
    printf("\n\n\t\t\t=============================");
    while (temp != NULL)
    {
        system("cls");
        printf("\n\n\t\t\t=============================");
        printf("\n\n\t\t\t      EMPLOYEE RECORD");
        printf("\n\n\t\t\t=============================");
        printf("\n\n EMPLOYEE ID: %d", temp->id);
        printf("\n\n EMPLOYEE NAME: %s", temp->name);
        printf("\n\n EMPLOYEE POST: %s", temp->post);
        printf("\n\n EMPLOYEE DEPARTMENT: %s", temp->dept);
        printf("\n\n EMPLOYEE SALARY: %d", temp->sal);
        printf("\n\n\t\t\t=============================");
        temp = temp->next;
    }
}

int deleteend()
{
    nodeptr temp, ptr;
    if (head == NULL)
    {
        printf("\n\n ***LINKED LIST IS EMPTY***");
    }
    else if (head->next == NULL)
    {
        ptr = head;
        head = NULL;
        printf("\n\n\t\t\t=============================");
        printf("\n\n\t\t\t DELETED EMPLOYEE RECORD");
        printf("\n\n\t\t\t=============================");
        printf("\n\n EMPLOYEE ID: %d", ptr->id);
        printf("\n\n EMPLOYEE NAME: %s", ptr->name);
        printf("\n\n EMPLOYEE POST: %s", ptr->post);
        printf("\n\n EMPLOYEE DEPARTMENT: %s", ptr->dept);
        printf("\n\n EMPLOYEE SALARY: %d", ptr->sal);
        printf("\n\n\t\t\t=============================");
        free(ptr);
    }
    else
    {
        ptr = head;
        while (ptr->next != NULL)
        {
            temp = ptr;
            ptr = ptr->next;
        }
        temp->next = NULL;
        printf("\n\n\t\t\t=============================");
        printf("\n\n\t\t\t DELETED EMPLOYEE RECORD");
        printf("\n\n\t\t\t=============================");
        printf("\n\n EMPLOYEE ID: %d", ptr->id);
        printf("\n\n EMPLOYEE NAME: %s", ptr->name);
        printf("\n\n EMPLOYEE POST: %s", ptr->post);
        printf("\n\n EMPLOYEE DEPARTMENT: %s", ptr->dept);
        printf("\n\n EMPLOYEE SALARY: %d", ptr->sal);
        printf("\n\n\t\t\t=============================");
        free(ptr);
    }
}

void search_id()
{
    int empid, found = 0;
    nodeptr temp;
    printf("\n\n\t\t\t=============================");
    printf("\n\n\t\t\t SEARCH EMPLOYEE RECORD");
    printf("\n\n\t\t\t=============================");
    if (head == NULL)
    {
        printf("\n\n ***LINKED LIST IS EMPTY***");
    }
    else
    {
        printf("\n\n EMPLOYEE ID FOR SEARCH: ");
        scanf("%d", &empid);
        temp = head;
        while (temp != NULL)
        {
            if (empid == temp->id)
            {
                printf("\n\n\t\t\t=============================");
                printf("\n\n\t\t\t SEARCH EMPLOYEE RECORD");
                printf("\n\n\t\t\t=============================");
                printf("\n\n EMPLOYEE ID: %d", temp->id);
                printf("\n\n EMPLOYEE NAME: %s", temp->name);
                printf("\n\n EMPLOYEE POST: %s", temp->post);
                printf("\n\n EMPLOYEE DEPARTMENT: %s", temp->dept);
                printf("\n\n EMPLOYEE SALARY: %d", temp->sal);
                found++;
            }
            temp = temp->next;
        }
        if (found == 0)
        {
            printf("\n\n ***EMPLOYEE ID NOT FOUND");
        }
    }
}

void edit()
{
    int empid, found = 0;
    nodeptr temp;
    printf("\n\n\t\t\t=============================");
    printf("\n\n\t\t\t MODIFY EMPLOYEE RECORD");
    printf("\n\n\t\t\t=============================");
    if (head == NULL)
    {
        printf("\n\n ***LINKED LIST IS EMPTY***");
    }
    else
    {
        printf("\n\n EMPLOYEE ID FOR SEARCH: ");
        scanf("%d", &empid);
        temp = head;
        while (temp != NULL)
        {
            if (empid == temp->id)
            {
                printf("\n\n\t\t\t=============================");
                printf("\n\n\t\t\t NEW EMPLOYEE RECORD");
                printf("\n\n\t\t\t=============================");
                printf("\n\n EMPLOYEE ID: ");
                scanf("%d", &temp->id);
                printf("\n\n EMPLOYEE NAME: ");
                scanf("%s", temp->name);
                printf("\n\n EMPLOYEE POST: ");
                scanf("%s", temp->post);
                printf("\n\n EMPLOYEE DEPARTMENT: ");
                scanf("%s", temp->dept);
                printf("\n\n EMPLOYEE SALARY: ");
                scanf("%d", &temp->sal);
                printf("\n\n EMPLOYEE RECORD MODIFIED: ");
                found++;
            }
            temp = temp->next;
        }
        if (found == 0)
        {
            printf("\n\n ***EMPLOYEE ID NOT FOUND");
        }
    }
}

void salary_slip()
{
    int empid, found = 0;
    nodeptr temp;
    printf("\n\n\t\t\t=============================");
    printf("\n\n\t\t\t SALARY SLIP GENERATOR");
    printf("\n\n\t\t\t=============================");
    if (head == NULL)
    {
        printf("\n\n ***LINKED LIST IS EMPTY***");
    }
    else
    {
        printf("\n\n EMPLOYEE ID FOR SEARCH: ");
        scanf("%d", &empid);
        temp = head;
        while (temp != NULL)
        {
            if (empid == temp->id)
            {
                printf("\n\t\t\t*****************************************");
                printf("\n\t\t\t");
                printf("\n\t\t\t         EMPLOYEE SALARY SLIP            ");
                printf("\n\t\t\t");
                printf("\n\t\t\t*****************************************");
                printf("\n\n EMPLOYEE ID:                  %d", temp->id);
                printf("\n\n EMPLOYEE NAME:                %s", temp->name);
                printf("\n\n EMPLOYEE POST:                %s", temp->post);
                printf("\n\n EMPLOYEE DEPARTMENT:          %s", temp->dept);
                printf("\n\n EMPLOYEE SALARY:              %d", temp->sal);
                printf("\n\t\t\t*****************************************");
                printf("\n\t\t\t*****************************************");
                found++;
            }
            temp = temp->next;
        }
        if (found == 0)
        {
            printf("\n\n ***EMPLOYEE ID NOT FOUND");
        }
    }
}

void intro()
{
    system("cls");
    printf("\n\n\n\n\n\n\n");
    printf("\t\t\t=============================");
    printf("\n\t\t\t==============================");
    printf("\n\n\n\n\t\t\t  EMPLOYEE MANAGEMENT SYSTEM");
    printf("\n\n\n\t\t\t\t");
    printf("\n\t\t\t=============================");
    printf("\n\t\t\t=============================");
    getch();
}

void login()
{
p:
    system("cls");
    char user[10], pass;
    printf("\n\n");
    printf("\t\t\t=============================");
    printf("\n\t\t\t\tLOGIN PANEL");
    printf("\n\n\t\t\t=============================");
    printf("\n\n\t\t\t=============================");
    printf("\n\n\n ENTER USER NAME: ");
    scanf("%s", user);
    printf("\n\n ENTER PASSWORD: ");
    for (int i = 1; i <= 4; i++)
    {
        pass += getch();
        printf("*");
    }
    printf("\n\n\n\t\t\tCONGRATULATIONS LOGIN SUCCESS");
    printf("\n\n\n\t\t\t\tLOADING");
    for (int i = 1; i <= 6; i++)
    {
        Sleep(500);
        printf(".");
    }
    employerDetails();
    getch();
    goto p;
}

// Function displaying menus
void employerDetails()
{
p:
    system("cls");
    int ch;
    do
    {
        printf("\n\n\t\t\t============================");
        printf("\n\n\t\t\t  EMPLOYEE CONTROL PANEL");
        printf("\n\n\t\t\t============================");
        printf("\n\n 1. INSERT RECORD");
        printf("\n 2. SEARCH RECORD");
        printf("\n 3. EDIT RECORD");
        printf("\n 4. DELETE RECORD");
        printf("\n 5. DISPLAY RECORD");
        printf("\n 6. SALARY SLIP");
        printf("\n 7. EXIT");
        printf("\n\n YOUR CHOICE: ");
        scanf("%d", &ch);
        // Switch statements begin
        switch (ch)
        {
        case 1:
            addemp();
            break;
        case 2:
            system("cls");
            search_id();
            break;
        case 3:
            system("cls");
            edit();
            break;
        case 4:
            system("cls");
            deleteend();
            break;
        case 5:
            system("cls");
            display();
            break;
        case 6:
            system("cls");
            salary_slip();
            break;
        case 7:
            system("cls");
            printf("\n\n\n\n\n\n\n\t\t\t\t\tTHANK YOU..!!!\n\n\n\n\n\n\n\n\n\n\n\n\n");
            exit(0);
            break;
        }
    } while (ch != 8);
    getch();
    goto p;
}

int main()
{
    intro();
    login();
    employerDetails();
    return 0;
}
