 pub fn get_row(row_index: i32) -> Vec<i32> {
        let mut last_row = Vec::new();
        let size: usize = row_index as usize + 1;
        for i in 0..size {
            let mut ret = Vec::new();
            for j in 0..i+1 {
                if last_row.len() != 0 && j < last_row.len() && j > 0 {
                    let val = last_row[j - 1] + last_row[j];
                    ret.push(val);
                } else {
                    ret.push(1);
                }
            }

            if i == row_index as usize {
                return ret;
            }
            last_row = ret;
        }

        panic!("should not reach here!");
}

 #[cfg(test)]
 mod tests {
     use super::*;

     #[test]
     fn test_3() {
         let ret = get_row(3);
         assert_eq!(ret.len(), 4);
         assert_eq!(ret[0], 1);
         assert_eq!(ret[1], 3);
         assert_eq!(ret[2], 3);
         assert_eq!(ret[3], 1);
     }
 }