pub fn remove_duplicates(nums: &mut Vec<i32>) -> i32 {
    let mut i = 1;
    let mut len = nums.len();
    while i < len {
        if nums[i] <= nums[i - 1] {
            for j in i..len - 1 {
                nums[j] = nums[j + 1];
            }
            len -= 1;
            continue;
        }
        i += 1;
    }
    len as i32
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_empty() {
        let mut nums = Vec::new();
        assert_eq!(0, remove_duplicates(&mut nums));
    }

    #[test]
    fn normal_test() {
        let mut nums = vec![0,0,1,1,1,2,2,3,3,4];
        assert_eq!(5, remove_duplicates(&mut nums));
    }

    #[test]
    fn expect_fail() {
        let mut nums = vec![1, 2, 3];
        assert_ne!(2, remove_duplicates(&mut nums));
    }
}