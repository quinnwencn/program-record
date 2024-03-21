pub fn roman_to_int(s: String) -> i32 {
    let key_map = std::collections::HashMap::from([
        ('I', 1),
        ('V', 5),
        ('X', 10),
        ('L', 50),
        ('C', 100),
        ('D', 500),
        ('M', 1000)
    ]);
    let mut former = 10000;
    let mut res = 0;
    for c in s.chars() {
        let val = key_map[&c];
        res += val;
        if val > former {
            res -= 2 * former;
        }
        former = val;
    }
    res
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn testcase1() {
        let s = "III".to_string();
        assert_eq!(3, roman_to_int(s));
    }

    #[test]
    fn testcase2() {
        let s = "MCMXCIV".to_string();
        assert_eq!(1994, roman_to_int(s));
    }

    #[test]
    fn testcase3() {
        let s = "LVIII".to_string();
        assert_eq!(58, roman_to_int(s));
    }
}