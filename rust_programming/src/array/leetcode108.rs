use std::rc::Rc;
use std::cell::RefCell;

#[derive(Debug, PartialEq, Eq)]
pub struct TreeNode {
  pub val: i32,
  pub left: Option<Rc<RefCell<TreeNode>>>,
  pub right: Option<Rc<RefCell<TreeNode>>>,
}

#[warn(dead_code)]
impl TreeNode {
  pub fn new(val: i32) -> Self {
    TreeNode {
      val,
      left: None,
      right: None
    }
  }
}

#[warn(dead_code)]
pub struct Solution {}

impl Solution {
    #[warn(dead_code)]
    pub fn sorted_array_to_bst(nums: Vec<i32>) -> Option<Rc<RefCell<TreeNode>>> {
        if nums.is_empty() {
            return None;
        }
        Self::build_bst(&nums)
    }

    #[warn(dead_code)]
    fn build_bst(nums: &[i32]) -> Option<Rc<RefCell<TreeNode>>> {
        if nums.is_empty() {
            return None;
        }

        let (left, right) = nums.split_at(nums.len() / 2);
        let (value, right) = right.split_first().unwrap();
        Some(Rc::new(RefCell::new(TreeNode {
            val: *value,
            left: Self::build_bst(left),
            right: Self::build_bst(right),
        })))
    }
}
