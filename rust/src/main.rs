// abc139
// https://atcoder.jp/contests/abc139/tasks/abc139_b

use std::io::stdin;

fn main() {
    let mut input = String::new();
    stdin().read_line(&mut input).expect("Fail to stdin");
    input = input.trim().to_string();
    let nums: Vec<i32> = input
        .split_whitespace()
        .map(|s| s.parse().expect("輸入不是數字"))
        .collect();

    let each_socket: i32 = nums[0];
    let target_socket: i32 = nums[1];
    let mut total_strips: i32 = 0;
    let mut total_socket: i32 = 1;
    while total_socket < target_socket {
        total_socket = total_socket - 1 + each_socket;
        total_strips += 1;
    }
    println!("{}", total_strips)
}
