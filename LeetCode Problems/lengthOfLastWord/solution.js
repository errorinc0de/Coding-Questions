var lengthOfLastWord = function(s) {
    return s.trim().split(' ').splice(-1)[0].length
};