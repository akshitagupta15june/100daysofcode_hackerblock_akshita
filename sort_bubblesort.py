'''
Python program to store percentage of students in array. 
Function for sorting array of floating point numbers in ascending order using
Bubble sort .
'''
#NOTE: There are three different programs which gives different output. Before running another program comment other two programs, otherwise it will give error.
#      Output of program is shown below of program, do not uncomment it.

# **********************************[ 1 ]************************************

def bubbleSort(arr):
    n = len(arr)

    # Transverse through all array elements
    for i in range(n-1):
    # range(n) also work but outer loop will repeat one time more than needed.

        # last i elements are already in place
        for j in range(0, n-1-i):

            # Tranverse the array from 0 to n-i-1
            # Swap if the elements found is greater
            # than the next element
            if arr[j] > arr[j+1]:
                temp = arr[j]
                arr[j] = arr[j+1]
                arr[j+1] = temp

# Driver code to test above
arr = [64.5, 34.2, 25.5, 12.1, 22.9, 11.4, 90.8]

bubbleSort(arr)

print("Sorted array is : ")
for i in range(len(arr)):
    print("%0.1f" % arr[i])

    # OUTPUT =>
    # Sorted array is : 
    # 11.4
    # 12.1
    # 22.9
    # 25.5
    # 34.2
    # 64.5
    # 90.8

# **********************************[ 2 ]************************************

def bubbleSort(arr):
    n = len(arr)
    for i in range(n-1):
        for j in range(0, n-1-i):
            if arr[j] > arr[j+1]:
                temp = arr[j]
                arr[j] = arr[j+1]
                arr[j+1] = temp
        print("Pass = %i" % (i+1))
        print(arr)

arr = [5, 6, 2, 9, 0, 7]

bubbleSort(arr)

print("Sorted array is : ")
for i in range(len(arr)):
    print("%0.1f" % arr[i])

    #OUTPUT =>
    # Sorted array is : 
    # 11.4
    # 12.1
    # 22.9
    # 25.5
    # 34.2
    # 64.5
    # 90.8
    # pass=1
    # [5, 2, 6, 0, 7, 9]
    # pass=2
    # [2, 5, 0, 6, 7, 9]  
    # pass=3
    # [2, 0, 5, 6, 7, 9]
    # pass=4
    # [0, 2, 5, 6, 7, 9]
    # pass=5
    # [0, 2, 5, 6, 7, 9]
    # Sorted array is :
    # 0.0
    # 2.0
    # 5.0
    # 6.0
    # 7.0
    # 9.0

# **********************************[ 3 ]************************************

def bubbleSort(arr):
    n = len(arr)

    for i in range(n-1):
        flag = 0
        for j in range(0, n-1-i):
            if arr[j] > arr[j+1]:
                temp = arr[j]
                arr[j] = arr[j+1]
                arr[j+1] = temp
        print("Pass = %i" % (i+1))
        print(arr)
        if(flag == 0):
            break

arr = [1, 2, 3, 4, 5]

bubbleSort(arr)

print("Sorted array is : ")
for i in range(len(arr)):
    print("%0.1f" % arr[i]),

    # OUTPUT =>
    # Pass = 1
    # [1, 2, 3, 4, 5]
    # Sorted array is :
    # 1.0
    # 2.0
    # 3.0
    # 4.0
    # 5.0

# ***************************************************************************
