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
DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

For more information about this library, see:
http://dystopiancode.blogspot.com
*/
#include "dmda.h"


void* NAlloc1D(void* vector, size_t xsize, size_t elementSize)
{
    vector = malloc(sizeof(elementSize) * xsize);
    return vector;
}

void* NFree1D(void* vector)
{
    if (vector != NULL)
    {
        free(vector);
    }
    return NULL;
}

void** NAlloc2D(void **vector, size_t xsize, size_t ysize, size_t elementSize)
{
    int i;
    vector = malloc(ysize * xsize * elementSize);
    for (i = 0; i < xsize; i++)
    {
        vector[i] = malloc(elementSize * ysize);
    }
    return vector;
}

void** NFree2D(void **vector, size_t xSize)
{
    int i;
    if (vector != NULL)
    {
        for (i = 0; i < xSize; i++)
        {
            free(vector[i]);
        }
        free(vector);
    }
    return NULL;
}

void*** NAlloc3D(void ***vector, size_t xsize, size_t ysize, size_t zsize,
        size_t elementSize)
{
    int i, j;
    vector = malloc(ysize * zsize * xsize * elementSize);
    for (i = 0; i < xsize; i++)
    {
        vector[i] = malloc(zsize * ysize * elementSize);
        for (j = 0; j < ysize; j++)
        {
            vector[i][j] = malloc(elementSize * zsize);
        }
    }
    return vector;
}

void*** NFree3D(void ***vector, size_t xsize, size_t ysize)
{
    int i, j;
    if (vector != NULL)
    {
        for (i = 0; i < xsize; i++)
        {
            for (j = 0; j < ysize; j++)
            {
                free(vector[i][j]);
            }
        }
        for (i = 0; i < xsize; i++)
        {
            free(vector[i]);
        }
        free(vector);
    }
    return NULL;
}

void**** NAlloc4D(void ****vector, size_t xsize, size_t ysize, size_t zsize,
        size_t tsize, size_t elementSize)
{
    int i, j, k;
    vector = malloc(tsize * zsize * ysize * xsize * elementSize);
    for (i = 0; i < xsize; i++)
    {
        vector[i] = malloc(tsize * zsize * ysize * elementSize);
        for (j = 0; j < ysize; j++)
        {
            vector[i][j] = malloc(tsize * zsize * elementSize);
            for (k = 0; k < zsize; k++)
            {
                vector[i][j][k] = malloc(tsize * elementSize);
            }
        }
    }
    return vector;
}

void**** NFree4D(void**** vector, size_t xsize, size_t ysize, size_t zsize)
{
    int i, j, k;
    if (vector != NULL)
    {
        for (i = 0; i < xsize; i++)
        {
            for (j = 0; j < ysize; j++)
            {
                for (k = 0; k < zsize; k++)
                {
                    free(vector[i][j][k]);
                }
            }
        }
        for (i = 0; i < xsize; i++)
        {
            for (j = 0; j < ysize; j++)
            {
                free(vector[i][j]);
            }
        }
        for (i = 0; i < xsize; i++)
        {
            free(vector[i]);
        }
        free(vector);
    }
    return NULL;
}

