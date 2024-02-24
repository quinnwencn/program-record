pub fn can_place_flowers(flowerbed: Vec<i32>, n: i32) -> bool {
    let mut is_planted = false;
    let mut count = n;
    let len = flowerbed.len();
    for i in 0..len - 1 {
        if flowerbed[i] == 0 {
            if flowerbed[i + 1] == 0 && !is_planted {
                is_planted = true;
                count -= 1;
            } else {
                is_planted = false;
            }
        } else {
            is_planted = true;
        }
    }

    if !is_planted && flowerbed[len - 1] == 0 {
        count -=1;
    }

    count <= 0
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn testcase1() {
        let flowerbed = vec![0,0,1,0,0];
        assert_eq!(can_place_flowers(flowerbed, 2), true);
    }

    #[test]
    fn testcase2() {
        let flowerbed = vec![1,0,0,0,1];
        assert_eq!(can_place_flowers(flowerbed, 1), true);
    }

    #[test]
    fn testcase3() {
        let flowerbed = vec![0,0,1,0,0];
        assert_eq!(can_place_flowers(flowerbed, 1), true);
    }

    #[test]
    fn testcase4() {
        let flowerbed = vec![0,0,1,0,0,1,0,0];
        assert_eq!(can_place_flowers(flowerbed, 3), false);
    }
}
