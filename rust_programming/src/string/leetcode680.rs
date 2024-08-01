pub fn valid_palindrome(s: String) -> bool {
    let vs = s.chars().collect::<Vec<char>>();
    let mut left = 0;
    let mut right = vs.len() - 1;
    let mut jump = 1;
    while left < right {
        if vs[left] == vs[right] {
            left += 1;
            right -= 1;
        } else if jump != 0 {
            if vs[left + 1] == vs[right] {
                left += 2;
                right -= 1;
            } else if vs[left] == vs[right - 1] {
                left += 1;
                right -= 2;
            } else {
                return false;
            }
            jump  = 0;
        } else {
            return false;
        }
    }

    true
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn testcase1() {
        let s = "aguokepatgbnvfqmgmlcupuufxoohdfpgjdmysgvhmvffcnqxjjxqncffvmhvgsymd\
        jgpfdhooxfuupuculmgmqfvnbgtapekouga".to_string();

        assert_eq!(true, valid_palindrome(s));
    }
}