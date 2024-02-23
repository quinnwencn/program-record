pub fn distribute_candies(candy_type: Vec<i32>) -> i32 {
    let mut visited = [false;200001];
    let mut count = 0;
    for candy in candy_type.iter() {
        if !visited[*candy as usize + 100000] {
            visited[*candy as usize + 100000] = true;
            count += 1;
        }
    }

    std::cmp::min(count, candy_type.len() as i32 / 2)
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_case1() {
        let candy = vec![1,1,2,2,3,3];
        assert_eq!(distribute_candies(candy), 3);
    }

    #[test]
    fn test_case2() {
        let candy = vec![1,1,2,3];
        assert_eq!(distribute_candies(candy), 2);
    }

    #[test]
    fn test_case3() {
        let candy = vec![6,6,6,6];
        assert_eq!(distribute_candies(candy), 1);
    }
}