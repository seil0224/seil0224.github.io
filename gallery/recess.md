---
layout: page
title:  "휴식."
subtitle: "(그는 원하던 것을 아직도 찾지 못했다.)"
date:   2021-10-19 23:31:00
---
<style>
.center {
  display: block;
  margin-left: auto;
  margin-right: auto;
}
</style>

<script>
  function jsMove(){
    var baselink = "/answer/evrec"
    var pc = document.getElementById('passcode').value;
    window.open(baselink.concat(pc.toLowerCase()));
  }
</script>

<div style="text-align : center;">
<img src = "/images/recess.png" class="center" style="width: 75%">
<p> 
힌트 0. 각 색의 증가 단위는 1입니다. <br>
힌트 1. 각 숫자만큼 버튼을 눌러야 합니다. (예: 1 -> 한 번)<br>
힌트 2. 왼쪽 위에서 시작해서, 첫 번째 행부터 차례대로 눌러야 합니다.<br></p>
<p> 
<br>
버튼을 누른 결과를 아래에 입력하세요.
형식: 문자(영어, 대소문자 관계 없이 8자) <br>
  <form autocomplete='off' onsubmit = "jsMove();">
      <input id = 'passcode' type='text' required><br><br>
      <input type = 'submit' value = '제출합니다.'>
    </form>
</p>
</div>