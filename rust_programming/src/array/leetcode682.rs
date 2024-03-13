pub fn cal_points(operations: Vec<String>) -> i32 {
    let mut stack = Vec::new();
    for i in 0..operations.len() {
        match operations[i].as_str() {
            "C" => _ = stack.pop(),
            "+" => {
                let len = stack.len() - 1;
                let sec = stack[len];
                let fir = stack[len - 1];
                stack.push(fir + sec);
            },
            "D" => stack.push(stack[stack.len() - 1] * 2),
            _ => stack.push(operations[i].parse().unwrap()),
        }
    }

    stack.iter().sum()
}

#[cfg(test)]
mod test {
    use super::*;

    #[test]
    fn testcase1() {
        let ops =
            vec!["5".to_string(),"2".to_string(),"C".to_string(),"D".to_string(),"+".to_string()];
        assert_eq!(cal_points(ops), 30);
    }

    #[test]
    fn testcase2() {
        let ops =
            vec!["5".to_string(),"-2".to_string(),"4".to_string(),"C".to_string(),"D".to_string(),
                 "9".to_string(),"+".to_string(),"+".to_string()];
        assert_eq!(cal_points(ops), 27);
    }
}