const btn = document.getElementById('btn-gen');
const result = document.getElementById('result');

let rand;
btn.onclick = function(){
   rand = Math.floor(Math.random() * (100 ) + 1);
   result.innerHTML = rand;
}