---
layout: simplepage
sitemap:
  exclude: 'yes'
---
<script>
  function jsMove(){
    var baselink = "/labyrinth/finale"
    var pc = document.getElementById('passcode').value;
    window.open(baselink.concat(pc.toLowerCase()));
  }
</script>
<p>
분수가 솟아나 밝은 햇빛 아래 반짝입니다.<br>
그 아래에서 황제는 활짝 웃고 있습니다,<br>
사람들의 환호 소리 가운데.<br>
<br>
은화 주머니가 절벽 아래로 떨어지는군요.<br>
녹아버린 날개의 깃털처럼 흩날립니다.<br>
<br>
제가 너무 많은 걸 바랐나보죠.<br>
<br>

<a href="/labyrinth/scenarioend-p2">이전</a> 
<br>
형식: 영어<br>
  <form autocomplete='off' onsubmit = "jsMove();">
      <input id = 'passcode' type='text' required><br><br>
      <input type = 'submit' value = '제출합니다.'>
    </form>
</p>