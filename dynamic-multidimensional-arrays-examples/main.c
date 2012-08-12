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

#include<stdio.h>
#include"dmda.h"

int main()
{
    int** array = NULL;
    int i,j;
    /*Creating a 10x10 2-dimensional numeric array*/
    array = (int**)NAlloc2D((int**)array,10,10,sizeof(int));
    /*Initializing the array with values*/
    for(i=0; i<10; i++)
    {
        for(j=0; j<10; j++)
        {
            array[i][j] = i-j;
        }
    }
    /*Displaying the 2-dimensional array*/
    for(i=0; i< 10; i++)
    {
        for(j=0; j<10; j++)
        {
            printf("%+d ",array[i][j]);
        }
        putchar('\n');
    }
    /*Freeing the 2-dimensional array*/
    array = (int**)NFree2D((int**)array,10);
    puts("Memory freed");
    return 0;
}
/*Output
+0 -1 -2 -3 -4 -5 -6 -7 -8 -9
+1 +0 -1 -2 -3 -4 -5 -6 -7 -8
+2 +1 +0 -1 -2 -3 -4 -5 -6 -7
+3 +2 +1 +0 -1 -2 -3 -4 -5 -6
+4 +3 +2 +1 +0 -1 -2 -3 -4 -5
+5 +4 +3 +2 +1 +0 -1 -2 -3 -4
+6 +5 +4 +3 +2 +1 +0 -1 -2 -3
+7 +6 +5 +4 +3 +2 +1 +0 -1 -2
+8 +7 +6 +5 +4 +3 +2 +1 +0 -1
+9 +8 +7 +6 +5 +4 +3 +2 +1 +0
Memory freed
 */
