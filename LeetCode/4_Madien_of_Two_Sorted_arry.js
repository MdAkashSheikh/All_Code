var findMedianSortedArray = function (num1, num2) {
    
    let nums = num1.concat(num2);
    let length = nums.length;

    nums.sort((a, b) => {return a - b});

    if(length%2 === 1){
        console.log(nums[(length-1)/2]);
        return;
    }

    console.log((nums[(length/2)-1] + nums[length/2]))/2;
}

findMedianSortedArray([1 , 2, 3], [5, 7]);