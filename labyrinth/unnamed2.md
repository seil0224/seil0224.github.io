---
layout: simplepage
sitemap:
  exclude: 'yes'
---

<script>
  function jsMove(){
    var baselink = "https://seil0224.github.io/labyrinth/un2"
    var pc = document.getElementById('passcode').value;
    alert("접속을 시도합니다. 404에러는 유효하지 않은 비밀번호를 의미합니다.");
    window.open(baselink.concat(pc));
  }
</script>


<p>
나는 당신과 죄악을 공유하는 유일무이한 사람이야.<br>
<span id="ssy">ì ì¹ì°...</span><br>
네가 날 이렇게 대하고도 무사할 것 같아?<br>
<br>
A = 💉🤫<br>
B = 😈🎥<br>
C = 👓🤝<br>
D = 🎤👎<br>
E = 😡📃<br>
<br>
암호를 입력하세요. <br>
형식: 알파벳 소문자 <br>
  <form autocomplete='off' onsubmit = "jsMove();">
      <input id = 'passcode' type='text' required><br><br>
      <input type = 'submit' value = '제출합니다.'>
    </form>
</p>

<!-- Adding the glitch effect -->
<script> document.getElementsById('ssy')[0].classList.add('glitch'); </script>
