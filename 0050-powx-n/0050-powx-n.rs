impl Solution {
    pub fn my_pow(x: f64, n: i32) -> f64 {
        let mut ans : f64 = 1.00000;
        if n>=0 {
            if (n==i32::MAX || n==i32::MIN) && (x<1.00000 && x>0.00000) {
                return 0.00000;
            }
            else if x==1.00000 {
                return 1.00000;
            }
            else if x==-1.00000 {
                if n%2==0 {
                    return (1.00000);
                }
                else {
                    return (-1.00000);
                }
            }
            else if n==0 {
                return (1.00000);
            }
            else if n==1 {
                return x;
            }
            for i in 0..n {
                ans=ans*x;
            }
            return ans;
        }
        else {
            let mut pow : i32 = n;
            loop {
                if (n==i32::MAX || n==i32::MIN) && x>1.00000 {
                    return 0.00000;
                }
                if x==-1.00000 {
                    if n%2==0 {
                        return (1.00000);
                    }
                    else {
                        return (-1.00000);
                    }
                }
                if x==1.0000 {
                    return (1.00000);
                }
                else if pow==0 {
                    return ans;
                }
                else {
                    ans=ans/x;
                    pow=pow+1;
                }
                
            }
        }
    }
}