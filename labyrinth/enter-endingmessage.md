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
<a href="https://docs.google.com/document/d/1hapWWIZl7tzpY3yn86ZTfkJwkpa-H4VGZLq1loVcrnM/edit">남세일 탐정 공인 미궁 힌트</a><br>
엔딩 메시지의 첫 단어만 입력하세요.<br>
<br>
형식: 영어<br>
  <form autocomplete='off' onsubmit = "jsMove();">
      <input id = 'passcode' type='text' required><br><br>
      <input type = 'submit' value = '제출합니다.'>
    </form>
</p>