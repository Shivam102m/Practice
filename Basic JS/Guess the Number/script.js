const Result = document.getElementById("result");

let value;

let randNum = randNumGen();

function randNumGen (){
  let randNum = Math.floor(Math.random()*10) + 1;
  return randNum;
}

document.querySelectorAll(".btn").forEach(btn => {
  btn.onclick = () => guessNumber(Number(btn.textContent));
});


function guessNumber (value){
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