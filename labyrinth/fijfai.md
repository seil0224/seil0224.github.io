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
    var baselink = "/labyrinth/fin-fear"
    var pc = document.getElementById('passcode').value;
    alert("드디어.");
    window.open(baselink);
  }
</script>

<body>

<div style = "width:100%; height: 510px; position: relative;">
  <div style="width:100%; height: 510px; position: absolute;">
    <p>
    <span style="color: red">그것</span>은 뒤를 돌아보았다.<br>
    <br>
    제 목소리가 바깥에 닿았나봐요.<br>
    구출되지 못한 일곱 명이 아직 이 아래에 있어요.<br>
    어서 와서 꺼내주셔야 해요.<br>
    <br>
    ...<br>
    <br>
    도망칠 기회는 남아있어.<br>
    출구는 바로 이 옆에 있을 것이다.<br>
    <br>
    아직은 공기가 통하고 있어요.<br>
    하지만 곧 잔해와 가스가 이 현장을 메우겠죠.<br>
    그 때가 되면 늦어요.<br>
    얼른, 얼른...<br>
    </p>
  </div>
  <div style = "padding-left: 300px; padding-top:200px; width:0%; height:0%; position: relative;">
    <div style="width:200px; height:150px; position: absolute;">
      <a href="/labyrinth/fin-escape">
        <img src="/images/invisible.png" alt="escape" style="width: 50px; height: 150px; ">
      </a>
    </div>
  </div>
</div>

<div style="clear: both; position: relative;">
<p>
형식: ??? (깜놀 주의) <br>
  <form autocomplete='off' onsubmit = "jsMove();">
      <input id = 'passcode' type='text' required><br><br>
      <input type = 'submit' value = '제출합니다.'>
    </form>
</p>
</div>
</body>