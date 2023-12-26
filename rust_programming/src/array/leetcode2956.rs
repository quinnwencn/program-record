pub fn find_intersection_values(nums1: Vec<i32>, nums2: Vec<i32>) -> Vec<i32> {
    let count1 = nums1.iter().filter(|x| nums2.contains(x)).count();
    let count2 = nums2.iter().filter(|x| nums1.contains(x)).count();
    vec![count1 as i32, count2 as i32]
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn normal_test() {
        let num1 = vec![3, 4, 2, 3, 1];
        let num2 = vec! [2,2,5,2,3,6];
        let ret = find_intersection_values(num1, num2);
        assert_eq!(ret.len(), 2);
        assert_eq!(ret[0], 3);
        assert_eq!(ret[1], 4);
    }

    #[test]
    fn all_zero() {
        let num1 = vec![3, 4, 2, 3];
        let num2 = vec![1, 5, 6];
        let ret = find_intersection_values(num1, num2);
        assert_eq!(ret.len(), 2);
        assert_eq!(ret[0], 0);
        assert_eq!(ret[1], 0);
    }
}