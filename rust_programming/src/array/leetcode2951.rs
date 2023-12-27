pub fn find_peaks(mountain: Vec<i32>) -> Vec<i32> {
    let mut ret = Vec::new();
    let len = mountain.len();
    for i in 1..len - 1 {
        if mountain[i] > mountain[i - 1] && mountain[i] > mountain[i + 1] {
            ret.push(i as i32);
        }
    }

    ret
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn no_peak() {
        let mountain = vec![1, 1, 4];
        let ret = find_peaks(mountain);
        assert_eq!(ret.len(), 0);
    }

    #[test]
    fn one_peak() {
        let mountain = vec![1, 1, 4, 2];
        let ret = find_peaks(mountain);
        assert_eq!(ret.len(), 1);
        assert_eq!(ret[0], 2);
    }

    #[test]
    fn two_peak() {
        let mountain = vec![1, 4, 3, 8, 5];
        let ret = find_peaks(mountain);
        assert_eq!(ret.len(), 2);
        assert_eq!(ret[0], 1);
        assert_eq!(ret[1], 3);
    }
}