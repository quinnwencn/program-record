pub fn third_max1(mut nums: Vec<i32>) -> i32 {
    nums.sort_unstable();
    let mut i = nums.len() as i32 - 1;
    let mut max = nums[i as usize];
    let mut second_max = nums[i as usize];
    let mut count = 3;
    while i >= 0 {
        if count == 3 && nums[i as usize] < max {
            second_max = nums[i as usize];
            count -= 1
        } else if count == 2 && nums[i as usize] < second_max {
            return nums[i as usize];
        }
        i -= 1;
    }
    max
}

pub fn third_max2(mut nums: Vec<i32>) -> i32 {
    nums.sort_unstable();
    nums.dedup();
    if nums.len() > 2 {
        return nums[nums.len() - 3];
    }

    nums[nums.len() - 1]
}

#[cfg(tests)]
mod tests {
    use super::*;

    #[test]
    fn more_than_three_elements() {
        let nums = vec![2, 1, 1, 2, 2, 5, 4, 3];
        assert_eq!(third_max1(nums), 3);
        let nums2 = vec![2, 1, 1, 2, 2, 5, 4, 3];
        assert_eq!(third_max2(nums2), 3);
    }

    #[test]
    fn less_than_three_elements() {
        let nums = vec![1, 5];
        assert_eq!(third_max1(nums), 5);
        let nums2 = vec![1, 5];
        assert_eq!(third_max2(nums2), 5);
    }
}
