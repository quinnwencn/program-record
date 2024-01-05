pub fn generate(num_rows: i32) -> Vec<Vec<i32>> {
    let mut ret = Vec::<Vec<i32>>::new();
    for i in 0..num_rows as usize {
        let mut tmp = Vec::new();
        for j in 0..i + 1 {
            if i > 0 && j < ret[i - 1].len() && j > 0 {
                let val = ret[i - 1][j - 1] + ret[i - 1][j];
                tmp.push(val as i32);
            } else {
                tmp.push(1);
            }
        }
        ret.push(tmp);
    }
    ret
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn empty_test() {
        let ret = generate(0);
        assert_eq!(ret.len(), 0);
    }

    #[test]
    fn normal_test() {
        let result = vec![vec![1], vec![1, 1], vec![1, 2, 1], vec![1, 3, 3, 1],
                          vec![1, 4, 6, 4, 1]];
        let ret = generate(5);
        assert_eq!(ret.len(), result.len());
        for i in 0..ret.len() {
            for j in 0..ret[i].len() {
                assert_eq!(ret[i][j], result[i][j]);
            }
        }
    }
}