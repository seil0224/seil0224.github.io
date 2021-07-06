<? php
  $passcode = $_POST['passcode'];
?>

<script language = javascript>
  function test(){
    var p1 = '<?= $passcode ?>';
    if(p1=="1234"){
      location = "https://seil0224.github.io/labyrinth/penetrate.txt";
      return true;
    }
    else{
      location = "https://seil0224.github.io/labyrinth/penetrate.md";
      return false;
    }
  }

  test();
</script>
