<? php
  $passcode = $_GET['passcode'];
  if($passcode == "1234"){
    echo "<script> location = https://seil0224.github.io/labyrinth/penetrate.txt </script>";
  }
  else{
    echo "<script> location = https://seil0224.github.io/labyrinth/penetrate.md </script>";
  }
?>
