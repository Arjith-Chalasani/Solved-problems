Reference : https://stackoverflow.com/questions/20985841/finding-if-binary-matrix-exists-given-the-row-and-column-sums

Assign row sums to an array and column sums to an array.
Choose elements from row sums consecutively.
Assign that element to variable k.
Sort the column sums.
Then on the first k columns sums, substract -1.
Then choose next element from row sums and assign it k.
Sort the columns sums array and repeat the procedure for the remaining elements in the row sum array.
After completing the last element in row sums:
Case 1 : Then with column sums array, if sum of elements is 0 , matrix exists.
Case 2 : If atleast one column sum is less than 0, matrix does not exists. (Because column sum cannot be negative in matrices)
Case 3 : If sum of elements is greater than 0, matrxi does not exists.
