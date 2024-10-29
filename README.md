# Libft

_Those functions are for educational purposes only_  
_As they may be bug or error prone, do not use them on real projects, or do your own checks_  

_Disclaimer: I try to keep the 42 Style, but it's not [normalized](https://github.com/sumxtx/norminette). Take it in consideration_

### Usage
- Help Usage, Default Target
```
make
```
- Build the archive (libft.a)  
```
make all
```
- Build the archive (libft.a) without --silent flag  
(For all recipes --silent flag is activated by default consider deactivating it if needed)  
```
make all VERBOSE=y
```
- Testing a function  
Build archive (libft.a) and a binary with the test for the function name
###### (see available mains at: [test/main_*](https://github.com/sumxtx/Libft/tree/main/tests)
###### (see available functions at: [includes/source_list](https://github.com/sumxtx/Libft/blob/main/includes/source_list))
```
make MAIN=<functionName>
```

- Debugging  
Make MAIN=<functionName> with debug(-g), and sanitize flags  
Only available with the main build
```
make MAIN=<functionName> DEBUG=y
```

## Part 0 - Build Tools 

- [x] • Makefile

## Part 1 - Libc functions

- [x] •• isalpha  
- [x] •• isdigit  
- [x] •• isalnum  
- [x] •• isascii  
- [x] •• isprint  
- [x] •• strlen  
- [x] •• memset  
- [x] •• bzero  
- [x] •• memcpy  
- [x] •• memmove  
- [x] •• strlcpy  
- [x] •• strlcat  
- [x] •• toupper  
- [x] •• tolower  
- [x] •• strchr  
- [x] •• strrchr  
- [x] •• strncmp  
- [x] •• memchr  
- [x] •• memcmp  
- [x] •• strnstr  
- [x] •• atoi  
- [x] •• strdup  
- [x] •• calloc    

## Part 2 - Additional functions

- [x] •• substr  
- [x] •• strjoin     
- [x] •• strtrim  
- [x] •• split  
- [x] •• itoa  
- [x] •• strmapi
- [x] •• striteri
- [x] •• putchar_fd
- [x] •• putstr_fd
- [x] •• putendl_fd
- [x] •• putnbr_fd

## Bonus

- [x] •• lstnew
- [x] •• lstadd_front
- [x] •• lstsize
- [x] •• lstlast
- [x] •• lstadd_back
- [x] •• lstdelone
- [x] •• lstclear
- [x] •• lstiter
- [x] •• lstmap

## Addendum

- [x] •• isspace  
- [x] •• isupper  
- [x] •• islower  
- [x] •• strnlen  
- [x] •• strndup  
- [ ] •• atob  

