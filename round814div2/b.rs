// not finished

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

        if nums[1] % 4 == 0 {
            writeln!(output, "NO").unwrap();
            continue;
        } else {
            writeln!(output, "YES").unwrap();
        }
        
        if nums[1] % 2 == 1 {
            for i in 0..(nums[0] / 2) {
                writeln!(output, "{} {}", i * 2 + 1, i * 2 + 2).unwrap();
            }
        } else {
            for i in 0..(nums[0] / 4) {
                writeln!(output, "{} {}", 4 * i + 3, 4 * i + 4).unwrap();
            }
            for i in 0..(nums[0] / 2) {
                if i % 2 == 0 && i != 0 {
                    continue;
                }
                writeln!(output, "{} {}", i * 2 + 1, i * 2 + 2).unwrap();
            }
        }
    }
    print!("{}", output);
}
