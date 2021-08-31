---
layout: simplepage
sitemap:
  exclude: 'yes'
---
<script>
  function jsMove(){
    var baselink = "/labyrinth/hg-"
    var pc = document.getElementById('passcode').value;
    window.open(baselink.concat(pc.toLowerCase()));
  }
</script>
<p>
첫 단어만 입력하세요.
<br>
형식: 영어<br>
  <form autocomplete='off' onsubmit = "jsMove();">
      <input id = 'passcode' type='text' required><br><br>
      <input type = 'submit' value = '제출합니다.'>
    </form>
</p>