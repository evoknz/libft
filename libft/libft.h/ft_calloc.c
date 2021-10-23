void	*ft_calloc(size_t count, size_t size)
//The malloc() calloc () valloc () realloc() reallocf() functions allocate memory. The allocated memory is aligned such that it can be 
//used for any date type, including AltiVec- and SSE- related types. The free() function frees allocations that were 
//created via the preceding allocation functions
//The malloc() function allocates size bytes of memory and returns a pointer to the allocated memory.
//If successful, the functions return a pointer to allocated memory, If there is an error, they return a NULL pointer and set errno to ENOMEM.
{
	void	*ptr;

	ptr = (void*)malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, count);
	return (ptr);
}
