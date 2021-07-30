---
layout: simplepage
sitemap:
  exclude: 'yes'
---

<script>
  var inittime = Date.now();
  function time(){
    var time = new Date();
    var diff = time-inittime;
    document.getElementById("first").innerHTML="&nbsp;";
    document.getElementById("second").innerHTML="&nbsp;";
    document.getElementById("third").innerHTML="&nbsp;";
    var rand1 = Math.round((Math.random())*4);
    var rand2 = rand1+1+Math.round((Math.random())*3);
    var rand3 = rand2+1+Math.round((Math.random())*3);
    if(diff>=rand1*1000){
    document.getElementById("first").innerHTML="<br>제가 이렇게 멀쩡하게 살아있는데."
    }
    if(diff>=rand2*1000){
    document.getElementById("second").innerHTML="<br>자기 컨디션도 관리를 못 해서, ê°ì´부터 시작해, 온 몸이 ì©ì´ë¤ì´ê°ê³ , 악취를 풍ê¸°ê³ , ë°±ê³¨만 남고, ..."
    }
    if(diff>=rand3*1000){
    document.getElementById("third").innerHTML="<br>다들 어디에 있어요..."
    }
  }
</script>



<body onload="time()">
<p>
<span style="color: #a8e3ae">
하고자 하는 것은 단 한 가지입니다. <b>구조 요청.</b> <br>
저는 지금 그 자리에 그대로 있습니다. <br>
제 목소리를 마지막으로 들으셨던 곳이요. <br></span>
<br>
어디 계세요? <br>
제가 말씀드렸잖아요, 어디 가지 말고 가만히 계시라고. <br>
주영 씨를 걱정하는 마음은 알겠지만, 똑같이 위험해지실 수 있어요. <br>
무대 아래로 발을 헛디뎌 떨어진다거나, <br>
그러다가 파편에 맞아 비명조차 못 지르고 죽어버린다거나. <br>
제 이야기는 아니고요. <br>
저게 제 이야기면 제가 여기에 있을 이유가 없잖아요, 그렇죠? <span id="first" class="glitch">&nbsp;</span><br>
저, 이대로 돌아가면 PD님한테 혼날 거예요...<br>
출연자 컨디션 관리는 커녕, 이렇게 다들 뿔뿔이 흩어져버리고... <span id="second" class="glitch">&nbsp;</span><br>
저는 출연자들 <span style="color:red">별명</span> 같은거 안 믿어요. <br>
당신은... 진짜로 다른 사람보다 우월하고 멋있으니까. <br>
그러니까... 믿어주세요. 믿고 따라와주세요. <span id="third" class="glitch"></span><br>
<br>
</p>
</body>