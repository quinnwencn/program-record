pub fn max_count(m: i32, n: i32, ops: Vec<Vec<i32>>) -> i32 {
    if ops.len() == 0 {
        return m * n;
    }

    let mut min_row = ops[0][0];
    let mut min_col = ops[0][1];
    for v in ops {
        min_row = std::cmp::min(min_row, v[0]);
        min_col = std::cmp::min(min_col, v[1]);
    }

    min_row * min_col
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_case1() {
        let ops = vec![vec![2,2],vec![3,3],vec![3,3],vec![3,3],vec![2,2],vec![3,3],
                       vec![3,3],vec![3,3],vec![2,2],vec![3,3],vec![3,3],vec![3,3]];
        assert_eq!(max_count(3, 3, ops), 4);
    }

    #[test]
    fn test_case2() {
        let ops = vec![];
        assert_eq!(max_count(3, 3, ops), 9);
    }
}