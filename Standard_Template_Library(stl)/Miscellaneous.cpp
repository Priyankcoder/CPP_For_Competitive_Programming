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

2 . In c++, undefined strings are char array like in const std::string message = "Hello" + "", both the "Hello" and empty string are char array and in c++, you can't concatenate two char
array or one char array and one char data type but string data type can be concatenated with char array or char data type and the output will be string data type. Note: str[2] are char type.
for ex;
const std::string hello = "Hello";
const std::string message = hello + ", world" + "";

it works, because the operations the compiler would see were std::string + const char[8] + const char[1]. Here, the first addition can be converted to std::string + const char*, and here the addition 
operator is defined, and returns a std::string. So the compiler has successfully figured out the first addition, and since the result was a string, the second addition looks like this: std::string + const char[2], 
and like before, this isn't possible, but the array can be converted to a pointer, and then the compiler is able to find an addition operator that works, again resulting in a std::string.






