pub fn missing_number(nums: Vec<i32>) -> i32 {
    let mut xsum = nums.len() as i32;
    for (i, n) in nums.iter().enumerate() {
        xsum ^= i as i32;
        xsum ^= *n;
    }

    xsum
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_end() {
        let nums = vec![0, 1, 2, 3];
        assert_eq!(4, missing_number(nums));
    }

    #[test]
    fn test_middle() {
        let nums = vec![0, 1, 2, 4];
        assert_eq!(3, missing_number(nums));
    }

    #[test]
    fn test_start() {
        let nums = vec![1, 2, 3, 4];
        assert_eq!(0, missing_number(nums));
    }
}