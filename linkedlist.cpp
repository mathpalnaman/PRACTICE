//initialize nodes
struct node*head;
struct node *one =  NULL;
struct node *two = NULL;
struct node *three = NULL;
/*allocate memory*/
one = malloc(sizeof(struct node));
two = malloc(sizeof(struct node));
three = malloc(sizeof(stuct node));
/* assign data values */
one->data = 1;
two->data = 2;
three->data = 3;
/* connect nodes */
one->next=two;
two->next=three;
three->next=NULL;
/* save address of first node in head */
head = one;
