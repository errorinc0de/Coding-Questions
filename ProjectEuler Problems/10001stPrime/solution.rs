fn main() {
    let mut counter:u32 = 0;
    let mut num:u32 = 0;

    while counter < 10_001 {
        num += 1;

        if is_prime(num) {
            counter += 1;
        }
    }

    println!("{}", num);
}

fn is_prime(n:u32) -> bool {
    if n < 2 {
        return false;
    }
    
    for i in 2..=(n as f64).sqrt() as u32 {
        if n % i == 0 {
            return false;
        }
    }

    return true;
}