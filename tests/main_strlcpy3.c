/* reference: https://en.wikibooks.org/wiki/C_Programming/C_Reference/nonstandard/strlcpy

 Just stick to the idea of using truncation to detect 
 if a memory region is more suitable due to performance than another

	Copies to a fast block of memory on the stack:
	if the source fits on this stack buffer, uses it
	else the source is truncated, use a slower buffer on the heap:
	if the address of the coppied string is not equal the stack buffer
	frees the memory, allocation on heap occured
*/

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char *source = "String to copy";
	char *copy;
	size_t length = strlen(source);

	char stack_buffer[128];
	length = strlcpy(stack_buffer, source, sizeof(stack_buffer));

	if (length < sizeof(stack_buffer))
	{
		copy = stack_buffer;
	}
	else
	{
		copy = malloc(length+1);
		if (! copy )
			return (1);
		//Commented because the flags don't allow it to happen
		//memcpy(copy, source, length + 1); 
		strlcpy(copy, source, length + 1);
	}
	printf("copy: %s\nlenth:%lu\n", copy,length);
	if (copy != stack_buffer)
	{
		free(copy);
		copy = NULL;
	}
	/* Okay, but where our code fits in all that???
	 Let's do the same logic using our code to see if it produces the same behaviour
	 if it does, our mimic job is done, le'ts move forward
	*/
	char *ft_copy;
	size_t ft_length = ft_strlen(source);
	char ft_stack_buffer[128];
	length = ft_strlcpy(ft_stack_buffer, source, sizeof(ft_stack_buffer));

	if (ft_length < sizeof(ft_stack_buffer))
	{
		ft_copy = ft_stack_buffer;
	}
	else
	{
		ft_copy = malloc(length+1);
		if(!ft_copy)
			return(1);
		ft_strlcpy(ft_copy, source, ft_length+1);
	}
	printf("copy: %s\nlenth:%lu\n", copy,length);
	if (ft_copy != ft_stack_buffer)
	{
		free(ft_copy);
		copy = NULL;
	}

	return (0);

}
