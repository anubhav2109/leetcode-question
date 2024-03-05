The approach to this problem is to use a two-pointer technique to find matching prefixes and suffixes. We start with two pointers at the beginning and end of the string, and then iterate through the string, removing matching prefixes and suffixes until the pointers meet or cross each other.

Approach
Initialize two pointers, left and right, at the beginning and end of the string, respectively.
Use a while loop to iterate through the string while left is less than right and the characters at these positions are equal.
Inside the loop:
Store the current character in current_char.
Move the left pointer to the right until a different character is encountered.
Move the right pointer to the left until a different character is encountered.
Calculate and return the remaining length by subtracting left from right and adding 1.
Complexity
Time complexity:
O(n), where n is the length of the input string.
Space complexity:
O(1), as we are using a constant amount of extra space.​
