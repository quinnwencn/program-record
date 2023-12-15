pub fn num_special(mat: Vec<Vec<i32>>) -> i32 {
    let col = mat.len();
    let row = mat[0].len();
    let mut ret = 0;
    for i in 0..row {
        let mut tmp_sum = 0;
        let mut pos = 0;
        for j in 0..col {
            if mat[j][i] == 1 {
                tmp_sum += 1;
                pos = j;
            }
        }
        let row_sum = mat[pos].iter().sum::<i32>();
        if tmp_sum == 1 && row_sum == 1 {
            ret += 1;
        }
    }
    ret
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test1() {
        let mat = vec![vec![1,0,0],vec![0,0,1],vec![1,0,0]];
        assert_eq!(num_special(mat), 1);
    }

    #[test]
    fn test2() {
        let mat = vec![vec![1,0,0],vec![0,1,0],vec![0,0,1]];
        assert_eq!(num_special(mat), 3);
    }
}