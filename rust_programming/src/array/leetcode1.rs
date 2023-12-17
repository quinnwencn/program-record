pub fn two_sum(nums: Vec<i32>, target: i32) -> Vec<i32> {
    let mut visited = std::collections::HashMap::new();
    for i in 0..nums.len() {
        let diff = target - nums[i];
        if visited.contains_key(&diff) {
            return vec![visited[&diff], i as i32];
        }
        visited.insert(nums[i], i as i32);
    }

    Vec::new()
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn return_empty() {
        let nums = vec![1, 3, 5, 7];
        assert_eq!(two_sum(nums, 9).len(), 0);
    }

    #[test]
    fn normal_test() {
        let nums = vec![1, 2, 2, 5];
        let output = two_sum(nums, 4);
        assert_eq!(output.len(), 2);
        assert_eq!(output[0], 1);
        assert_eq!(output[1], 2);
    }
}