---
layout: simplepage
sitemap:
  exclude: 'yes'
---

<script>
  function jsMove(){
    var baselink = "/labyrinth/un6"
    var pc = document.getElementById('passcode').value;
    alert("접속을 시도합니다. 404에러는 유효하지 않은 비밀번호를 의미합니다.");
    window.open(baselink.concat(pc.toLowerCase()));
  }
</script>


<p>
<img src="/images/receipt.png" alt="receipt" style="width: 40%; height: auto;">
<br>
형식: 숫자<br>
  <form autocomplete='off' onsubmit = "jsMove();">
      <input id = 'passcode' type='text' required><br><br>
      <input type = 'submit' value = '제출합니다.'>
    </form>
</p>
