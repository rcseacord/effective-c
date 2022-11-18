static const char prefix[] = "Error No: ";
#define ARRAYSIZE 14
char str[ARRAYSIZE];

// Ensure that str has sufficient space to store at least one additional 
// character for an error code
static_assert(
    sizeof(str) > sizeof(prefix),
    "str must be larger than prefix"
);
strcpy(str, prefix);