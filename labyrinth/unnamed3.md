---
layout: simplepage
sitemap:
  exclude: 'yes'
---

<script>
  function jsMove(){
    var baselink = "https://seil0224.github.io/labyrinth/un3"
    var pc = document.getElementById('passcode').value;
    alert("접속을 시도합니다. 404에러는 유효하지 않은 비밀번호를 의미합니다.");
    window.open(baselink.concat(pc.toLowerCase()));
  }
</script>


<p>
이 때, 신하를 죽인 사람의 위치와 색깔은?<br>
<br>
<img src="https://seil0224.github.io/images/hierarchy.png" style="width: 75%; height: auto;">
<br>
암호를 입력하세요. <br>
형식: 두 단어의 조합 (띄어쓰기 없이) <br>
  <form autocomplete='off' onsubmit = "jsMove();">
      <input id = 'passcode' type='text' required><br><br>
      <input type = 'submit' value = '제출합니다.'>
    </form>
</p>

