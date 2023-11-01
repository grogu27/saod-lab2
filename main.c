#include "funk.h"

int main()
{
    struct trie *root = create();
    root = insert(root, "kit", "1");
    root = insert(root, "kot", "2");
    root = insert(root, "ananas", "3");
  
    //root = delete_trie(root, "kot");
    //root = delete_trie(root, "kit");
    //root = delete_trie(root, "ananas");

    trie_print(root, 0);

    struct trie *res = lookup(root, "ananas");
    if (res == NULL)
        printf("Ключа ananas больше нет \n");
    else 
        printf("Значение ключа ananas: %s \n", res->value);

    struct trie *res1 = lookup(root, "kot");
    if (res1 == NULL)
        printf("Ключа kot больше нет \n");
    else 
        printf("Значение ключа kot: %s \n", res1->value);

    struct trie *res2 = lookup(root, "kit");
    if (res2 == NULL)
        printf("Ключа kit больше нет \n");
    else 
        printf("Значение ключа kit: %s \n", res2->value);



    free(root);
    return 0;
}
