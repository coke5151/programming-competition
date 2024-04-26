// Weird Algorithm
// https://cses.fi/problemset/result/9118852/

use std::io::stdin;

fn main() {
    let mut input = String::new();
    stdin()
        .read_line(&mut input)
        .ok()
        .expect("Failed to read line");
    let i: i64 = match input.trim().parse() {
        Ok(num) => num,
        Err(_) => {
            println!("Failed to parse");
            return;
        }
    };
    cal(i);
}

fn cal(mut n: i64) -> i64 {
    if n == 1 {
        print!("{} ", n);
        return 0;
    }
    if n % 2 == 0 {
        print!("{} ", n);
        n /= 2;
        return cal(n);
    } else {
        print!("{} ", n);
        n = 3 * n + 1;
        return cal(n);
    }
}
