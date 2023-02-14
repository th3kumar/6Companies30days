class Solution {
    fun twoSum(nums: IntArray, target: Int): IntArray {
        val sorted = nums.sorted()
    var left = 0
    var right = sorted.lastIndex
    while (left < right) {
        val sum = sorted[left] + sorted[right]
        when {
            sum == target -> {
                val index1 = nums.indexOf(sorted[left])
                val index2 = nums.lastIndexOf(sorted[right])
                return intArrayOf(index1, index2)
            }
            sum < target -> left++
            else -> right--
        }
    }
    throw IllegalArgumentException("No two sum solution") 
    }
}