#include <stdio.h>
#include <string.h>
#include<stdlib.h>
struct library
{
    int accession_number;
    char title[100];
    char auth[100];
    int price;
    int flag;
};
struct library *addBookInfo(struct library *books, int i)
{
    printf("Accession Number : ");
    scanf("%d", &books[i].accession_number);
    printf("Book Title : ");
    scanf("%s", books[i].title);
    printf("Author Name : ");
    scanf("%s", books[i].auth);
    printf("Price : ");
    scanf("%d", &books[i].price);
    printf("If book is issued enter 1 else enter 0 : ");
    scanf("%d", &books[i].flag);
    return books;
}
void showBookInfo(struct library *books, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Book %d\n", i + 1);
        printf("Accession Number : %d\n", books[i].accession_number);
        printf("Book Title :%s\n", books[i].title);
        printf("Author Name : %s\n", books[i].auth);
        printf("Price : %d\n", books[i].price);
        printf("Book issued status : %d\n", books[i].flag);
    }
}
void booksGivenAuthor(struct library *books, int n, char *authname)
{
    int count = 1;
    for (int i = 0; i < n; i++)
    {
        if (strcmp(books[i].auth, authname) == 0)
        {
            printf("Book %d\n", count);
            printf("Accession Number : %d\n", books[i].accession_number);
            printf("Book Title :%s\n", books[i].title);
            printf("Author Name : %s\n", books[i].auth);
            printf("Price : %d\n", books[i].price);
            printf("Book issued status : %d\n", books[i].flag);
            count++;
        }
    }
}
void findSpecifiedBook(struct library *books, int n, int accnum)
{
    for (int i = 0; i < n; i++)
    {
        if (accnum == books[i].accession_number)
        {
            printf("Accession Number : %d\n", books[i].accession_number);
            printf("Book Title :%s\n", books[i].title);
            printf("Author Name : %s\n", books[i].auth);
            printf("Price : %d\n", books[i].price);
            printf("Book issued status : %d\n", books[i].flag);
        }
    }
}
void printBookAccordingToAcc(struct library *books, int n)
{
    int i, j;

    for (i = 0; i < n; i++)
    {
        int minm = books[i].accession_number;
        int p = i;
        for (j = i; j < n; j++)
        {
            if (books[j].accession_number < minm)
            {
                minm = books[j].accession_number;
                p = j;
            }
        }
        if (p != i)
        {
            struct library temp;
            temp.accession_number = books[i].accession_number;
            strcpy(temp.title, books[i].title);
            strcpy(temp.auth , books[i].auth);
            temp.price = books[i].price;
            temp.flag = books[i].flag;

            books[i].accession_number = books[j].accession_number;
            strcpy(books[i].title, books[j].title);
            strcpy(books[i].auth , books[j].auth);
            books[i].price = books[j].price;
            books[i].flag = books[j].flag;

            books[j].accession_number = temp.accession_number;
            strcpy(books[j].title , temp.title);
            strcpy(books[j].auth , temp.auth);
            books[j].price = temp.price;
            books[j].flag = temp.flag;
        } 
    }
    for (i = 0; i < n; i++)
    {
        printf("Book %d\n", i + 1);
        printf("Accession Number : %d\n", books[i].accession_number);
        printf("Book Title :%s\n", books[i].title);
        printf("Author Name : %s\n", books[i].auth);
        printf("Price : %d\n", books[i].price);
        printf("Book issued status : %d\n", books[i].flag);
    }
}
int main()
{
    int n, t, i = 0;
    printf("Enter max capacity of record: ");
    scanf("%d", &n);
    struct library *books = (struct library *)malloc(n * sizeof(struct library));
    while (1)
    {
        printf("Add Book Information-> Enter 1\n");
        printf("Display book information-> Enter 2\n");
        printf("List all books of given author-> Enter 3\n");
        printf("List the title of specified book-> Enter 4\n");
        printf("List the count of books in the library-> Enter 5\n");
        printf("List the books in the order of accession number->Enter 6\n");
        printf("Exit->Enter 7\n");
        scanf("%d", &t);
        switch (t)
        {
        case 1:
            if (i == n)
            {
                return 0;
            }
            books = addBookInfo(books, i);
            i++;
            break;
        case 2:
            if(i==0){
                printf("Data not found\n");
            }else{
                printf("\n");
                showBookInfo(books, i);
                printf("\n");
            }
            break;
        case 3:
            if (i == 0)
            {
                printf("Data not found\n");
            }
            else
            {
                char authname[100];
                printf("Enter author name : ");
                scanf("%s", authname);
                printf("\n");
                booksGivenAuthor(books, i, authname);
                printf("\n");
            }
            break;
        case 4:
            if (i == 0)
            {
                printf("Data not found\n");
            }
            else
            {
                int accnum;
                printf("Enter Accession Number : ");
                scanf("%d", &accnum);
                printf("\n");
                findSpecifiedBook(books, i, accnum);
                printf("\n");
            }
            break;
        case 5:
            printf("\n");
            printf("The number of Books in the library : %d\n", i);
            printf("\n");
            break;
        case 6:
            if (i == 0)
            {
                printf("Data not found\n");
            }
            else
            {
                printf("\n");
                printBookAccordingToAcc(books, i);
                printf("\n");
            }
            break;
        case 7:
            return 0;
            break;
        }
    }
    return 0;
}