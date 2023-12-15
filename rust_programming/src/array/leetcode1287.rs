pub fn find_special_integer(arr: Vec<i32>) -> i32 {
    let size = arr.len() / 4 + 1;
    let mut now = arr[0];
    let mut count = 0;
    for e in arr.iter() {
        if *e == now {
            count += 1;
            if count >= size {
                return now;
            }
        } else {
            now = *e;
            count = 1;
        }
    }
    now
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn one_element() {
        let arr = vec![1];
        assert_eq!(1, find_special_integer(arr));
    }

    #[test]
    fn all_the_same() {
        let arr = vec![1, 1];
        assert_eq!(1, find_special_integer(arr));
    }

    #[test]
    fn normal_test() {
        let arr = vec![1,2,2,6,6,6,6,7,10];
        assert_eq!(6, find_special_integer(arr));
    }
}