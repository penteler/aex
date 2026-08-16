I'm gonna go over this for loop once:
```
	for (i = 0; i < 5; i++){
		newNode = (struct Node *)malloc(sizeof(struct Node));
		printf("enter integer %d", i+1);
		scanf("%d", &value);
		newNode->data = value;
		newNode->next = NULL;
		if (head == NULL){
			head = newNode;
		}
		else {
			temp = head;
			while (temp->next != NULL){
				temp = temp->next;
			}
			temp->next = newNode;
		}
	}
	
```
-i = 0 which is < 5, newnode captures the address returned by malloc for the two fields, user gets the enter integer prompt, scanf stores the input (eg. 7) to the address of value, value gets copied to the newNode data field while newNode->next is set to NULL, head is initially NULL so head and new node become one and the same with a 7 in the data field and NULL in head->next. The rest of the loop body is composed of an else block which would get skipped over and  i gets incremented to 1.
-i = 1 newNode would again capture a fresh memory address, user gets prompted, scanf stores in input(eg. 4) at &value, newNode->data takes the value, newNode->next gets NULL, Now the condition head == NULL is not true because it still has the 7 in the data field and a NULL in the head->next so we should skip over to the else block, temp will receeve the same 7 in temp->data and a NULL for temp->next, The while loop should not run because temp->next = NULL in this iteration so temp->next should now point to a newNode with a 4 in the data field and NULL in the (temp->next)(temp->next) or the next to next of the head, i gets incremented to 2 and in the third iteration the while loop should finally run becaue now temp->next !=NULL.

Assuming that the iterator i only went upto 2 in the previous for loop we would proceed with this one for sorting in a descending order:
```
    for (p = head; p != NULL; p = p->next) {
        for (q = p->next; q != NULL; q = q->next) {
            if (p->data < q->data) {
                tempData = p->data;
                p->data = q->data;
                q->data = tempData;
            }
        }
    }
```
it will run after we have created the LL, p points to the node head pointed to (eg. 7, next), it is not NULL, so in the nested for loop q points to the next node (eg. 4, next), q is not NULL, 7 > 4 so p->data !< q->data, both of the data values will remain as they were before the first iteration of the for loops, q now points to the next node (eg. 9, next), q->data is now 9 which is now greater than p->data tempData will be assigned integer 7 as a value, the node that p points to will be updated as such- [9, next] and the node that q points to will be updated as such [7, next]. After the 'increment' or should we say 'movement' q will be NULL so we will break out of the nested loop, p will point to  [4, next] which will be compared to the recently updated node 3 [7, next] after the exchange 9, 7 and 4 will be sorted in a descending order.

Here I think we can just reuse &value instead of &newValue:
```
    // Input new integer
    printf("\nEnter a new integer: ");
    scanf("%d", &newValue);

    // Create a new node
    newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = newValue;
    newNode->next = NULL;
```
like this
```
scanf("%d", &value);
newNode = malloc(sizeof(struct Node));
newNode->data = value;
newNode->next = NULL;
```