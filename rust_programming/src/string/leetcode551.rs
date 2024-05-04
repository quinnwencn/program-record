pub fn check_record(s: String) -> bool {
    let mut absent_days = 0;
    let mut consecutive_late_days = 0;
    let mut res = true;
    s.chars().for_each(|c| {
        match c {
            'A' => { 
                        absent_days += 1; 
                        consecutive_late_days = 0;
                    },
            'L' => consecutive_late_days += 1,
            _ => consecutive_late_days = 0,
        };
        if (absent_days >= 2) || (consecutive_late_days >= 3) {
            res = false;
        }
    });

    res
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn testcase1() {
        let s = "LALL".to_string();
        assert_eq!(check_record(s), true);
    }
}