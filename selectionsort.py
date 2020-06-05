def to_int(A):              # translates an array of string numbers to int numbers
    for i in range(len(A)):
        A[i] = int(A[i])

def find_min(A, i):         # Returns the index of the minimum number
    min = i
    for j in range(i+1, len(A)):
        if A[j] <= A[min]:
            min = j
    
    return min
def swap(A, min, i):        # Swaps two values inside an array
    store_value = A[min]
    A[min] = A[i]
    A[i] = store_value

def selection(A):
    for i in range(len(A)):
        swap(A, find_min(A, i), i)

input = input("Enter numbers:\n")
array = input.split()

to_int(array)
selection(array)

print(array)

