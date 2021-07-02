---
layout: page
title: 블로그
subtitle: 사실 게시판에 더 가까운데 제가 이름을 잘못 설정했군요! 근데 일일이 바꾸기가 귀찮아서요! 하하! 전 이만 야식으로 샐러드나 먹으러 가야겠습니다! 빡!
---

<div>
{% assign postsCategory = site.posts | group_by_exp:"post", "post.categories"  %}
{% for category in postsCategory %}
<h4 class="post-teaser__month">
<strong>
{% if category.name %} 
- - - - -  {{ category.name }} - - - - - 
{% else %} 
{{ Print }} 
{% endif %}
</strong>
</h4>
<ul class="list-posts">
{% for post in category.items %}
<li class="post-teaser">
<a href="{{ post.url | prepend: site.baseurl }}">
<span class="post-teaser__title">{{ post.title }}</span>
<span class="post-teaser__date">{{ post.date | date: "%d %B %Y" }}</span>
</a>
</li>
{% endfor %}
</ul>
{% endfor %}
</div>