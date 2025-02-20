<?php
// Display a welcome message
echo "<h1>Welcome to my PHP page!</h1>";

// Handle form input (if the form is submitted)
if ($_SERVER["REQUEST_METHOD"] == "POST") {
    // Get the user input from the form
    $name = htmlspecialchars($_POST['name']);  // Prevent XSS attacks
    echo "<p>Hello, " . $name . "!</p>";
}
?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>PHP Example</title>
</head>
<body>

    <!-- Form to take user input -->
    <form method="POST">
        <label for="name">Enter your name:</label>
        <input type="text" id="name" name="name">
        <input type="submit" value="Submit">
    </form>

</body>
</html>
