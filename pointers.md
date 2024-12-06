# Pointers & Arrays


i and j are numerical values and p, q are pointers
`int i = 15, j, *p, *q; `

to assign *p to point to i we do `p = &i`

#### P is a pointer and it can't store numerical values so it requires &i to specify its addresss and not its value

hence to print p we should use `*p` and we should get its value 15

now `*p` points to the same address of i , hence if we assign `p = 20` we shall see 
`i = 20 `

#### Memory allocation
yet `*p` was referring to value of i 
now if we assign a new location for `p` then we can see that it no longer changes the value of i if we assigns a value for `p`  (uncomment l15 to observe it)

if we allocate memory to any variable we should responsibily do `delete p` after the need is completed.


## What is the need for pointers in arrays? 

Since arrays in c++ requires advance declaration of size manytime we ain't sure of the size of the arrayy. In such cases we use pointers instead to point to the location of the data instead of asssigning a large space of memory and let it go to waste.




