pub fn first_uniq_char(s: String) -> i32 {
    let mut alpha = [0; 26];
    s.chars().for_each(|c| {
        let index = c as usize - 'a' as usize;
        alpha[index] += 1;
    });

    let mut i = 0;
    for c in s.chars() {
        let index = c as usize - 'a' as usize;
        if alpha[index] == 1 {
            return i;
        }
        i += 1;
    }

    -1
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn testcase1() {
        let s = "leetcode".to_string();
        assert_eq!(first_uniq_char(s), 0);
    }

    #[test]
    fn testcase2() {
        let s = "loveleetcode".to_string();
        assert_eq!(first_uniq_char(s), 2);
    }

    #[test]
    fn testcase3() {
        let s = "lovelove".to_string();
        assert_eq!(first_uniq_char(s), -1);
    }
}
