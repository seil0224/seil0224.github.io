---
layout: simplepage
sitemap:
  exclude: 'yes'
---

<script>
  function jsMove(){
    var baselink = "https://seil0224.github.io/labyrinth/"
    var pc = document.getElementById('passcode').value;
    alert("비밀번호: "+pc);
    window.open(baselink.concat(pc));
  }
</script>


<p>
암호를 입력하세요. <br>
형식: 숫자 <br>
  <form autocomplete='off' onsubmit = "jsMove();">
      <input id = 'passcode' type='text' required><br><br>
      <input type = 'submit' value = '제출합니다.'>
    </form>
</p>

070328

