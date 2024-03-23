pub fn is_valid(s: String) -> bool {
    let mut stack = Vec::new();
    for c in s.chars() {
        match c {
            '(' => stack.push(')'),
            '[' => stack.push(']'),
            '{' => stack.push('}'),
            '}' | ']' | ')' =>  {
                if Some(c) != stack.pop() {
                    return false;
                }
            },
            _ => (),
        }
    }

    stack.is_empty()
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn testcase1() {
        let str = "()[]{}".to_string();
        assert_eq!(is_valid(str), true);
    }

    #[test]
    fn testcase2() {
        let str = "()[{]}".to_string();
        assert_eq!(is_valid(str), false);
    }
}