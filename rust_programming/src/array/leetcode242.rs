pub fn is_anagram(s: String, t: String) -> bool {
    let mut char_hash = std::collections::HashMap::new();
    for i in s.chars() {
        char_hash.entry(i).and_modify(|e| { *e += 1} ).or_insert(1);
    }

    for i in t.chars() {
        char_hash.entry(i).and_modify(|e| { *e -= 1} ).or_insert(-1);
    }

    for (_, v) in char_hash.iter() {
        if *v != 0 {
            return false;
        }
    }

    true
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn expect_false() {
        let s = "cat".to_string();
        let t = "rat".to_string();
        assert_eq!(false, is_anagram(s, t));
    }

    #[test]
    fn expect_true() {
        let s = "anagram".to_string();
        let t = "nagaram".to_string();
        assert_eq!(true, is_anagram(s, t));
    }
}
