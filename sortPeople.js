var sortPeople = function(names, heights) {
    return names.map((item,i) => [item,heights[i]]).sort((a, b) => b[1] - a[1]).flat().filter((val) => typeof val !== 'number')
};
