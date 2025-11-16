#include<stdio.h>

struct list {
    struct list *prev;
    struct list *next;
};

typedef struct list list_t;
typedef struct list list_element_t;

int main()
{
    struct element{
        list_element_t link;
        int value;
    };

    list_t my_list;

    /*******sizeofでサイズを確認********/
    printf("%ld\n", sizeof(my_list));
    printf("%ld\n", sizeof(struct element));
    /**********************************/

    struct element e1 = {.value = 1234};
    struct element e2 = {.value = 5678};
    e1.link.next = &e2.link;
    e2.link.prev = &e1.link;

    printf("%d\n", e1.value);
    printf("%ld\n", sizeof(e1.link));
    printf("e1 prev %p\n", e1.link.prev);
    printf("e1 next %p\n", e1.link.next);
    printf("&e1.list%p\n", &e1.link);

    printf("e2 prev %p\n", e2.link.prev);
    printf("e2 next %p\n", e2.link.next);
    printf("&e2.list%p\n", &e2.link);


    return 0;
}
