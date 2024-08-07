const computeArea = function (ax1, ay1, ax2, ay2, bx1, by1, bx2, by2) {
  const rectA = (ax2 - ax1) * (ay2 - ay1);
  const rectB = (bx2 - bx1) * (by2 - by1);

  const rectCsX = Math.min(ax2, bx2) - Math.max(ax1, bx1);
  const rectCsY = Math.min(ay2, by2) - Math.max(ay1, by1);
  let rectC = rectCsX > 0 && rectCsY > 0 ? rectCsX * rectCsY : 0;

  return rectA + rectB - rectC;
};
