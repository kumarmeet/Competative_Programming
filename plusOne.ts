const plusOne = function(digits:number[]) {
    return (BigInt(digits.join("")) + 1n).toString().split("").map((val) => +val);
};
