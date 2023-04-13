impl Solution {
    pub fn validate_stack_sequences(pushed: Vec<i32>, popped: Vec<i32>) -> bool {
        let mut temp_vec = vec![];
        let mut i=0;
        let mut j=0;
        let len=pushed.len();
        while i<len && j<len {
            while i<len && temp_vec.last()!=Some(&popped[j]) {
                temp_vec.push(pushed[i]);
                i+=1;
            }
            while j<len && temp_vec.last()==Some(&popped[j]) {
                temp_vec.pop();
                j+=1;
            }
        }
        temp_vec.is_empty()
    }
}