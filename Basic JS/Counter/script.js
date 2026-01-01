const counter = document.getElementById("counter");
const increaseBtn = document.getElementById("btn-increase");
const decreaseBtn = document.getElementById("btn-decrease");
const resetBtn = document.getElementById("btn-reset");

let count=0;

increaseBtn.onclick = function (){
  count++;
  counter.innerHTML = count;
}

decreaseBtn.onclick = function (){
  count--;
  counter.innerHTML = count;
}

resetBtn.onclick = function (){
  count = 0;
  counter.innerHTML = count;
}