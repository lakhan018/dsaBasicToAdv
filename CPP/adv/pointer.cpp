int score = 100;
int* scorePtr = &score; // scorePtr now holds the address of score

std::cout << *scorePtr; // Prints 100 (the value at the address)
