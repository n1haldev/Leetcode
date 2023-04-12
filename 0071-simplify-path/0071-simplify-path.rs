impl Solution {
    pub fn simplify_path(path: String) -> String {
        let mut canonical = Vec::new();
        let new_path=path.split("/");
        for i in new_path {
            if i=="." || i=="" {
                continue;
            }
            else if i==".." {
                canonical.pop();
            }
            else {
                canonical.push(i.to_string());
            }
        }
        let mut new_str = String::new();
        if canonical.len()==0 {
            return "/".to_string();
        }
        else {
            for i in canonical.into_iter() {
                new_str.push_str("/");
                new_str.push_str(&i.to_string());
            }
        }
        return new_str;
    }
}