impl Solution {
    pub fn remove_element(nums: &mut Vec<i32>, val: i32) -> i32 {
        match nums.is_empty() {
            true => return 0,
            false => {
                let mut j = 0;
                let mut finalsize = nums.len();
                for i in 0..nums.len() {
                    if nums[i] != val {
                        nums[j] = nums[i];
                        j += 1;
                    }
                    else {
                        finalsize -= 1;
                    }
                }
                finalsize as i32
            }
        }
    }
}