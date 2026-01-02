const guessBtn = document.getElementById("btn-guess");
const Num = document.getElementById("num");
const Result = document.getElementById("result");

let value = 0;

let randNum = randNumGen();

function randNumGen (){
  let randNum = Math.floor(Math.random()*10) + 1;
  return randNum;
}

guessBtn.onclick = function (){
  value = Number(Num.value)
  console.log(randNum);
  if (value == randNum){
    Result.innerHTML = "Congratulations you guessed the Number!";
  }
  else if (value > randNum){
    Result.innerHTML = "Guess Lower.....";
  }
  else{
    Result.innerHTML = "Guess Higher......";
  }
}