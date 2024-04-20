pub fn find_the_difference(s: String, t: String) -> char {
    let mut alphas = [0; 26];
    s.chars().for_each(|c| {
        let i = c as usize - 'a' as usize;
        alphas[i] += 1;
    });

    for c in t.chars() {
        let i = c as usize - 'a' as usize;
        if alphas[i] == 0 {
            return c;
        }

        alphas[i] -= 1;
    }

    ' '
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn testcase1() {
        let s = "abcd".to_string();
        let t = "abcde".to_string();

        assert_eq!('e', find_the_difference(s, t));
    }

    #[test]
    fn testcase2() {
        let s = "".to_string();
        let t = "e".to_string();

        assert_eq!('e', find_the_difference(s, t));
    }

    #[test]
    fn testcase3() {
        let s = "abcde".to_string();
        let t = "abcdee".to_string();

        assert_eq!('e', find_the_difference(s, t));
    }
}