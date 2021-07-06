<? php
  $passcode = $_GET["passcode"];
  if($passcode == ""){
    echo "<script> location = https://seil0224.github.io/labyrinth/penetrate.txt </script>";
  }
  else{
    echo "<script> location = https://seil0224.github.io/labyrinth/penetrate.md </script>";
  }
?>
