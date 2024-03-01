pub fn find_error_nums(nums: Vec<i32>) -> Vec<i32> {
    let mut ret = vec![0, 0];
    let mut visited = vec![1; nums.len()];
    for i in 0..nums.len() {
        if visited[nums[i] as usize - 1] == 0 {
            ret[0] = nums[i];
        } else {
            visited[nums[i] as usize - 1] = 0;
        }
    }

    for i in 0..visited.len() {
        if visited[i] == 1 {
            ret[1] = i as i32 + 1;
            return ret;
        }
    }

    return ret;
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn testcase1() {
        let nums = vec![4, 2, 1, 2];
        let ret = find_error_nums(nums);
        assert_eq!(ret.len(), 2);
        assert_eq!(ret[0], 2);
        assert_eq!(ret[1], 3);
    }

    #[test]
    fn testcase() {
        let nums = vec![1, 1];
        let ret = find_error_nums(nums);
        assert_eq!(ret.len(), 2);
        assert_eq!(ret[0], 1);
        assert_eq!(ret[1], 2);
    }
}