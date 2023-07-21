def find_most_frequent_value(arr):
    count_dict = {}
    max_count = 0
    most_frequent_value = None

    for num in arr:
        if num in count_dict:
            count_dict[num] += 1
        else:
            count_dict[num] = 1

        if count_dict[num] > max_count or (count_dict[num] == max_count and num > most_frequent_value):
            max_count = count_dict[num]
            most_frequent_value = num

    return most_frequent_value, max_count

# Test case 1
arr1 = [2, 1, 3, 5, 4, 6, 5, 2, 1, 3]
value1, count1 = find_most_frequent_value(arr1)
print("Test Case 1: Value:", value1, "Count:", count1)

# Test case 2
arr2 = [-5, -2, 1, 5, -5, 4, -2, -1, -2, -1]
value2, count2 = find_most_frequent_value(arr2)
print("Test Case 2: Value:", value2, "Count:", count2)

# Test case 3
arr3 = [-1000000000, -112101, 10100101, 1000000000, 12345]
value3, count3 = find_most_frequent_value(arr3)
print("Test Case 3: Value:", value3, "Count:", count3)
