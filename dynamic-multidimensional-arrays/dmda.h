#ifndef DMDA_H_
#define DMDA_H_

/*
Copyright (c) 2011, dystopiancode
All rights reserved.

Redistribution and use in source and binary forms, with or without modification,
are permitted provided that the following conditions are met:

    Redistributions of source code must retain the above copyright notice, this list of
    conditions and the following disclaimer.
    Redistributions in binary form must reproduce the above copyright notice, this
    list of conditions and the following disclaimer in the documentation and/or other
    materials provided with the distribution.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, 
WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING 
IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

For more information about this library, see:
http://dystopiancode.blogspot.com
*/
#include<stdlib.h>

/*
 * Abstract:
 *  Allocates a 1D array
 * Parameters:
 *  vector - a pointer to the 1D array
 *  xsize - the size of the array
 *  elementSize - the size of one element
 * Returns:
 *  A pointer to the allocated array
 */
void* NAlloc1D(void* vector, size_t xsize, size_t elementSize);
/*
 * Abstract:
 *  Allocates a 2D array
 * Parameters:
 *  vector - a pointer to the 2D array
 *  xsize - the x size of the array (real of rows)
 *  ysize - the y size of the array (real of columns)
 *  elementSize - the size of one element
 * Returns:
 *  A pointer to the allocated array
 */
void** NAlloc2D(void **vector, size_t xsize, size_t ysize, size_t elementSize);
/*
 * Abstract:
 *  Allocates a 3D array
 * Parameters:
 *  vector - a pointer to the 3D array
 *  xsize - the x size of the array (real of rows)
 *  ysize - the y size of the array (real of columns)
 *  zsize - the z size of the array (real of tables)
 *  elementSize - the size of an array element
 * Returns:
 *  A pointer to the allocated array
 */
void*** NAlloc3D(void ***vector, size_t xsize, size_t ysize, size_t zsize,
        size_t elementSize);
/*
 * Abstract:
 *  Allocates a 4D array
 * Parameters:
 *  vector - a pointer to the 4D array
 *  xsize - the x size of the array (real of rows)
 *  ysize - the y size of the array (real of columns)
 *  zsize - the z size of the array (real of tables)
 *  tsize - the t size of the array
 *  elementSize - the size of an array element
 * Returns:
 *  NULL
 */
void**** NAlloc4D(void ****vector, size_t xsize, size_t ysize, size_t zsize,
        size_t tsize, size_t elementSize);

/*Deallocation functions*/
/*
 * Abstract:
 *  Deallocates a 1D array
 * Parameters:
 *  vector - a pointer to the 1D array
 * Return:
 *  NULL
 */
void* NFree1D(void *vector);
/*
 * Abstract:
 *  Deallocates a 2D array
 * Parameters:
 *  vector - a pointer to the 2D array
 *  xsize - the x size of the array (real of rows)
 * Returns:
 *  NULL
 */
void** NFree2D(void **vector, size_t xSize);
/*
 * Abstract:
 *  Deallocates a 3D array
 * Parameters:
 *  vector - a pointer to the 3D array
 *  xsize - the x size of the array (real of rows)
 *  ysize - the y size of the array (real of columns)
 * Returns:
 *  NULL
 */
void*** NFree3D(void ***vector, size_t xsize, size_t ysize);
/*
 * Abstract:
 *  Deallocates a 4D array
 * Parameters:
 *  vector - a pointer to the 3D array
 *  xsize - the x size of the array (real of rows)
 *  ysize - the y size of the array (real of columns)
 *  zsize - the z size of the array (real of tables
 * Returns:
 *  NULL
 */
void**** NFree4D(void ****vector, size_t xsize, size_t ysize, size_t zsize);

#endif /* DMDA_H_ */
