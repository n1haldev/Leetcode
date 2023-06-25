impl Solution {
    pub fn remove_duplicates(nums: &mut Vec<i32>) -> i32 {
        match nums.is_empty() {
            true => return 0,
            false => {
                let mut prev = 0;
                for i in 1..nums.len() {
                    if nums[prev] != nums[i] {
                        prev = prev + 1;
                        nums[prev] = nums[i];
                    }
                }
                return (prev + 1) as i32
            }
        }
    }
}