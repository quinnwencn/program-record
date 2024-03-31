pub fn add_binary(a: String, b: String) -> String {
    use std::iter;
    let mut carry = 0;
    let mut sum = 0;
    let mut char_vec = a
        .as_bytes()
        .iter()
        .rev()
        .chain(iter::repeat(&b'0'))
        .zip(b.as_bytes().iter().rev().chain(iter::repeat(&b'0')))
        .take(a.len().max(b.len()))
        .map(|(ca, cb)| {
            sum = ca - b'0' + cb - b'0' + carry;
            carry = sum / 2;
            match sum % 2 {
                1 => '1',
                _ => '0',
            }
        }).collect::<Vec<_>>();

    if carry == 1 {
        char_vec.push('1');
    }

    char_vec.iter().rev().collect()
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn testcase1() {
        let s1 = "11".to_string();
        let s2 = "1".to_string();

        assert_eq!("100".to_string(), add_binary(s1, s2));
    }

    #[test]
    fn testcase2() {
        let s1 = "1010".to_string();
        let s2 = "1011".to_string();

        assert_eq!("10101".to_string(), add_binary(s1, s2));
    }
}