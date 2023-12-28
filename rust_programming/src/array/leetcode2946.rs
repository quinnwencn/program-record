pub fn are_similar(mat: Vec<Vec<i32>>, k: i32) -> bool {
    let m = mat.len();
    let n = mat[0].len();
    for i in 0..m {
        for j in 0..n {
            if mat[i][j] != mat[i][(j + k as usize) % n] {
                return false;
            }
        }
    }
    true
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn true_test() {
        let matrix = vec![vec![1,2,1,2],vec![5,5,5,5],vec![6,3,6,3]];
        assert_eq!(true, are_similar(matrix, 2));
    }

    #[test]
    fn empty_test() {
        let matrix = vec![vec![]];
        assert_eq!(true, are_similar(matrix, 2));
    }
    #[test]
    fn false_test() {
        let matrix = vec![vec![1,2,1,2],vec![5,5,4,5],vec![6,3,6,3]];
        assert_eq!(false, are_similar(matrix, 2));
    }

    #[test]
    fn big_k_test() {
        let matrix = vec![vec![1,2,1,2],vec![5,5,5,5],vec![6,3,6,3]];
        assert_eq!(true, are_similar(matrix, 20));
    }

}