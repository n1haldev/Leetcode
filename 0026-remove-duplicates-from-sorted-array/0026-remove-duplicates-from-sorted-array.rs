impl Solution {
    pub fn remove_duplicates(nums: &mut Vec<i32>) -> i32 {
        let mut i = 0;
        let mut j = 1;
        loop {
            if i == nums.len() {
                break;
            }
            while j < nums.len() {
                if nums[i] == nums[j] {
                    nums.remove(j);
                } 
                else {
                    break;
                }
            }
            i += 1;
            j += 1;
        }
        nums.len() as i32
    }
}