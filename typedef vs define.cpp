Typedef versus #define in C++

typedef: The typedef is used to give data type a new name. For example,

COde:

// C program to demonstrate typedef 
#include <stdio.h> 

// After this line BYTE can be used 
// in place of unsigned char 
typedef unsigned char BYTE; 

int main() 
{ 
	BYTE b1, b2; 
	b1 = 'c'; 
	printf("%c ", b1); 
	return 0; 
} 

Output: c

Code:

// C program to demonstrate #define 
#include <stdio.h> 

// After this line HYD is replaced by 
// "Hyderabad" 
#define HYD "Hyderabad" 

int main() 
{ 
	printf("%s ", HYD); 
	return 0; 
} 


Output:
Hyderabad


Difference between typedef and #define:

1.typedef is limited to giving symbolic names to types only, whereas #define can be used to define an alias for values as well, e.g., 2.you can define 1 as ONE, 3.14 as PI, etc.
3.typedef interpretation is performed by the compiler where #define statements are performed by preprocessor.
4.#define should not be terminated with a semicolon, but typedef should be terminated with semicolon.
5.#define will just copy-paste the definition values at the point of use, while typedef is the actual definition of a new type.
6.typedef follows the scope rule which means if a new type is defined in a scope (inside a function), then the new type name will only 7.be visible till the scope is there. In case of #define, when preprocessor encounters #define, it replaces all the occurrences, after 8.that (No scope rule is followed).


typedef char* ptr;
ptr a, b, c;

the statement effectively becomes

char *a, *b, *c;

This declares a, b, c as char*.

In contrast, #define works like this:

#define PTR char*
PTR x, y, z;

the statement effectively becomes
char *x, y, z;

This makes x, y and z different, as, x is pointer-to-a char, whereas, y and z are char variables.


Conclusion:

Use typedef to give data type a new name and use #define to define constant and other alias.


 
