This is the solution to practical09 with files written in C. Note that we have a separate script 'magic_function.h' which contains the function to check whether a matrix is magic or not (our C files need to reference this script which is why we uploaded it)

The first exercise whereby the program will check if a user specified matrix is a magic square is contained within 'MS_user_input.c'.
The run this program, the user should:
1. Compile this file: gcc MS_user_input.c -o MS_user.exe
2. Execute: ./MS_user.exe
3. When requested, enter the dimension of the matrix as an integer
4. When requested, enter each row of the matrix with each element separated with a space
5. The program will print out whether the matrix is square or not

The second exercise will read in a matrix from a file and check whether the matrix is magic or not. The program for this exercise is contained within 'MS_file_input.c'. Note that we have created two separate txt files (magic_square.txt and not_magic_square.txt) to test this program with each file containing a magic square/no magic square respectively. To run this program, the user should:
1. Compile this file: gcc MS_file_input.c -o MS_file.exe
2. Execute: ./MS_file.exe
3. When requested, enter the file which contains a matrix that we want to check is magic or not (i.e enter 'magic_square.txt' or 'not_magic_square.txt')
4. The program will print out whether the matrix is magic or not
