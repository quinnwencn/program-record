pub fn dest_city(paths: Vec<Vec<String>>) -> String {
    let mut set = std::collections::HashMap::new();
    for it in paths.iter() {
        set.insert(&it[0], 1);
    }

    for it in paths.iter() {
        if set.get(&it[1]) == None {
            return it[1].to_string();
        }
    }

    // never reach here
    String::new()
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test1() {
        let paths = vec![vec!["London".to_string(), "New York".to_string()],
                         vec!["New York".to_string(),"Lima".to_string()],
                         vec!["Lima".to_string(),"Sao Paulo".to_string()]];
        assert_eq!("Sao Paulo", dest_city(paths).as_str());
    }

    #[test]
    fn test2() {
        let paths = vec![vec!["B".to_string(),"C".to_string()],
                         vec!["D".to_string(),"B".to_string()],
                         vec!["C".to_string(),"A".to_string()]];
        assert_eq!("A", dest_city(paths).as_str());
    }
}
