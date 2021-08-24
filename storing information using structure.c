#include<stdio.h>
#include<string.h>
struct book
{
char name[20];
char author[20];
int pages;
 float price;
};
int main()
{
struct book b;
strcpy(b.name,"C Programming");
strcpy(b.author,"Reema Thareja");
b.pages=345;
b.price=345.65;
printf("Book Details:\n");
printf("Title:%s\n",b.name);
printf("Author:%s\n",b.author);
printf("pages\n%d",b.pages);
printf("pages\n%f",b.price);
}