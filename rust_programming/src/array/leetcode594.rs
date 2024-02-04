pub fn find_lhs(mut nums: Vec<i32>) -> i32 {
    let mut ret = 0;
    let mut left: usize = 0;
    let mut right: usize = 1;
    nums.sort_unstable();
    while right < nums.len() {
        if nums[right] - nums[left] == 1 {
            ret = std::cmp::max(ret, right as i32 - left as i32 + 1);
        }
        while nums[right] - nums[left] > 1 {
            left += 1;
        }
        right += 1;
    }
    ret
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test1() {
        let nums = vec![1,3,2,2,5,2,3,7];
        assert_eq!(find_lhs(nums), 5);
    }

    #[test]
    fn test2() {
        let nums = vec![1,2,3,4];
        assert_eq!(find_lhs(nums), 2);
    }

    #[test]
    fn test3() {
        let nums = vec![1,1,1,1];
        assert_eq!(find_lhs(nums), 0);
    }

    #[test]
    fn test4() {
        let nums = vec![1,1,1,1, 30];
        assert_eq!(find_lhs(nums), 0);
    }
}