/*  C Program to print diagonal elements of a Matrix  */

/*1. Declare a matrix of some fixed capacity, take its order as input from users and define the elements of the matrix. */
/*2. Again start a nested for loop with two iterators i and j. i keeping track of row and j keeping track of column.
/*3. Put a condition inside this loop, if value of i(row) is greater than or equal to j(column), only then the element having index i and j belongs to upper triangle, print it, else continue with the loop. */
    /*
     * C Program to Display Upper Triangular Matrix
     */

    #include <stdio.h>
    void main()
    {

        int i, j, r, c, array[10][10];
        printf("Enter the r and c value:");

        scanf("%d%d", &r, &c);
        for (i = 1; i <= r; i++)
        {
            for (j = 1; j <= c; j++)
            {
                printf("array[%d][%d] = ", i, j);
                scanf("%d", &array[i][j]);
            }
        }

        printf("matrix is");
        for (i = 1; i <= r; i++)
        {
            for (j = 1; j <= c; j++)
            {
                printf("%d", array[i][j]);
            }
            printf("\n");
        }

        for (i = 1; i <= r; i++)
        {
            printf("\n");
            for (j = 1; j <= c; j++)
            {
                if (i >= j)
                {
                    printf("%d", array[i][j]);
                }
                else
                {
                    printf("\t");
                }
            }

        }

        printf("\n\n");
        for (i = 1; i <= r; i++)
        {
            printf("\n");
            for (j = 1; j <= c; j++)
            {
	            if (j >= i)
                    {
                	printf("%d", array[i][j]);
            	    }
            	    else
                    {
                	//printf("\t");
	            }
            // printf("\n");

        }

    }
