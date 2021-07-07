<script>
  var inittime = Date.now();
  var somearr = ["p1", "p2", "p3", "p4", "p5", "p6", "p7", "p8", "p9", "p10"]
  function randomlaugh(){
    var i=0;
    for(i=0; i<10; i++){
      document.getElememtById(somearr[i]).innerHTML="";
    }
    var randpos = Math.round((Math.random())*13);
    if(randpos<10){
      document.getElememtById(somearr[randpos]).innerHTML="하하.";
    }
  }
  function time(){
    var time = new Date();
    var diff = time-inittime;
    document.getElementById("now").innerHTML="";
    document.getElementById("first").innerHTML="";
    document.getElementById("second").innerHTML="";
    if((diff>=5000)&&(diff<5300)){
      // 이 코드 보고 있어요? 이런... 좀 부끄러운데. 딱히 특별한 기술이랄 것 없이 마구잡이로 짜놓은 거라.
      // 깜놀 페이지 어떻게 만드는지 참고가 되었으면 좋겠네요! 히히. >.0 희도 많이 사랑해주세요~
      document.getElementById("first").innerHTML="하하.";
    }
    if(diff>=6500){
      document.getElementById("first").innerHTML="내가 보여?";
      if(diff==6800){
        document.getElementById("second").innerHTML="하하.";
      }
    }
    if((diff>=7100)&&(diff<7800)){
      document.getElementById("third").innerHTML="들리는데 왜 무시해?";
    }
    if(diff>9000){
      randomlaugh();
    }
    setInterval("time()",100);
  }
</script>

<body onload="time()">
<p style="color: black">
<span id="p7"></span>인하 씨!<br>
주영 씨!<br>
... 어, 어라? 도윤이 형?<br>
규혁이 형에, 서혜성까지...<br>
다들<span id="p6"></span> 어디 있어요?<br>
하... 대책 없네, 이 사람들.&nbsp;&nbsp;&nbsp;<span id="third" style="color:red"></span><br>
... 말도 없이 사라지면 어쩌자는 거야??<br>
장난하는 것도 아니고, 눈 깜짝할 사이에...!<br>
꼭 재난 상황에서 말 안 듣는 사람들이 먼저 다치지!<br>
... 다들 살아있어야 할텐데...<br>
아... 어지러워...<br>
<br>
</p>
<p style="color: red">
<br>
<br>
<span id="first"></span>
<br>
<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span id="second"></span><br>
<br>
<br>
</p>
<p style="color: black">
...... 헉, 언제 잠들었던 거지?<br>
미쳤지, 미쳤어. 이 상황에서 잠이 와, 이 답 없는 새끼야?<br>
...<br>
...<span id="p1"></span><br>
...<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span id="p2"></span><br>
방... 금...<br>
<br>
뭐였지...?<br>
<br>
누, 누구<span id="p3"></span> 있어요?<br>
<br>
하나도 재미<span id="p10"></span> 없다고요!<br>
<br>
씨, 그만해! 그만하고 나와!<br>
서혜성, 너냐? 이 상황에서 이런 장난 치고싶어?<br>
<span id="p4"></span><br>
<br>
<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span id="p8"></span>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span id="p5"></span><br>
제발 그만! 그만... 그만하라고!<br>
흐, 흐윽... 흑...<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span id="p9"></span>
<br>
</body>