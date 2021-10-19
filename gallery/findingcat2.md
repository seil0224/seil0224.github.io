---
layout: page
title:  "고양이를 찾습니다."
subtitle: "(두 번째 포스터이다.)"
date:   2021-10-03 12:14:00
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
    var baselink = "/answer/ev2"
    var pc = document.getElementById('passcode').value;
    window.open(baselink.concat(pc.toLowerCase()));
  }
</script>

<div style="text-align : center;">
<img src = "/images/findingcat2.png" class="center" style="width: 75%">
<p> 힌트 1. 고양이 사진 아래쪽의 내용만 신경쓰세요.<br>
힌트 2. 12개로 이루어진 것? </p>
<p> 
형식: 문자 <br>
  <form autocomplete='off' onsubmit = "jsMove();">
      <input id = 'passcode' type='text' required><br><br>
      <input type = 'submit' value = '제출합니다.'>
    </form>
</p>
</div>