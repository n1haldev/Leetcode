impl Solution {
    pub fn two_sum(nums: Vec<i32>, target: i32) -> Vec<i32> {
        let mut sum = 0;
        let mut max = 0;
        let mut res_vec : Vec<i32> = Vec::new();
        let len = nums.len();
        for i in 0..len {
            let k = i + 1;
            for j in k..len {
                let num1 = &nums[i];
                let num2 = &nums[j];
                if (*num1 + *num2) == target {
                    return vec![i as i32, j as i32]
                }
            }
        }
        vec![]
    }
}