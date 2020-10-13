var plusOne = function(digits) {
    let c = 1
    for(let i = digits.length - 1; i > 0; i--){
        const x = digits[i] + c
        if (x < 10){
            digits[i] = x
            return digits
        }
        else{
            digits[i] = x % 10
        }
    }
    return digits
};