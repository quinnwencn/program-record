
pub fn longest_palindrome(s: String) -> i32 {
    let mut chars = [0; 100];
    s.chars().for_each(|c| { chars[c as usize - 'A' as usize] += 1; });
    
    let mut count = 0;
    let mut once = true;
    for i in chars {
        if i % 2 == 0 {
            count += i;
        } else if i % 2 == 1 {
            count += i - 1;
            if once {
                count += 1;
                once = false;
            }
        }
    }

    count
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn testcase1() {
        let str = "abccccdd".to_string();
        assert_eq!(longest_palindrome(str), 7);
    }

    #[test]
    fn testcase2() {
        let str = "cccc".to_string();
        assert_eq!(longest_palindrome(str), 4);
    }

    #[test]
    fn testcase3() {
        let str = "ccccc".to_string();
        assert_eq!(longest_palindrome(str), 5);
    }
}
