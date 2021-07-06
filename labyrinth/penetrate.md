---
layout: simplepage
sitemap:
  exclude: 'yes'
---

<p>
암호를 입력하세요. <br>
형식: 숫자 <br>
  
  <form action = 'answer1.php' method="post" autocomplete='off'>
    <input id = 'passcode' type='text' required><br>
    <input type = 'submit' value = '제출합니다.'>
  </form>
</p>


<!-- Adding the glitch effect -->
<script> document.getElementsByTagName('body')[0].classList.add('glitch'); </script>
