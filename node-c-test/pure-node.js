var number = 0;
for(var i = 0; i < 24000000; i++){
	var add = 0;
	for(var j = 0; j < 25; j++){
		add *= Math.random();
	}
	number += add;
}
console.log(number/2);
