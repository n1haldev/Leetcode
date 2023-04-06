impl Solution {
    pub fn max_area(height: Vec<i32>) -> i32 {
        let mut max_area=0;
        let mut i=0;
        let mut j=height.len()-1;
        while i<j {
            let mini=if &height[i]>&height[j] {j} else {i};
            let diff=(j-i) as i32;
            let area=*(&height[mini])*diff;
            if area>max_area {
                max_area=area;
            }
            if &height[i]<&height[j] {
                i+=1;
            }
            else {
                j-=1;
            }
        }
        max_area
    }
}