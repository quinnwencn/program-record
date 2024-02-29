use std::cmp::max;

pub fn find_maximum_average(nums: Vec<i32>, k: i32) -> f64 {
    let (mut left, mut right) = (0, k as usize - 1);
    let mut sum: i32 = nums[0..k as usize].iter().sum();
    let mut max_sum = sum;
    while right < nums.len() - 1 {
        sum -= nums[left];
        left += 1;
        right += 1;
        sum += nums[right];
        max_sum = max(max_sum, sum);
    }
    max_sum as f64 / k as f64
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn testcase1() {
        let nums = vec![1, 12, -5, -6, 50, 3];
        assert_eq!(12.75, find_maximum_average(nums, 4));
    }

    #[test]
    fn testcase2() {
        let nums = vec![1, 12, -5, -6, 50, 3];
        assert_eq!(53.0 / 2.0, find_maximum_average(nums, 2));
    }
}