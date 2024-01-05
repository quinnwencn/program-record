pub fn contains_duplicate(mut nums: Vec<i32>) -> bool {
    if nums.len() == 0 {
        return false;
    }

    nums.sort_unstable();
    for i in 0..nums.len() - 1 {
        if nums[i] == nums[i + 1] {
            return true;
        }
    }
    false
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn not_contain() {
        let nums = vec![1, 2, 3, 4];
        assert_eq!(false, contains_duplicate(nums));
    }

    #[test]
    fn empty_input() {
        let nums: Vec<i32> = vec![];
        assert_eq!(false, contains_duplicate(nums));
    }

    #[test]
    fn contain() {
        let nums: Vec<i32> = vec![1, 2, 3, 4, 1];
        assert_eq!(true, contains_duplicate(nums));
    }
}