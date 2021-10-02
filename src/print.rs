pub fn run() {
    // Print a line on the console
    println!("Print.rs file!");

    // Formatting
    println!("Printing a Number: {}", 1);
    println!("This is {} for {}", "cool", "us");

    // Positional Arguments
    println!("{0} is {1} and {0} likes to {2}", "Adesh", "cool", "code");

    // Named Arguments
    println!(
        "{name} likes to {activity}",
        name = "Jhon",
        activity = "play cricket"
    );

    // Placeholder traits
    println!("10 in Binary: {:b} Hex: {:x} Octal: {:o}", 10, 10, 10);

    // Placeholder for debug traits == Printing tuples and arrays
    println!("{:?}", (12, true, "hello"));
}
