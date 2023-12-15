pub fn max_product(nums: Vec<i32>) -> i32 {
    let (mut sec, mut max) = (0, nums[0]);
    for i in 1..nums.len() {
        let min = std::cmp::min(max, nums[i]);
        max = std::cmp::max(max, nums[i]);
        sec = std::cmp::max(min, sec);
    }

    (max - 1) * (sec - 1)
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_case1() {
        let input = vec![3, 4, 5, 2];
        let ret = max_product(input);
        assert_eq!(ret, 12);
    }

    #[test]
    fn test_case2() {
        let input = vec![1,5,4,5];
        let ret = max_product(input);
        assert_eq!(ret, 16);
    }

    #[test]
    fn test_case3() {
        let input = vec![10,5,4,5];
        let ret = max_product(input);
        assert_eq!(ret, 36);
    }
}