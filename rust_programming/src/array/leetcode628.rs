pub fn maximum_product(mut nums: Vec<i32>) -> i32 {
    nums.sort_unstable();
    let len = nums.len();
    std::cmp::max(nums[len - 1] * nums[len - 2] * nums[len - 3],
                  nums[0] * nums[1] * nums[len - 1])
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn all_positive() {
        let nums = vec![1, 2, 3, 4];
        assert_eq!(maximum_product(nums), 24);
    }

    #[test]
    fn all_negative() {
        let nums = vec![-1, -2, -3, -4];
        assert_eq!(maximum_product(nums), -6);
    }

    #[test]
    fn top3() {
        let nums = vec![-1, -2, 3, 4, 5];
        assert_eq!(maximum_product(nums), 60);
    }

    #[test]
    fn top1_and_low2() {
        let nums = vec![-1, -2, 3, 4, 5, -6, -7];
        assert_eq!(maximum_product(nums), 210);
    }
}