---
layout: simplepage
sitemap:
  exclude: 'yes'
---

<script>
  function jsMove(){
    var baselink = "/labyrinth/fs"
    var pc = document.getElementById('passcode').value;
    alert("이번엔 딱히 비밀번호는 아니지요?");
    window.open(baselink.concat(pc.toLowerCase()));
  }
</script>




<p>
하하! 용케도 여기까지 오셨군요?<br>
여기까지 오셨다면... 첫 번째 문제를 풀기 위해 필요했던 '아스키 코드'에 대해서도 아주 잘 이해하고 계시리라 믿습니다!<br>
<span style="color: red">그 단어</span>를 소문자 영어로 쓴 다음, 앞의 네 자를 16진수 아스키 코드로 변환하세요.<br>
그렇게 이해하기 어려운 주문은 아니지요?<br>
<br>
형식: 16진수 숫자 <br>
  <form autocomplete='off' onsubmit = "jsMove();">
      <input id = 'passcode' type='text' required><br><br>
      <input type = 'submit' value = '제출합니다.'>
    </form>

</p>
