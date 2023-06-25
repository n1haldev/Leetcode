impl Solution {
    pub fn is_valid(s: String) -> bool {
        let mut bracks : Vec<char> = vec![];
        for i in s.chars() {
            match i {
                '(' => bracks.push('('),
                '{' => bracks.push('{'),
                '[' => bracks.push('['),
                ')' => {
                    if bracks.len() == 0 || bracks.pop() != Some('(') {
                        return false;
                    }
                },
                '}' => {
                    if bracks.len() == 0 || bracks.pop() != Some('{') {
                        return false;
                    }
                },
                ']' => {
                    if bracks.len() == 0 || bracks.pop() != Some('[') {
                        return false;
                    }
                },
                _ => break,
            }
        }
        if bracks.len() != 0 {
            return false;
        }
        true
    }
}