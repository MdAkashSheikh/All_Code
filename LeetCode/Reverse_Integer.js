var reverse = function(x) {
    let reversed = Math.abs(x).toString().split('').reverse().join('');

    if(reversed > 2 ** 21-1) return 0;

    return Math.sign(x) * reversed;

};

console.log(reverse(548962))