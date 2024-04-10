use std::collections::HashMap;

pub fn word_pattern(pattern: String, s: String) -> bool {
    let items: Vec<&str> = s.split(" ").collect();
    if items.len() != pattern.len() {
        return false;
    }
    let mut pattern_hash: HashMap<char, i32> = HashMap::new();
    let mut word_hash: HashMap<&str, i32> = HashMap::new();
    let iter = pattern.chars().zip(items.iter());
    let mut index = 0;
    for (c, word) in iter {
        index += 1;
        if pattern_hash.contains_key(&c) && word_hash.contains_key(word) && pattern_hash[&c] == word_hash[word] {
            continue;
        } else if !pattern_hash.contains_key(&c) && !word_hash.contains_key(word) {
            pattern_hash.insert(c, index);
            word_hash.insert(word, index);
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
        let s = "dog cat cat dog".to_string();
        let pattern = "abba".to_string();

        assert_eq!(word_pattern(pattern, s), true);
    }

    #[test]
    fn testcase2() {
        let s = "dog cat cat fish".to_string();
        let pattern = "abba".to_string();

        assert_eq!(word_pattern(pattern, s), false);
    }

    #[test]
    fn testcase3() {
        let s = "dog cat cat fish".to_string();
        let pattern = "abb".to_string();

        assert_eq!(word_pattern(pattern, s), false);
    }
}
