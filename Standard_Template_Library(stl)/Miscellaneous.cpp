Miscellaneous Knowleadge:

1. *p = *q, this statement copies all the content of q into p.
Use of this statement:

Ques - You are given a pointer/ reference to the node which is to be deleted from the linked list of N nodes. The task is to delete the node. Pointer/ reference to head node is not given. 
Note: No head reference is given to you.
This question has been asked in Amazon, Google, Microsoft, Samsung.

Ans - 

 *node = *(node -> next);
  // Where node is pointer to the element that needed to be deleted

Now, node has data of next node and refer to the next to next node.





