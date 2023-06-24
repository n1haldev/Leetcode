impl Solution {
    pub fn longest_common_prefix(strs: Vec<String>) -> String {
        if strs.is_empty() {
            return String::new();
        }

        let mut minlen = strs[0].len();
        // finding the len of the minimum element to determine the maximum iterations possible
        for i in 1..strs.len() {
            if strs[i].len() < minlen {
                minlen = strs[i].len();
            }
        }
        
        let mut prefix = String::new();
        for i in 0..minlen {
            let ch = strs[0].chars().nth(i).unwrap();
            for j in 1..strs.len() {
                if strs[j].chars().nth(i).unwrap() != ch {
                    return prefix;
                }
            }
            prefix.push(ch);
        }
        prefix
    }
}
