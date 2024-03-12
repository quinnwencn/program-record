pub fn find_length_of_lcis(nums: Vec<i32>) -> i32 {
    let mut ret = 0;
    let mut left: usize = 0;
    let mut right: usize = 0;
    let size = nums.len();
    while right < size {
        ret = std::cmp::max(ret, right as i32 - left as i32 + 1);
        if (right + 1 >= size) || (nums[right] >= nums[right + 1]) {
            left = right + 1;
        }
        right += 1;
    }

    ret
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn testcase1() {
        let nums = vec![1, 3, 5, 2, 4];
        assert_eq!(find_length_of_lcis(nums), 3);
    }

    #[test]
    fn testcase2() {
        let nums = vec![2;4];
        assert_eq!(find_length_of_lcis(nums), 1);
    }

    #[test]
    fn testcase3() {
        let nums = vec![1, 3, 5, 7];
        assert_eq!(find_length_of_lcis(nums), 4);
    }

    #[test]
    fn testcase4() {
        let nums = vec![4, 3, 2, 1];
        assert_eq!(find_length_of_lcis(nums), 1);
    }
}