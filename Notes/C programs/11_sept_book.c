#include <stdio.h>
#include <string.h>

struct Books {
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
    };

int main()
{
    struct Books Book1,Book2;

      /* bbok 1 specifucation*/
       strcpy(Book1.title,"C Programming");
       strcpy(Book1.author,"Nuha Ali");
       strcpy(Book1.subject,"C Programming Tutorial");
       Book1.book_id=4578798;

       /*book 2 specifucation*/

       strcpy(Book2.title,"Thee Mistakes of my Life");
       strcpy(Book2.author,"Mohandas Karamchand Gandhi");
       strcpy(Book2.subject,"Autobiography");
       Book2.book_id=546778;

       printBook(Book1);
       printBook(Book2);
       return 0;

}

void printBook(struct Books book)
{
    printf("Book title : %s\n",book.title);
    printf("Book author :%s\n",book.author);
    printf("Book subject :%s\n",book.subject);
    printf("Book book_id :%d\n",book.book_id);
}