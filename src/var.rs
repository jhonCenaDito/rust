// Variables hold primitive data or refrences to data
// Variables are immutable by default
// Rust is a block-scoped language

pub fn run() {
    let name = "Adesh";
    println!("Hey {}!!", name);
    let mut age = 10;
    println!("You are {}", age);
    age = age + 1;
    println!("Now, you are {}", age);

    // Multiple assignment
    let (my_name, my_age) = ("Adesh", 10);
    println!("{} is {}", my_name, my_age);
}
