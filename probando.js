const main = () => {
  var x = 0;
  for (let i = 0; i < 100000; i++) {
    for (let j = 0; j < 100000; j++) {
      x += 0.2;
    }
  }
  console.log(x);
};

main();
