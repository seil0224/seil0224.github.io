---
layout: page
title:  "고양이를 찾습니다."
subtitle: "부디 제 고양이를 찾아주세요."
---
<style>
.center {
  display: block;
  margin-left: auto;
  margin-right: auto;
}
</style>

<script>
  function jsMove(){
    var baselink = "/answer/ev1003"
    var pc = document.getElementById('passcode').value;
    window.open(baselink.concat(pc));
  }
</script>

<div style="text-align : center;">
<img src = "/images/findingcat.png" class="center" style="width: 75%">
<p> 제발... </p>
<p> 
형식: 숫자 <br>
  <form autocomplete='off' onsubmit = "jsMove();">
      <input id = 'passcode' type='text' required><br><br>
      <input type = 'submit' value = '제출합니다.'>
    </form>
</p>
</div>