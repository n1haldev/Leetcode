impl Solution {
    pub fn is_palindrome(x: i32) -> bool {
        if x < 0 {
            return false;
        }
        else {
            let mut rev = 0;
            let mut copy = x;
            while(copy>0) {
                rev = (rev * 10) + (copy % 10);
                copy = copy / 10;
                println!("{rev}");
            }
            
            if rev == x {
                return true;
            }
            else {
                return false;
            }
        }
    }
}