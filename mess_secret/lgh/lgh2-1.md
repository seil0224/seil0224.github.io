---
layout: page
title: Dialogue.
subtitle: 아래의 단어들을 잘 기억하세요.
permalink: /event2HGGA/
---

<style>
body{
  background-color: #DDD;
}

</style>

<script>
  function jsMove(){
    var baselink = "/answer/dialogue/1"
    var pc = document.getElementById('passcode').value;
    window.open(baselink.concat(pc.toLowerCase()));
  }
</script>

<body>
<p>
Audience<br>
Birthgiver<br>
FD<br>
PD<br>
Betrayer<br>
Mother<br>
<span style="color: red">주의! 이 다음에 이어질 대화는 게임 베리드 스타즈의 강력한 스포일러 및 이에 관한 잔혹한 묘사를 포함하고 있습니다.</span>
</p>
<p> 
형식: 대소문자 관계 없이 한 단어씩, <b>차례대로</b> 입력하세요. <br>
  <form autocomplete='off' onsubmit = "jsMove();">
      <input id = 'passcode' type='text' required><br><br>
      <input type = 'submit' value = '제출합니다.'>
    </form>
</p>
</body>