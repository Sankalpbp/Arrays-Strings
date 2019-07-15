struct node {

	int data;
	struct node *next;
};

struct node* create_linked_list(struct node *start) {

	struct node *new_node, *ptr;
	int num;
	printf("\nEnter the data: ");
	scanf("%d", &num);

	while(num != -1) {

		new_node = (struct node *) malloc(sizeof(struct node));
		new_node -> data = num;

		if(start == NULL) {

			new_node -> next = NULL;
			start = new_node;
		}

		else {

			ptr = start;

			while(ptr -> next != NULL) {

				ptr = ptr -> next;
			}

			ptr -> next = new_node;
			new_node -> next = NULL;
		}

		printf("\nEnter the data(: ");
		scanf("%d", &num);
	}

	return start;
}

void display_linked_list(struct node *start) {

	struct node *ptr = start;

	while(ptr != NULL) {

		printf("%d -> ",ptr -> data);
		ptr = ptr -> next;
	}
}

struct node* delete_first_node(struct node *start) {

	struct node *ptr = start;

	start = start -> next;

	free(ptr);

	return start;
}
struct node* delete_linked_list(struct node *start) {

	struct node *ptr = start;

	if(start != NULL) {

		ptr = start;

		while(ptr != NULL) {

			printf("\n%d is to be deleted next", ptr -> data);
			start = delete_first_node(ptr);
			ptr = start;
		}
	}

	return start;
}

struct node* insert_beginning(struct node* start) {

	struct node* new_node;
	new_node = (struct node*) malloc(struct node);

	printf("\nEnter the data: ");
	scanf("%d", &(new_node -> data));

	new_node -> next = start;
	start = new_node;

	return start;
}