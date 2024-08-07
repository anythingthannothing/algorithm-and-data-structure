const intToRoman = function (num) {
  let result = "";
  let arr = [
    [1, "I"],
    [4, "IV"],
    [5, "V"],
    [9, "IX"],
    [10, "X"],
    [40, "XL"],
    [50, "L"],
    [90, "XC"],
    [100, "C"],
    [400, "CD"],
    [500, "D"],
    [900, "CM"],
    [1000, "M"],
  ];

  let n = arr.length;
  while (num > 0) {
    for (let i = n - 1; i >= 0; i--) {
      if (arr[i][0] <= num) {
        result += arr[i][1];
        num -= arr[i][0];
        break;
      }
    }
  }

  return result;
};
