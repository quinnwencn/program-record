
pub fn find_missing_and_repeated_values(grid: Vec<Vec<i32>>) -> Vec<i32> {
    let size = grid.len();
    let mut count : Vec<i32> = vec![0; size * size + 1];
    for v in grid.iter() {
        for i in v.iter() {
            count[*i as usize] += 1;
        }
    }

    let mut ret : Vec<i32> = vec![0, 0];
    for i in 1..count.len() {
        if count[i] == 2 {
            ret[0] = i as i32;
        }
        if count[i] == 0 {
            ret[1] = i as i32;
        }
    }

    ret
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn case1() {
        let input = vec![vec![1, 3], vec![2, 2]];
        let ret = find_missing_and_repeated_values(input);
        assert_eq!(ret.len(), 2);
        assert_eq!(ret[0], 2);
        assert_eq!(ret[1], 4);
    }

    #[test]
    fn case2() {
        let input = vec![vec![9,1,7],vec![8,9,2],vec![3,4,6]];
        let ret = find_missing_and_repeated_values(input);
        assert_eq!(ret.len(), 2);
        assert_eq!(ret[0], 9);
        assert_eq!(ret[1], 5);
    }
}
