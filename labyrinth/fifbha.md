---
layout: simplepage
sitemap:
  exclude: 'yes'
---

<style>
body{
  background-color: #333333;
}
p{
  color: white;
}
</style>

<script>
  function jsMove(){
    var baselink = "/labyrinth/fin-"
    var pc = document.getElementById('passcode').value;
    alert("이 곳까지 오느라 고생 많으셨습니다.");
    window.open(baselink.concat(pc.toLowerCase()));
  }
</script>
<p>

누군가는 <span style="color:red">그것</span>을 감추었고,<br>
누군가는 그것으로부터 눈을 돌렸다.<br>
그럼으로써 나는 그것으로부터 외면당했으며,<br>
시간이 지난 지금까지도...<br>
... 지금까지도 그것을 놓지 못한 채 이 곳에 남아있다.<br>
그것을 알리려는 한 마디 목소리는<br>
그렇지 않은 백 마디 비난에 파묻히기 마련이다.<br>
<br>
자, 그래서...<br>
'<span style="color:red">그것</span>'은 ─<br>
<br>
형식: 영어(5자)<br>
  <form autocomplete='off' onsubmit = "jsMove();">
      <input id = 'passcode' type='text' required><br><br>
      <input type = 'submit' value = '제출합니다.'>
    </form>
</p>