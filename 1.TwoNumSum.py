# Time O(n) | Space O(n)
def twoNumberSum(array, targetSum):
    nums = {}
    for num in array:
        potentialMatch = targetSum - num
        if potentialMatch in nums:
            return [potentialMatch, num]
        else:
            nums[num] = True
    return []


# Time O(nlogn) | Space O(1)
def twoNumberSum1(array, targetSum):
    array.sort()
    left = 0
    right = len(array)-1
    while(left < right):
        s = array[left] + array[right]
        if s == targetSum:
            return[array[left], array[right]]
        elif s < targetSum:
            left += 1
        else:
            right -= 1
    return []


A = [-4, -1, 1, 3, 5, 6, 8, 11]
sum = 8
print('Two numbers using Hash Table Method : ', twoNumberSum(A, sum))
print('Two Numbers using L&R Counters : ', twoNumberSum1(A, sum))
