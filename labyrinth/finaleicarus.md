---
layout: simplepage
sitemap:
  exclude: 'yes'
---
<script>
  function jsMove(){
    var baselink = "/labyrinth/fi"
    var pc = document.getElementById('passcode').value;
    alert("이 곳까지 오느라 고생 많으셨습니다.");
    window.open(baselink.concat(pc.toLowerCase()));
  }
</script>
<p>

이번에는 분기에 따라 다른 문제가 제공됩니다.<br>
문제를 푸신 분들은 대부분 모든 루트의 스토리를 동시에 보면서 오셨던 것 같지만요...<br>
(칫... 똑똑한 사람들!)<br>
두 개의 시간선은 별개라는 것을 염두에 두시고 봐주셨으면 합니다.<br>
즐겨주셔서 감사합니다.<br>
다음으로 넘어가기 위해, 11번째 연막을 걷어내기 위해 입력했던 암호를 다시 한 번 입력해주세요.<br>

<br>
형식: 영어(4자)<br>
  <form autocomplete='off' onsubmit = "jsMove();">
      <input id = 'passcode' type='text' required><br><br>
      <input type = 'submit' value = '제출합니다.'>
    </form>
</p>