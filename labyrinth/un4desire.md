---
layout: simplepage
sitemap:
  exclude: 'yes'
---

<script>
  function jsMove(){
    var baselink = "/labyrinth/un4desire"
    var pc = document.getElementById('passcode').value;
    window.open(baselink.concat(pc.toLowerCase()));
  }
</script>

<p>
도망치고 도망치다가 여기까지 왔어. <br>
이젠 어디로 가야 할지 모르겠어. <br>
나는 왜 여기로 왔지? <br>
어디서부터 잘못된거지? <br>
나는... <br>
<br>
형식: 소문자 영단어 (맨 밑) <br>
  <form autocomplete='off' onsubmit = "jsMove();">
      <input id = 'passcode' type='text' required><br><br>
      <input type = 'submit' value = '제출합니다.'>
    </form>
<br>
</p>



