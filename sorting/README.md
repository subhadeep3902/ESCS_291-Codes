# <b>Linear Search

 Linear Search is defined as a sequential search algorithm that starts at one end and goes through each element of a list until the desired element is found, otherwise the search continues till the end of the data set.
 
 ```Time Complexity: O(N)```

        ->  Every element is considered as a potential match
            for the key and checked for the same.

        ->  If any element is found equal to the key, the
            search is successful and the index of that element is
            returned.

        ->  If no element is found equal to the key, the
            search yields "No match found".

- - -
<br/>

# <b>Binary Search

Binary Search is defined as a searching algorithm used in a sorted array by repeatedly dividing the search interval in half. The idea of binary search is to use the information that the array is sorted.

 ```Time Complexity: O(log(N))```

- Compare the middle element of the search space with the key.
- If the key is found at middle element, the process is terminated.
- If the key is not found at middle element, choose which half will be used as the next search space.

        ->  If the key is smaller than the middle element, then
            the left side is used for next search.

        ->  If the key is larger than the middle element, then
            the right side is used for next search.

- This process is continued until the key is found or the total search space is exhausted.

- - -
<br/>

## <b>Bubble Sort

Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements if they are in the wrong order. This algorithm is not suitable for large data sets as its average and worst-case time complexity is quite high.

 ```Time Complexity: O(N^2)```

- Traverse from left and compare adjacent elements and the higher one is placed at right side. 
- In this way, the largest element is moved to the rightmost end at first. 
- This process is then continued to find the second largest and place it and so on until the data is sorted.

- - -
<br/>

# <b>Insertion Sort

Insertion sort is a simple sorting algorithm that works similar to the way you sort playing cards in your hands. The array is virtually split into a sorted and an unsorted part. Values from the unsorted part are picked and placed at the correct position in the sorted part.

 ```Time Complexity: O(N^2)```

        To sort an array of size N in ascending order iterate over the array and compare the current element (key) to its predecessor, if the key element is smaller than its predecessor, compare it to the elements before. Move the greater elements one position up to make space for the swapped element.

- - -
<br/>

# <b>Selection Sort

Selection sort is a simple and efficient sorting algorithm that works by repeatedly selecting the smallest (or largest) element from the unsorted portion of the list and moving it to the sorted portion of the list. 

 ```Time Complexity: O(N^2)```

 - - -
<br/>

# <b>Merge Sort

Merge sort is defined as a sorting algorithm that works by dividing an array into smaller subarrays, sorting each subarray, and then merging the sorted subarrays back together to form the final sorted array.

 ```Time Complexity: O(N log(N))```

        T(n) = 2T(n/2) + θ(n)

 - - -
<br/>

# <b>Quick Sort

QuickSort is a sorting algorithm based on the Divide and Conquer algorithm that picks an element as a pivot and partitions the given array around the picked pivot by placing the pivot in its correct position in the sorted array.

 ```Time Complexity: O(N log(N))```