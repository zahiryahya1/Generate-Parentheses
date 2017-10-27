# Generate-Parentheses
create a list of valid n pairs of parentheses

## Idea
- First I thought to find all the combinations of parenthases the add the valid ones.
This will take O(n*2^n).

- A batter approach is to use recursion and keep track of the number of open and close.
In this method, we only add a close if it will keep the the str valid. This way we only create as 
many parentheses that are valid.
