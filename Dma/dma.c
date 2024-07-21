// dma is a way in which a size of data structure can  be changed during the run time 

// memory assigned to a program  in a typical architecture can be broken down into 4 segments 

// code
// global variables/ static var 
// stack 
// heap 

// int arr[10] -> will be stored in the stck 

// dma is basically nothing but allocation heap 

// in dma the memory is allocated at runtime for the heap segment 


// four functions 
// malloc 
// callloc 
// realloc 
// free



/////////////////////////////////////////////////////


// malloc stand  for memory allocations 
// it reserves a  block of memory with the given amount of bytes 
// the return value is a void pointer to the allocated space 
// if the space is insuffuicient allocation of memory fails and it returns a null pointer 
// all the values allocated memory are initialized to garbage value 



// calloc() stands for contiguous alloaction 
//  it reserves n block  of memory with the given amount of bytes 
// the return value is void pointer to a given space 
// same as malloc
// all the values at alloctaed memory are initialized to 0 



// relloc stands for realloaction 
// if the dynamically allloacted memory is insufficient we can change the size of previously alllocated memory using 
 


 // free( )is used to free the alloacted memory 
 // if the dynamically allloceted memory is not required  anymore 
 // this will free the memory being used by the prog in the heap 