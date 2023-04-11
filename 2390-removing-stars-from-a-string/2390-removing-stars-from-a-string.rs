impl Solution {
    pub fn remove_stars(s: String) -> String {
        let mut my_vec=Vec::new();
        for i in s.chars() {
            if(i=='*' && my_vec.len()==0) {
                continue;
            }
            else if i=='*' {
                my_vec.pop();
            }
            else {
                my_vec.push(i);
            }
        }
        let mut new_str : String=my_vec.iter().collect();
        new_str
    }
}