

you are given an array of positive integers a

Let us call an array "$X$ stable" if for all a_i, a_i = $X$
if all the numbers in the array aren't equal then we call the array unstable
If the array is unstable, it can be made stable by applying the following operation any number of times untill the array is stable:

-for any i replace a_i by it's popcount (the number of set bits in its binary representation)

Now, we notice that any unstable array can always become "$X$ stable" for some $X$ by performing the above operation


Let's define the umber of distinct integers $X$ for which our array can be made "$X$ Stable" as the Array's "Stabilization factor"

for example, if we have an array {2, 2, 3}  
- we can make it "1 stable" by applying the operation one time to a_1, one time to a_2, and two times to a_3, and we get {1, 1, 1}
- we can make it "2 stable" by applying the operation one time to a_3 and we get {2, 2, 2}

- We notice that we can't make it "$X$ stable" for any other $X$ than 1 and 2, so the array's "Stabilization factor" is 2

Unfortunately, our evil problemsetter hates even numbers because they seem "too stable" to him, so he wants you to remove some elements from the array in order to make it "$X$ stable" for some odd $X$, if it's impossible to do so, output -1 otherwise output the minimum number of elements you need to remove