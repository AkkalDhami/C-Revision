@ -1,136 +0,0 @@

# Array Problems

## Basics Problems

### 1. Sum of elements of array

### 2. Product of elements of array

### 3. Find max element of array

### 4. Find min element of array

### 5. Change the value of all odd indexes elements to its second multiple and increment all even indexed by 10

    int arr[6] = { 1, 2, 3, 4, 5, 6 };

    odd index elements : 2, 4, 6; => element * 2;
    even index elements : 1, 3, 5; => element + 10;

    output: 11, 4, 13, 8, 15, 12

### 6. Print and count elements in array greater then the number n

    int arr[6] = { 1, 2, 3, 4, 5, 6 };
    int n = 3;
    greater then 3: 4, 5, 6, count: 3

    output: 
    4, 5, 6
    count: 3

### 7. Print fizz if elements of array are exactly divisible by 3, print buzz if elements of array are exactly divisible by 5 and print fizzbuzz if elements of array are exactly divisible by 3 and 5

    int arr[6] = { 3, 6, 7, 9, 10, 15};

    output: fizz, fizz, fizz, buzz, fizzbuzz

### 8. Print sum of even index elements - sum of odd index elements

    int arr[4] = { 1, 2, 3, 4};

    output: (1+3) - (2+4) = -2

### 9. Find the total no. of pairs in the array whose sum = x

    int arr[6] = { 1, 2, 3, 4, 5, 6};
    int x = 6;

    output:
    pairs:  (1, 5), (2, 4)
    totalPairs = 2
    

### 10. Find the total no. of tiplet pairs in the array whose sum = x

    int arr[6] = { 1, 2, 3, 4, 5, 6};
    int x = 6;

    output:
    pairs:  (1, 2, 3)
    totalPairs = 1

## Easy Problems

### 11. Find second largest element in the array

    int arr[6] = { 1, 2, 3, 4, 5, 6};

    output:
    Second largest element: 5

### 12. Find missing element in the array

    int arr[5] = { 1, 2, 4, 5, 6};

    output:
    Missing element: 3

### 13. Count even and odd numbers in an array

    int arr[6] = { 1, 2, 3, 4, 5, 6};

    output:
    Even numbers count: 3
    Odd numbers count: 3

### 14. Reversed an array without extra array

    int arr[6] = { 1, 2, 3, 4, 5, 6};

    output:
    Reversed Array:
    6, 5, 4, 3, 2, 1

### 15. Check given array is palindrome or not

    int arr[6] = { 1, 2, 3, 4, 5, 6};

    output:
    Given array is not palindrome
    ================================
    int arr[5] = { 1, 2, 3, 2, 1 };

    output:
    Given array is palindrome

### 16. Perform linear search in the array

    int arr[6] = { 1, 2, 3, 4, 5, 6};
    in searchedNum = 5;

    output:
    5 is present in arr[4]
    ================================
    int arr[5] = { 1, 2, 3, 2, 1 };

    output:
    5 is not present in the array

### Bubble Sort

    int arr[5] = {12, 5, 3, 9, 45}

#### 1. Ascending Order

    output:
    Sorting Array in Ascending Order:
    3, 5, 9, 12, 45

#### 1. Descending Order

    output:
    Sorting Array in Descending Order:
    45, 12, 9, 5, 3,

## Medium Problems

### 17. Rotate array by k positions (left)

    int arr[6] = {1, 2, 3, 4, 5, 6};
    int k = 2;

    output: 
    3, 4, 5, 6, 1, 2

### 18. Rotate array by k positions (right)

    int arr[6] = {1, 2, 3, 4, 5, 6};
    int k = 2;

    output: 
    5, 6, 1, 2, 3, 4
