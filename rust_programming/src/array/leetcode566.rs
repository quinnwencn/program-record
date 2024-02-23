pub fn matrix_reshape(mat: Vec<Vec<i32>>, r: i32, c: i32) -> Vec<Vec<i32>> {
    if mat.len() == 0 {
        return mat;
    }

    let row = mat.len();
    let col = mat[0].len();
    if row * col != r as usize * c as usize {
        return mat;
    }

    let mut ri: usize = 0;
    let mut ci: usize = 0;
    let mut ret = vec![vec![0; c as usize]; r as usize];
    for i in 0..ret.len() {
        for j in 0..ret[i].len() {
            if ci == col as usize {
                ri += 1;
                ci = 0;
            }
            ret[i][j] = mat[ri][ci];
            ci += 1;
        }
    }
    ret
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn testcase1() {
        let mat = vec![vec![1,2],vec![3,4]];
        let ret = matrix_reshape(mat, 1, 4);
        assert_eq!(ret.len(), 1);
        assert_eq!(ret[0].len(), 4);
        for i in 0..4 {
            assert_eq!(ret[0][i], i as i32 + 1);
        }
    }

    #[test]
    fn testcase2() {
        let mat = vec![vec![1,2],vec![3,4]];
        let ret = matrix_reshape(mat, 2, 4);
        assert_eq!(ret.len(), 2);
        assert_eq!(ret[0][0], 1);
        assert_eq!(ret[0][1], 2);
        assert_eq!(ret[1][0], 3);
        assert_eq!(ret[1][1], 4);
    }

    #[test]
    fn testcase3() {
        let mat = vec![vec![1,2],vec![3,4]];
        let ret = matrix_reshape(mat, 1, 1);
        assert_eq!(ret.len(), 2);
        assert_eq!(ret[0][0], 1);
        assert_eq!(ret[0][1], 2);
        assert_eq!(ret[1][0], 3);
        assert_eq!(ret[1][1], 4);
    }
}