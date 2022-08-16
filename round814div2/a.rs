use std::io;
use std::fmt::Write;

fn input_integers() -> Vec<i32> {
    let mut s = String::new();

    io::stdin().read_line(&mut s).unwrap();

    let values: Vec<i32> = s
        .as_mut_str()
        .split_whitespace()
        .map(|s| s.parse().unwrap())
        .collect();

    values
}

fn main() {
    let mut output = String::new();

    let t = input_integers()[0] as usize;

    for _ in 0..t {
        let nums = input_integers();
        
        if nums[0] % 2 == nums[1] % 2 {
            writeln!(output, "Tonya").unwrap();
        } else {
            writeln!(output, "Burenka").unwrap();
        }
    }
    print!("{}", output);
}
