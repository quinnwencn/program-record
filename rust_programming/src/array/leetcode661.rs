pub fn image_smoother(img: Vec<Vec<i32>>) -> Vec<Vec<i32>> {
    let row = img.len();
    let col = img[0].len();
    let mut ret = vec![vec![0; col]; row];
    let range = [(-1, -1), (-1, 0), (-1, 1), (0, -1),
        (0, 0), (0, 1), (1, -1), (1, 0), (1, 1)];
    for r in 0..row {
        for c in 0..col {
            let mut sum = 0;
            let mut count = 0;
            for (left, right) in range.iter() {
                let ri = r as i32 + left;
                let ci = c as i32 + right;
                if (ci >= 0 && ci < col as i32) && (ri >= 0 && ri < row as i32) {
                    sum += img[ri as usize][ci as usize];
                    count += 1;
                }
            }

            ret[r][c] = sum / count;
        }
    }
    ret
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn testcase1() {
        let img = vec![vec![1,1,1],vec![1,0,1],vec![1,1,1]];
        let ret = image_smoother(img);
        for r in 0..ret.len() {
            for c in 0..ret[0].len() {
                assert_eq!(ret[r][c], 0);
            }
        }
    }

    #[test]
    fn testcase2() {
        let img = vec![vec![100,200,100],vec![200,50,200],vec![100,200,100]];
        let ret = image_smoother(img);
        let smooth_img = [[137,141,137],[141,138,141],[137,141,137]];
        for r in 0..ret.len() {
            for c in 0..ret[0].len() {
                assert_eq!(ret[r][c], smooth_img[r][c]);
            }
        }
    }
}
